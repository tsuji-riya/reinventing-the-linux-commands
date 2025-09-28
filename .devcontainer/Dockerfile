FROM ubuntu:latest

RUN apt-get update && apt-get install -y \
    build-essential \
    git \
    wget \
    curl \
    wget \
    vim \
    ninja-build \
    cmake \
    checkinstall \
    zlib1g-dev\
    libssl-dev

WORKDIR /workspace

CMD ["/bin/bash"]