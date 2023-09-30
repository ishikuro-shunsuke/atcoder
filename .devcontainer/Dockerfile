FROM debian:stable-slim

RUN apt update && apt install -y \
      nodejs \
      npm \
      python3 \
      python3-pip \
      gdb \
      g++

RUN npm install -g atcoder-cli
RUN pip3 install --break-system-packages online-judge-tools

ARG USERNAME=vscode
RUN groupadd ${USERNAME} && useradd -g ${USERNAME} -s /bin/bash -m ${USERNAME}
USER vscode

ARG HOME=/home/${USERNAME}

COPY --chown=${USERNAME}:${USERNAME} . ${HOME}
RUN acc config default-template cpp
ENV CPLUS_INCLUDE_PATH ${CPLUS_INCLUDE_PATH}:${HOME}/.local/include/
ENV PATH ${HOME}/.local/bin:${PATH}
