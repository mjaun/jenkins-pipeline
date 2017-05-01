# How to run this example

## Setup Jenkins

Start Jenkins with docker-compose:

```
# docker-compose build
# docker-compose up -d
```

Open up your browser and navigate to http://localhost:8080. Unlock Jenkins by providing the initial password located here (needs root access):

```
# cat jenkins_home/secrets/initialAdminPassword
```

Choose `Select plugins to install`. Make sure the following plugins are installed:

* Pipeline
* Git plugin

Configure the admin user as you wish.

## Build demo application

Create a new job. Enter any name and select 'Pipeline' as type. Scroll down to the Pipeline properties. Select 'Pipeline script from SCM'.

Select 'Git' as SCM and use the following repository URL: `/repository`. In a real project you would refer to your git server here, but for simplicity of this example, the repository is mounted into the Jenkins container by docker compose. Enter the following script path: `demo_app/env/Jenkinsfile`. Save all settings and trigger your first build with 'Build Now'.
