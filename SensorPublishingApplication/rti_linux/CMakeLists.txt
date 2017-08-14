cmake_minimum_required(VERSION 3.0)
project(pub)


message(WARNING "${INCLUDE_DIRECTORIES}")

get_property(inc_dirs DIRECTORY PROPERTY INCLUDE_DIRECTORIES)
message("inc_dirs = ${inc_dirs}")

add_executable(${PROJECT_NAME}  ${DDS_SOURCES} MainSensorPublishingApplication.cpp SensorPublisher.cpp)


target_link_libraries(${PROJECT_NAME}
        ${NDDS_LIBRARIES} -lnddscore -lnddscppd -lnddscd -lnddscored -ldl -lnsl -lm -lpthread -lrt
        )
