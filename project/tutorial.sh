#################### build an image from dockerfile  ###

docker build -t general .

##################### Launch a container ##################

docker run -it --detach -p 8888:8888 --name test general
docker stop test
docker restart test

###################### Execute the container test  ########

docker exec -it test /bin/bash
docker cp server.cpp test:/home/user/
docker stop test
