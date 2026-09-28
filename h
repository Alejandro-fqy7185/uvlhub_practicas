* [33m5ca1677[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mmain[m[33m, [m[1;31morigin/feature/practicandogit_a[m[33m, [m[1;32mfeature/practicandogit_a[m[33m)[m feat: Add testing file. Closes #2
* [33m7a670f5[m[33m ([m[1;31morigin/main[m[33m, [m[1;31morigin/HEAD[m[33m)[m add GitHub Actions workflow for deploying to Render
* [33md7cedc9[m fix ssl v2
* [33m4828605[m fix ssl
* [33m10eccd4[m fix
*   [33m940bbd4[m Merge remote-tracking branch 'origin/main'
[32m|[m[33m\[m  
[32m|[m * [33m286be76[m Remove --skip-ssl option from mariadb command
[32m|[m * [33m633541a[m Add --skip-ssl option to mariadb command
* [33m|[m   [33mfeed0b2[m Merge remote-tracking branch 'upstream/main'
[33m|[m[35m\[m [33m\[m  
[33m|[m [35m|[m[33m/[m  
[33m|[m[33m/[m[35m|[m   
[33m|[m * [33mcb8bec8[m fix(rosemary): scaffolded locustfile waits between requests, test/coverage/selenium exit non-zero on failure, locust needs a running web container
[33m|[m * [33meff3eca[m fix(vagrant): strip the quotes of .env values before handing them to Ansible
[33m|[m * [33m02c0a05[m fix(config): only rewrite the port of a MySQL URI, test it, and pass MARIADB_PORT to db:console
[33m|[m * [33m8e9db73[m fix(devcontainer): point the editor at /opt/venv, where Dockerfile.dev installs the dependencies
[33m|[m * [33mc278f9b[m fix(rosemary): feature:create only chowns to the host uid when it runs as root
[33m|[m * [33m2e20fa5[m fix(docker): name the development Compose project uvlhub instead of docker
[33m|[m * [33mf48b505[m fix(config): honour MARIADB_PORT in the SQLAlchemy URI
* [35m|[m [33m6c91231[m feat(notepad): add notepad feature with CRUD operations and templates
[35m|[m[35m/[m  
* [33m736d26e[m fix(vagrant): make the provisioning work, and work twice
* [33mac65438[m perf(docker): build the images in two stages, and let the app be PID 1
* [33mb6f1871[m fix(docker): stop publishing the app and the database in production
* [33mb1d2ff9[m chore(devcontainer): terminate the file with a newline
* [33meaf329b[m fix(dev): point the devcontainer at /workspace and move Vagrant to noble
* [33m1be0e7a[m fix(docker): ship pyproject.toml in the production images
* [33m13d2e30[m fix(webhook): resolve the docker client on first use, not at import
* [33me2158d3[m fix(deploy): register webhook in production so the CD pipeline can reach it
* [33m9d421df[m fix(dataset): give the tracking cookies the same two-year lifetime as hubfile
* [33m07f98ae[m fix(team): title the team page as Team, not View dataset
* [33m832268f[m fix(zenodo): tidy the client, and select the production config in production
* [33m6cae68a[m fix(explore): make search results deterministic and the tags filter real
* [33mbde5975[m fix(stats): count real rows and stop recording downloads that never happened
* [33mb0b180a[m fix(security): close the webhook token bypass and profile data loss
* [33ma952a5a[m fix(flamapy): actually parse the model instead of always reporting it valid
* [33m63539ad[m refactor(rosemary): defer whole-project locust runs to the framework
* [33mb810631[m chore(deps): move to splent_framework 1.7.1 and lean on its grid support
* [33m9dcb08a[m fix(e2e): pin the browser window size in the driver helper
* [33m89692bc[m fix(rosemary): scaffold e2e tests that can actually run
* [33m48f1873[m fix(rosemary): scaffold new features against the asset registry
* [33mb830956[m refactor(nav): compose the public sidebar from the nav registry
* [33m67b9e28[m refactor(assets): declare feature javascript through the asset registry
* [33mbb818be[m refactor(app): wire Jinja through the framework's JinjaManager
* [33m6c885c8[m chore(deps): move to splent_framework 1.7.0
* [33m583842d[m fix(rosemary): run locust across every feature, and quieten locust:stop
* [33me77d421[m fix(rosemary): resolve feature:list through the product's own loader
* [33m84f7ad3[m fix(rosemary): stop passing a TOML file to flake8 as an INI config
* [33m3a86d38[m fix(rosemary): make locust runnable from inside the docker stack
* [33m2db1204[m fix(hubfile): default WORKING_DIR when resolving a hubfile path
* [33m2ba2257[m test(e2e): add browser tests for the end-to-end layer
* [33m5187c63[m fix(assets): serve feature javascript from the js subfolder
* [33m124f259[m test(load): add locust files for the load-testing layer
* [33ma04020b[m fix(e2e): drive the selenium grid instead of a local browser
* [33m72369bd[m test: rebuild the testing pyramid across all features
* [33m2a86db8[m fix(rosemary): derive the locust docker network from the running container
* [33ma39813b[m style: apply black and isort across app and rosemary
*   [33m5365b6d[m Merge branch 'refactor/splent-framework' into main
[36m|[m[1;31m\[m  
[36m|[m * [33m7e0be0f[m deploy(vagrant): bump provisioning to Python 3.13 + install rosemary, not workspace root
[36m|[m * [33m5bffad2[m refactor(rosemary): rename make:feature → feature:create
[36m|[m * [33md5ed943[m chore: rosemary audit + pin requirements + drop Spanish comments
[36m|[m * [33m1d7ae41[m test: align rosemary coverage with the new test-pyramid flags
[36m|[m * [33m9686a26[m test: introduce 5-level testing pyramid + rosemary test markers
[36m|[m * [33m9d9a669[m refactor(public): module-level service instances, drop intermediate vars
[36m|[m * [33m0964a61[m refactor(explore): split /explore into two routes by verb
[36m|[m * [33meaefa61[m refactor(profile, auth): use splent_framework's form_success / form_error
[36m|[m * [33m5bedad6[m fix(profile): drop ghost handle_service_response, use flash + redirect
[36m|[m * [33m006ef81[m refactor(webhook): single deploy() method on the service; align paths to /workspace
[36m|[m * [33m9878442[m refactor(profile): pagination via repository; route stays thin
[36m|[m * [33mc9f1b89[m refactor(hubfile): pull view/download orchestration into services and repos
[36m|[m * [33mcdd8794[m refactor(dataset): move download-record lookup to repository
[36m|[m * [33m20c1aab[m refactor(dataset): drain remaining handlers into the service
[36m|[m * [33m5d8731a[m refactor(auth): own login lifecycle via init_feature(app)
[36m|[m * [33mdcf7894[m refactor(dataset): move /dataset/upload orchestration into the service
[36m|[m * [33mdd0680d[m refactor(flamapy): move UVL parsing and exports into the service
[36m|[m * [33mdbc2433[m fix: lay assets out by type to match splent_framework's resolver
[36m|[m * [33m4044299[m fix: route asset URLs through splent_framework's BaseBlueprint contract
[36m|[m * [33m7753268[m fix: dataset seeder points at app/features (not app/modules)
[36m|[m * [33m08c864a[m fix: share splent_framework's SQLAlchemy singleton instead of forking
[36m|[m * [33m0478072[m fix: tolerate seeders without an explicit priority
[36m|[m * [33m20a987b[m docker: rename container WORKDIR /app → /workspace
[36m|[m * [33m95c4bd8[m fix: add PYTHONPATH=/app so rosemary can import the app package
[36m|[m * [33m19f66c5[m fix: install rosemary, not the workspace root, in dev entrypoint
[36m|[m * [33m6025d75[m deps: drop all version pins from requirements.txt
[36m|[m * [33m0edc7a6[m deps: bump dd 0.5.7 → 0.6.0 for Python 3.13 wheel
[36m|[m * [33md3e0204[m ci: align Python and paths in workflows with the refactored layout
[36m|[m * [33m16d4335[m refactor: rebuild Dockerfile.locust on python:3.13-slim with splent_framework
[36m|[m * [33m0141789[m refactor: replace .moduleignore with [tool.splent.features_*]
[36m|[m * [33m283e915[m refactor: extract feature loader; let features inject their own config
[36m|[m * [33mf0f60df[m refactor: port make:module to make:feature with splent-aligned scaffold
[36m|[m * [33m6fabea3[m refactor: remove core/ — replaced by splent_framework
[36m|[m * [33mbfff3fd[m refactor: hand-rolled create_app using splent_framework managers
[36m|[m * [33mac33671[m refactor: rename app/modules to app/features
[36m|[m * [33m5168f71[m refactor: split pyproject — uvlhub at root, rosemary in its own subdir
[36m|[m * [33m58570ec[m refactor: rewrite core.* imports to splent_framework.*
[36m|[m * [33mf2c5d12[m test: remove per-module test scaffolding
[36m|[m * [33me0b1b56[m deps: switch to splent_framework, bump Python to 3.13
* [1;31m|[m [33ma610a40[m fix: Updates dependencies
[1;31m|[m[1;31m/[m  
* [33m72d6053[m feat: Implements Selenium grid in Docker env.
* [33m7f09e34[m feat: Add devcontainer config
* [33m13e1aa3[m fix: Updates README
* [33maa1875e[m feat: Improves the naming of workflows
* [33m622e692[m fix: Add test database env to test workflow
* [33m7b7de92[m feat: Add comments to workflows
* [33m85b11df[m feat: Improves GH Actions
* [33m55b25df[m fix: Improves test actions workflow
* [33m66419a3[m fix: Improves GHActions
* [33mf79bbed[m :Revert "feat: Check for outdated dependencies"
* [33m97b961a[m feat: Check for outdated dependencies
* [33mbed2f43[m fix: Fixes versions in Docker environment
* [33m282cf50[m fix: Fixes bug with setup.py
* [33m8347793[m fix: Fixes linter worflow
* [33me7088f0[m feat: Upgrades rosemary and requirements
* [33m264bf65[m feat: First attempt to fix Rosemary
* [33m38445a3[m fix: Deletes unnecesary files
* [33m4fb93c8[m fix: Fixes Selenium tests
* [33m2a24252[m feat: Changes Selenium webdriver to Firefox
* [33m691fbe1[m feat: Add rosemary zip <uvus>
* [33ma752bb7[m fix: Change venv to vagrant_venv
* [33m40a1338[m fix: Fix .moduleignore
* [33m36b56b6[m Fixes provisioning problem with Vagrant
*   [33m6e6e530[m Merge pull request #57 from EGC-G2-tortilla/task/fix-playbook
[1;32m|[m[1;33m\[m  
[1;32m|[m * [33m9a3cc6f[m fix: Solved playbook deprecated dependencies issue
[1;32m|[m[1;32m/[m  
* [33meccf7b2[m fix: Fix relative path in selenium file test
* [33mf08b03b[m fix: Fix bug with chmod in Docker entrypoints script
* [33mde1fffd[m fix: Fix missing MariaDB port in Docker entrypoints
* [33mebb0ece[m fix: Fix moduleignore
* [33m44d5fe6[m fix: Change Vagrant box to jammy64
* [33m3db39fe[m fix: Fix make:module command
* [33m75870d3[m fix: Fix loading scripts from modules
* [33m8758c12[m fix: Fix bug in env local
* [33m8a20b98[m fix: Fix migrations
* [33meb7455c[m fix: Fix issue with webhook in Vagrant
* [33m681ed87[m fix: Normalize all the line endings
* [33m0411424[m fix: Add .gitattributes to enforce LF line endings
* [33mf5cc4f3[m feat: Update rosemary
* [33m0a65400[m feat: Update core and docker
* [33mc6573e0[m fix: Fix base blueprints
* [33me1a6cf9[m fix: Fix test workflow
* [33m12c5166[m fix: Fix linter
* [33m1a8726b[m feat: Add dynamic scripts route in modules
* [33m0d848ba[m Revert "Implements individual loading of script.js per module"
* [33m1d875a4[m Implements individual loading of script.js per module
* [33mc3dd1c5[m fix: Fix bug in requirements and seeder
* [33md886588[m fix: Fix Linter
* [33md11a1b7[m feat: Delete unnecessary route in flamapy module
* [33m2a0e95a[m feat: Update scripts according to Python slim image
* [33ma317626[m feat: Refactor dataset, featuremodel, explore, hubfile, public
* [33mdc5f8f4[m fix: Fix linter
* [33mca4c14b[m fix: Fix bug in create dataset
* [33m72913fa[m feat: Improve GUI dataset files counter
* [33ma233f85[m fix: Fix linter
* [33m3c34369[m fix: Delete Flamapy model
*   [33m737bd9f[m fix: Fix conflicts
[1;34m|[m[1;35m\[m  
[1;34m|[m * [33m2fd6b9e[m fix: Fix filename when exporting
[1;34m|[m * [33m3188c67[m feat: Improve GUI with flama integration
[1;34m|[m * [33m1b3450f[m fix: Fix hubfiles paths
[1;34m|[m * [33me21cbb7[m feat: Uncouple files in Hubfile
[1;34m|[m * [33m3de3e31[m feat: Update requirements
[1;34m|[m * [33m688f15a[m feat: Update all docker images
[1;34m|[m * [33md35f5a7[m fix: Adjust wait-for-db script to new Python image
[1;34m|[m * [33m86e1c90[m feat: First step to fix flamapybranch
[1;34m|[m * [33m68d56cd[m feat: added the ability to check the syntax of uvl models using flamapy, also, to translate the models to cnf and glencoe. Preliminray support for SAT opertations and WASM
[1;34m|[m * [33m5be9d89[m fix: error on using the alpine image to use sat solving in the backend
* [1;35m|[m [33m9c2c3ba[m fix: Fix linter
* [1;35m|[m [33m028aab8[m fix: Fix bug in dataset seeder
* [1;35m|[m [33m646ed80[m feat: First steps
* [1;35m|[m [33m42c38df[m feat: Implement database seeder
* [1;35m|[m [33m68f3ca5[m feat: Improve errors screen
* [1;35m|[m [33mb76a64b[m fix: Fix linter
* [1;35m|[m [33mdd5c8e2[m feat: Improve feature model view
* [1;35m|[m [33ma2f1fb2[m fix: Fix bug uploading dataset due to Zenodo disconnection
* [1;35m|[m [33m5310833[m feat: Improved management of out-of-sync datasets
* [1;35m|[m [33mf30f7e3[m fix: Fix linter
* [1;35m|[m [33m017f58e[m fix: Fix bug in publication type with blank space between words
* [1;35m|[m   [33m797c677[m fix: Fix merge conflicts
[1;36m|[m[31m\[m [1;35m\[m  
[1;36m|[m * [1;35m|[m [33ma626f74[m feat: Improve view dataset GUI
[1;36m|[m * [1;35m|[m [33mbc6837e[m feat: Include cite to JSS paper
[1;36m|[m * [1;35m|[m [33md55a3db[m fix: Fix Linter
[1;36m|[m * [1;35m|[m [33m66c8004[m fix: Fix important bug in test connection to Zenodo
[1;36m|[m * [1;35m|[m [33m5ceb9ee[m fix: Fix linter
[1;36m|[m * [1;35m|[m [33m9c0ebb5[m fix: Fix Zenodo API url
[1;36m|[m * [1;35m|[m [33m19143b8[m feat: Add DOI mapping
[1;36m|[m * [1;35m|[m [33m633e42a[m feat: Improve dataset url
[1;36m|[m * [1;35m|[m [33m89a894a[m feat: Improve feature models counter
[1;36m|[m * [1;35m|[m [33mfddc0e1[m feat: Improve performanc getting latest synchronized dataset
[1;36m|[m * [1;35m|[m [33me3f46ae[m feat: Improve performance in index
[1;36m|[m [1;35m|[m[1;35m/[m  
[1;36m|[m * [33m54521af[m feat: Show version number
[1;36m|[m *   [33m8941720[m Merge pull request #42 from diverso-lab/refactoring
[1;36m|[m [32m|[m[33m\[m  
[1;36m|[m [32m|[m * [33m3fe8933[m feat: Decoupling uploads_dir from init
[1;36m|[m * [33m|[m [33md010033[m feat: Disable the webhook module in the Render deployment
[1;36m|[m * [33m|[m [33m393b77c[m feat: Implement module:list command
[1;36m|[m * [33m|[m [33mb9be5b4[m feat: Implement module ignore
* [33m|[m [33m|[m [33m4ad66e8[m fix: selenium test for create new dataset
* [33m|[m [33m|[m [33m58ae6b3[m feat: use dataset form in /dataset/upload route
[33m|[m[33m/[m [33m/[m  
* [33m|[m   [33mceaad2d[m Merge pull request #41 from diverso-lab/drorganvidez-patch-1
[33m|[m[35m\[m [33m\[m  
[33m|[m [35m|[m[33m/[m  
[33m|[m[33m/[m[35m|[m   
[33m|[m * [33m8c24145[m Update Dockerfile.prod
[33m|[m[33m/[m  
* [33mcb75a94[m feat: Rename blueprints to modules
*   [33m6cdeefd[m Merge pull request #40 from diverso-lab/develop
[36m|[m[1;31m\[m  
[36m|[m * [33m1299637[m fix: Fix linter
[36m|[m * [33m55c53c8[m fix: Fix dataset routes
[36m|[m * [33m86943af[m fix: Fix coverage
[36m|[m * [33m0f2dd52[m fix: Fix merge conflicts
[36m|[m[36m/[m[1;33m|[m 
[36m|[m * [33mc4109db[m refactor: create services and use instead repository
[36m|[m * [33m184d281[m feat: create service for auth and implement rollback when create user and profile
[36m|[m * [33mb530c93[m refactor: create services and repositories and replace in routes
[36m|[m * [33m8e81de6[m refactor: create ZenodoService, create Dataset repositories and both applied to Dataset routes
* [1;33m|[m [33m914a292[m fix: Fix migrations
* [1;33m|[m [33m593f273[m fix: Fix Linter
* [1;33m|[m [33me2d65b1[m feat: Ending webhook
* [1;33m|[m [33medd8d7b[m fix: Fix webhook
* [1;33m|[m [33m2f36455[m fix: Fix migrations
* [1;33m|[m [33md278cc1[m feat: Improve webhook
* [1;33m|[m [33m3497398[m fix: Fix webhook
* [1;33m|[m [33mb48f0c6[m feat: Improve CI / CD
* [1;33m|[m [33m4615bdf[m feat: Improve CI / CD
* [1;33m|[m [33m1b14546[m feat: Improve CI / CD
* [1;33m|[m [33md863d35[m feat: Improve CI / CD
* [1;33m|[m [33m54228ec[m feat: Improve CI / CD
* [1;33m|[m [33m9d1cd6d[m feat: Improve CI / CD
* [1;33m|[m [33m03e72cd[m fix: Fix README
* [1;33m|[m [33mada8810[m fix: Fix webhook post route
* [1;33m|[m [33m344302c[m feat: Improve webhook
* [1;33m|[m [33m29c65a7[m feat: Implement webhook
* [1;33m|[m [33maad5308[m fix: Fix webhook
* [1;33m|[m [33m5cba126[m feat: First steps to webhook
* [1;33m|[m [33m682810b[m feat: Update dependencies
* [1;33m|[m [33m4007ca9[m feat: Improve DockerHub deployment
* [1;33m|[m [33mca3e7e2[m fix: Fix ssl renew script
* [1;33m|[m [33m01f55aa[m fix: Fix SSL setup
* [1;33m|[m [33m345b5e5[m fix: Fix SSL setup
* [1;33m|[m [33m643acfe[m fix: Fix SSL setup
* [1;33m|[m [33m3cc8529[m fix: Fix migrations
* [1;33m|[m [33m98257b5[m fix: Fix profile summary
* [1;33m|[m   [33m7eb9872[m Merge pull request #37 from pparramen/Merge-RF-10
[1;34m|[m[1;35m\[m [1;33m\[m  
[1;34m|[m * [1;33m|[m [33m95840ab[m fix: fix routes.py profile for Lint
[1;34m|[m * [1;33m|[m   [33m9a0929e[m Merge branch 'RF-10-Pablo' into Merge-RF-10
[1;34m|[m [1;36m|[m[1;34m\[m [1;33m\[m  
[1;34m|[m [1;36m|[m[1;34m/[m [1;33m/[m  
[1;34m|[m[1;34m/[m[1;36m|[m [1;33m|[m   
* [1;36m|[m [1;33m|[m [33md10aee3[m fix: Fix linter
* [1;36m|[m [1;33m|[m [33md067453[m fix: Fix cookie counter
* [1;36m|[m [1;33m|[m [33mff868b7[m feat: Improve view
* [1;36m|[m [1;33m|[m [33m0541b07[m feat: Improve view
* [1;36m|[m [1;33m|[m   [33m3507a34[m Merge pull request #36 from pparramen/Merge-New-RF-12
[32m|[m[33m\[m [1;36m\[m [1;33m\[m  
[32m|[m * [1;36m|[m [1;33m|[m [33md4ed38d[m fix: delete blank line
[32m|[m * [1;36m|[m [1;33m|[m [33m9ab8dcb[m fix: Update routes.py public for Python Lint Build
[32m|[m * [1;36m|[m [1;33m|[m [33m91dad30[m fix: Update routes.py dataset for Python Lint Build
[32m|[m * [1;36m|[m [1;33m|[m [33mbb3f5c0[m fix: added SQLAlchemyEnum
[32m|[m * [1;36m|[m [1;33m|[m [33mecb3a0d[m fix: Update models.py dataset for Python Lint Build
[32m|[m * [1;36m|[m [1;33m|[m   [33m555cf85[m Merge branch 'RF-12-Pablo' into Merge-New-RF-12
[32m|[m [34m|[m[32m\[m [1;36m\[m [1;33m\[m  
[32m|[m [34m|[m[32m/[m [1;36m/[m [1;33m/[m  
[32m|[m[32m/[m[34m|[m [1;36m|[m [1;33m|[m   
* [34m|[m [1;36m|[m [1;33m|[m [33m2b69839[m feat: Improve Rosemary
* [34m|[m [1;36m|[m [1;33m|[m [33mb7bd36f[m fix: Fix bug in uploads folder in prod env
* [34m|[m [1;36m|[m [1;33m|[m [33m8cd7765[m fix: Fix bootstrap CDN to v5
* [34m|[m [1;36m|[m [1;33m|[m   [33mef0ca61[m Merge pull request #35 from pparramen/Merge-RF-05
[36m|[m[1;31m\[m [34m\[m [1;36m\[m [1;33m\[m  
[36m|[m * [34m|[m [1;36m|[m [1;33m|[m [33m98501dd[m fix: Update blank lines and whitespaces in routes.py for python lint
[36m|[m * [34m|[m [1;36m|[m [1;33m|[m [33ma7752f6[m fix: Update routes.py for the review of the rest of the bugs for python lint
[36m|[m * [34m|[m [1;36m|[m [1;33m|[m [33mdaf25db[m fix: Update routes.py for Python Lint Build
[36m|[m * [34m|[m [1;36m|[m [1;33m|[m   [33m55f38b6[m Merge branch 'RF-05-Pablo' into Merge-RF-05
[36m|[m [1;32m|[m[36m\[m [34m\[m [1;36m\[m [1;33m\[m  
[36m|[m [1;32m|[m[36m/[m [34m/[m [1;36m/[m [1;33m/[m  
[36m|[m[36m/[m[1;32m|[m [34m|[m [1;36m|[m [1;33m|[m   
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33me331a9d[m feat: Change init-db script
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m47c99f8[m fix: Fix entrypoint in dev
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33mf0c002c[m feat: improve rosemary test
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33mb7a58cb[m feat: Improve rosemary make:module
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m8491bd2[m feat: Improve rosemary maek:module command
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m531f14a[m fix: Delete unnecesary file
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m3328af1[m feat: Improve CI/CD
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m3999a8f[m fix: Fix Render
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m3066105[m fix: Fix empty entrypoint
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m2ad10e7[m feat: Render deployment
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m4f2993d[m feat: Render deployment
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m83b0b36[m feat: Render deployment
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33mecbf2a7[m feat: Render deployment
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m13a1fa2[m feat: Add env production example
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33ma41ebc7[m core: Big refactoring for deployment
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33mf0be276[m fix: Fix Docker deployment in production
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m2f68176[m fix: Fix Docker production deployment
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m9457e39[m fix: Fix CI pytest (selenium conflict)
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m9d3fbad[m fix: Fix Linter
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m3b54e0a[m fix: Fix Selenium IDE test
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m7a8daad[m feat: Finishing Selenium
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m3df5d0c[m feat: Finishing Selenium
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m3996eba[m feat: Preparing Selenium
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33m490e498[m feat: First steps with selenium
* [1;32m|[m [34m|[m [1;36m|[m [1;33m|[m [33mc48057a[m feat: Improve Vagrantfile decoupling env variables
[1;33m|[m [1;32m|[m[1;33m_[m[34m|[m[1;33m_[m[1;36m|[m[1;33m/[m  
[1;33m|[m[1;33m/[m[1;32m|[m [34m|[m [1;36m|[m   
* [1;32m|[m [34m|[m [1;36m|[m [33mb49c15c[m feat: Improve rosemary locust
* [1;32m|[m [34m|[m [1;36m|[m [33m57ee0ad[m fix: Fix linter in Locust
* [1;32m|[m [34m|[m [1;36m|[m [33m6bab577[m fix: Fix rosemary locust in local environment
* [1;32m|[m [34m|[m [1;36m|[m [33ma203b5f[m feat: Big improve for Locust in Docker environment
* [1;32m|[m [34m|[m [1;36m|[m [33m33cb6b5[m feat: Add locustfile for dataset
* [1;32m|[m [34m|[m [1;36m|[m [33mafbcc92[m feat: Locust for Vagrant environment
* [1;32m|[m [34m|[m [1;36m|[m [33m21a016f[m feat: Locust for local environment
* [1;32m|[m [34m|[m [1;36m|[m [33me16b04e[m feat: Locust for Docker environment
* [1;32m|[m [34m|[m [1;36m|[m [33m33b4816[m fix: Fix locust
* [1;32m|[m [34m|[m [1;36m|[m [33m6d1cc80[m fix: Fix locust
* [1;32m|[m [34m|[m [1;36m|[m [33m20be3ca[m fix: Fix Locust
* [1;32m|[m [34m|[m [1;36m|[m [33m9474bb9[m fix: Fix Locust
* [1;32m|[m [34m|[m [1;36m|[m [33m7b0ce38[m feat: First steps with Locust
* [1;32m|[m [34m|[m [1;36m|[m [33ma5fdd48[m feat: Fix working dir in Docker environment
* [1;32m|[m [34m|[m [1;36m|[m [33md6bdbd7[m feat: Improve Vagrant
* [1;32m|[m [34m|[m [1;36m|[m [33m453dd5d[m feat: Vagrant deployment available
* [1;32m|[m [34m|[m [1;36m|[m [33mdbe942a[m chore: Fix CD
* [1;32m|[m [34m|[m [1;36m|[m [33m73825bb[m chore: Move all docker files to /docker
* [1;32m|[m [34m|[m [1;36m|[m [33m847fe8e[m fix: Fix Rosemary commands
* [1;32m|[m [34m|[m [1;36m|[m [33me7fb76a[m fix: Fix rosemary commands with env var
* [1;32m|[m [34m|[m [1;36m|[m [33mb305e05[m fix: Fix README official docs link
* [1;32m|[m [34m|[m [1;36m|[m [33m04eadc8[m feat: Rewrite README and remove docs
* [1;32m|[m [34m|[m [1;36m|[m   [33m19412c2[m Merge pull request #34 from diverso-lab/api
[1;34m|[m[1;35m\[m [1;32m\[m [34m\[m [1;36m\[m  
[1;34m|[m * [1;32m\[m [34m\[m [1;36m\[m   [33mda9386f[m Merge branch 'api' of https://github.com/diverso-lab/uvlhub into api
[1;34m|[m [1;36m|[m[31m\[m [1;32m\[m [34m\[m [1;36m\[m  
[1;34m|[m [1;36m|[m * [1;32m|[m [34m|[m [1;36m|[m [33ma7dcf64[m feat: Update requirements
[1;34m|[m [1;36m|[m * [1;32m|[m [34m|[m [1;36m|[m [33m61caecd[m feat: Implement Serializer
[1;34m|[m [1;36m|[m * [1;32m|[m [34m|[m [1;36m|[m [33m681ae0d[m feat: First steps to implement Generic API
[1;34m|[m [1;36m|[m[1;34m/[m [1;32m/[m [34m/[m [1;36m/[m  
[1;34m|[m[1;34m/[m[1;36m|[m [1;32m|[m [34m|[m [1;36m|[m   
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m   [33m750ecc1[m Merge branch 'develop'
[1;34m|[m [32m|[m[1;34m\[m [1;32m\[m [34m\[m [1;36m\[m  
[1;34m|[m [32m|[m[1;34m/[m [1;32m/[m [34m/[m [1;36m/[m  
[1;34m|[m[1;34m/[m[32m|[m [1;32m|[m [34m|[m [1;36m|[m   
* [32m|[m [1;32m|[m [34m|[m [1;36m|[m [33md17cc76[m feat: Refactor chore
[33m|[m * [1;32m|[m [34m|[m [1;36m|[m   [33m3f5e988[m Merge branch 'develop'
[33m|[m [34m|[m[33m\[m [1;32m\[m [34m\[m [1;36m\[m  
[33m|[m [34m|[m[33m/[m [1;32m/[m [34m/[m [1;36m/[m  
[33m|[m[33m/[m[34m|[m [1;32m|[m [34m|[m [1;36m|[m   
* [34m|[m [1;32m|[m [34m|[m [1;36m|[m [33m93601ff[m fix: Fix bug in docker compose (production)
[35m|[m * [1;32m|[m [34m|[m [1;36m|[m   [33m6beaa8f[m Merge branch 'develop'
[35m|[m [36m|[m[35m\[m [1;32m\[m [34m\[m [1;36m\[m  
[35m|[m [36m|[m[35m/[m [1;32m/[m [34m/[m [1;36m/[m  
[35m|[m[35m/[m[36m|[m [1;32m|[m [34m|[m [1;36m|[m   
* [36m|[m [1;32m|[m [34m|[m [1;36m|[m [33m54cc20e[m feat: Upgrading requirements
[1;31m|[m * [1;32m|[m [34m|[m [1;36m|[m   [33m194aaf9[m Merge branch 'develop'
[1;31m|[m [1;32m|[m[1;31m\[m [1;32m\[m [34m\[m [1;36m\[m  
[1;31m|[m [1;32m|[m[1;31m/[m [1;32m/[m [34m/[m [1;36m/[m  
[1;31m|[m[1;31m/[m[1;32m|[m [1;32m|[m [34m|[m [1;36m|[m   
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m49e7787[m fix: Fix bug in Dockerfile.prod
[1;33m|[m * [1;32m|[m [34m|[m [1;36m|[m   [33m615d175[m Merge branch 'develop'
[1;33m|[m [1;34m|[m[1;33m\[m [1;32m\[m [34m\[m [1;36m\[m  
[1;33m|[m [1;34m|[m[1;33m/[m [1;32m/[m [34m/[m [1;36m/[m  
[1;33m|[m[1;33m/[m[1;34m|[m [1;32m|[m [34m|[m [1;36m|[m   
* [1;34m|[m [1;32m|[m [34m|[m [1;36m|[m [33m6d0d39d[m fix: Fix README
[1;35m|[m * [1;32m|[m [34m|[m [1;36m|[m   [33mfede869[m Merge branch 'develop'
[1;35m|[m [1;36m|[m[1;35m\[m [1;32m\[m [34m\[m [1;36m\[m  
[1;35m|[m [1;36m|[m[1;35m/[m [1;32m/[m [34m/[m [1;36m/[m  
[1;35m|[m[1;35m/[m[1;36m|[m [1;32m|[m [34m|[m [1;36m|[m   
* [1;36m|[m [1;32m|[m [34m|[m [1;36m|[m [33ma7ef8dd[m feat: Improve env and docker compose
[31m|[m * [1;32m|[m [34m|[m [1;36m|[m   [33m170bd88[m Merge branch 'develop'
[31m|[m [32m|[m[31m\[m [1;32m\[m [34m\[m [1;36m\[m  
[31m|[m [32m|[m[31m/[m [1;32m/[m [34m/[m [1;36m/[m  
[31m|[m[31m/[m[32m|[m [1;32m|[m [34m|[m [1;36m|[m   
* [32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m0d6ad8f[m fix: Fix bug in production environments
[33m|[m * [1;32m|[m [34m|[m [1;36m|[m   [33m76e528f[m Merge branch 'main' of github.com:diverso-lab/uvlhub
[33m|[m [34m|[m[35m\[m [1;32m\[m [34m\[m [1;36m\[m  
[33m|[m [34m|[m * [1;32m\[m [34m\[m [1;36m\[m   [33m8f731cd[m Merge pull request #4 from diverso-lab/develop
[33m|[m [34m|[m [36m|[m[33m\[m [1;32m\[m [34m\[m [1;36m\[m  
[33m|[m [34m|[m[33m_[m[36m|[m[33m/[m [1;32m/[m [34m/[m [1;36m/[m  
[33m|[m[33m/[m[34m|[m [36m|[m [1;32m|[m [34m|[m [1;36m|[m   
[33m|[m [34m|[m * [1;32m|[m [34m|[m [1;36m|[m   [33m07500de[m Merge pull request #3 from diverso-lab/develop
[33m|[m [34m|[m [1;32m|[m[1;33m\[m [1;32m\[m [34m\[m [1;36m\[m  
[33m|[m * [1;32m|[m [1;33m|[m [1;32m|[m [34m|[m [1;36m|[m [33m3df4a2f[m feat: Add Zenodo sync note in main
[33m|[m[33m/[m [1;32m/[m [1;33m/[m [1;32m/[m [34m/[m [1;36m/[m  
* [1;32m|[m [1;33m/[m [1;32m/[m [34m/[m [1;36m/[m [33m30f8161[m feat: Add Zenodo sync note
[1;33m|[m [1;32m|[m[1;33m/[m [1;32m/[m [34m/[m [1;36m/[m  
[1;33m|[m[1;33m/[m[1;32m|[m [1;32m|[m [34m|[m [1;36m|[m   
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mf866dd4[m feat: Update requirements
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m3aecfb7[m fix: Refactoring rosemary update command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m65f6f02[m fix: Fix rosemary bug install with entrypoint
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m148c186[m fix: Fix rosemary
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33made39bd[m feat: First steps for wiki
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m6d3c651[m feat: Implement rosemary compose:env
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mf2dfdeb[m feat: Improve README
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mbb838c8[m feat: Implement rosemary route:list command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m4194174[m fix: Fix minor bug in AuthSeeder
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mba50c11[m fix: Fix bugs in Seeders
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m3c9981e[m feat: Implement Seeders
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m73f30f2[m feat: Implement rosemary clear:cache command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m703301e[m feat: Update to Python 3.12
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m140422b[m feat: Implement rosemary db:console command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mfbc2647[m feat: Implement rosemary db:migrate command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mf8a16e7[m feat: Improve rosemary db:reset command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33meae4f25[m feat: Implement rosemary db:reset command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m5054bdc[m feat: Add auth test
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m6983b06[m fix: Fix linter errors
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m3a5ffb8[m feat: Improve test suite
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m49f0646[m feat: Add 'test' folder to rosemary make:module command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m9839fa6[m fix: Fix CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mdf4fe39[m fix: Fix bugs and refactoring
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m73ce9b6[m fix: Fix bugs and refactoring
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m32d815d[m fix: Fix bugs in rosemary commands
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33me56c6b5[m feat: Implement rosemary clear commands
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mcc38335[m feat: Implement rosemary clear command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mc5b9a16[m feat: Implement rosemary coverage command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33ma6e26b7[m fix: Fix .env file and init configs
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33me5b57ad[m feat: Implement rosemary linter
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m044ff5a[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m8196dc4[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m3721020[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mfe87ccf[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mc4010a3[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m121b566[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33me134f89[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m87d7fcd[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mc43e8c9[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m0a9f3f8[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m9413d95[m fix: Fix test CI
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m3ccdec4[m feat: Implements rosemary test command
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m4850bc9[m feat: Implement first test in a module
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33m809fdc6[m fix: Fix bug in Rosemary
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33ma922740[m feat: Implement 'make:module' command in Rosemary
* [1;32m|[m [1;32m|[m [34m|[m [1;36m|[m [33mbc6abbd[m feat: Implement Rosemary CLI
[1;32m|[m[1;32m/[m [1;32m/[m [34m/[m [1;36m/[m  
* [1;32m|[m [34m|[m [1;36m|[m [33mdcfb764[m fix: Fix flake8 style code problems
* [1;32m|[m [34m|[m [1;36m|[m [33m847d26b[m fix: Fix DOI url
* [1;32m|[m [34m|[m [1;36m|[m [33mc66b6ba[m fix: Fix nginx production configuration
* [1;32m|[m [34m|[m [1;36m|[m [33m32b70c7[m fix: Fix certbot script
* [1;32m|[m [34m|[m [1;36m|[m [33mf1522cb[m feat: Improve nginx prod configuration
* [1;32m|[m [34m|[m [1;36m|[m [33m02e5bec[m feat: Improve nginx prod configuration
* [1;32m|[m [34m|[m [1;36m|[m [33md9839a5[m feat: Improve deployment configuration
* [1;32m|[m [34m|[m [1;36m|[m [33mf1a0dfc[m feat: Add UVLHub DOIs
* [1;32m|[m [34m|[m [1;36m|[m [33m5053513[m fix: Fix dependencies
* [1;32m|[m [34m|[m [1;36m|[m   [33mb3b7331[m Merge pull request #2 from diverso-lab/refactoring
[1;34m|[m[1;35m\[m [1;32m\[m [34m\[m [1;36m\[m  
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m [33m7230916[m fix: Update dependencies
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m [33m1f3b4a8[m feat: Change MySQL to MariaDB
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m [33m1bd7d83[m feat: Implements BaseRepository and BaseService
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m [33m45fa040[m feat: Improve code
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m [33me220801[m fix: Fixes refactoring
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m [33md07471f[m fix: Fixes dynamic loading of blueprints
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m [33m4e57f6e[m fix: Fix wait-for-db script
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m [33md094652[m feat: Script for web container init
[1;34m|[m * [1;32m|[m [34m|[m [1;36m|[m [33mceb18bc[m feat: It does not work
[1;34m|[m[1;34m/[m [1;32m/[m [34m/[m [1;36m/[m  
* [1;32m|[m [34m|[m [1;36m|[m [33me84b3b6[m fix: Fix update dependencies script
* [1;32m|[m [34m|[m [1;36m|[m [33m062b140[m feat: Add modal alert in Authors
* [1;32m|[m [34m|[m [1;36m|[m [33m5b76f1b[m fix: Update dependencies
* [1;32m|[m [34m|[m [1;36m|[m   [33m9e5d6c1[m feat: Add scripts folder
[1;36m|[m[31m\[m [1;32m\[m [34m\[m [1;36m\[m  
[1;36m|[m * [1;32m|[m [34m|[m [1;36m|[m [33mc83cd14[m Add files via upload
[1;36m|[m * [1;32m|[m [34m|[m [1;36m|[m [33m20b7301[m Update README.md
[1;36m|[m * [1;32m|[m [34m|[m [1;36m|[m [33m272ca24[m Update README.md
[1;36m|[m * [1;32m|[m [34m|[m [1;36m|[m [33ma994f0b[m fix: Fix bug in keyword no default present value
* [31m|[m [1;32m|[m [34m|[m [1;36m|[m [33m6a974b4[m feat: Create Scripts folder
* [31m|[m [1;32m|[m [34m|[m [1;36m|[m [33m4941053[m fix: Fix bug in keywords defalt no present
[31m|[m [31m|[m * [34m|[m [1;36m|[m [33m42b297b[m fix: changing directories to resolve conflict
[31m|[m [31m|[m * [34m|[m [1;36m|[m [33me5dadf1[m feat: add copy button and download button in the uvl preview text mode
[31m|[m [31m|[m * [34m|[m [1;36m|[m [33m435ace4[m feat: add uvl preview in text mode
[31m|[m [31m|[m[31m/[m [34m/[m [1;36m/[m  
[31m|[m [31m|[m * [1;36m|[m [33m223c59c[m fix: changing the directory structure
[31m|[m [31m|[m * [1;36m|[m [33m5ebc155[m feat: add hub statistics
[31m|[m [31m|[m[31m/[m [1;36m/[m  
[31m|[m [31m|[m * [33mccf956d[m fix: update directories
[31m|[m [31m|[m * [33m1456c37[m feat: add pagination in user datasets table
[31m|[m [31m|[m * [33mdaed08a[m refactor: refactor profile module
[31m|[m [31m|[m * [33m87aa81a[m feat: add view profle user
[31m|[m [31m|[m[31m/[m  
[31m|[m * [33m8ec53c8[m feat: Add script for update dependencies
[31m|[m * [33m0aa49dd[m feat: Upgrade dependencies
[31m|[m[31m/[m  
* [33m62b73b6[m feat: Add script for SSL automatic generation
* [33m284be21[m fix: Fix login concurrence problem
* [33m45a51be[m feat: Increase nginx timeout
* [33m735d43c[m fix: Fix Zenodo upload files delay
* [33mcfbf53d[m feat: Improve Gunicorn timeout, workers and threads
* [33m61be771[m feat: Improve gunicorn deployment
* [33m6116b01[m feat: Upgrade gunicorn deployment with logs
* [33m211abca[m feat: Improve nginx configuration
* [33m7da8abf[m feat: Add logs
* [33m6f8a54a[m feat: Add delay to Zenodo upload files
* [33md26059d[m feat: Add chat system uvl
* [33ma39b682[m feat: Implements statistics
* [33m8654dd4[m fix: Up to 100M in nginx request
* [33m819de64[m fix: Fix bug in populate script
* [33m6a7c59c[m feat: Minor change in populate
* [33m054893c[m feat: Improve populate
* [33me6457e9[m feat: Fix minor bug
* [33mc05c9ff[m feat: Implement Team
* [33m49cfd46[m feat: Minor changes in populat
* [33m9f6e436[m fix: Fix bug in populate
* [33mf76a77f[m feat: Improve populate with several UVl models
* [33m6c3864e[m feat: Fix bug in Zenodo
* [33m65079ce[m feat: Add creation date in Users
* [33m49e9a48[m feat: Implements Download and Visualization Records
* [33m9384ba1[m feat: Improve UI
* [33mdf75c92[m feat: Improve uploading files
* [33mb78ec3b[m feat: Improve dataset form
* [33m891db00[m feat: Delete temp folder by default
* [33mc9e32b3[m feat: Check ORCID in main authors
* [33m4a7503e[m feat: Fix orcid field in dataset
* [33mf93caf5[m feat: Fix bug in profile
* [33m0639bd6[m feat: Implement UserProfile
* [33m17e82a9[m feat: Endpoint for dataset creation
* [33ma52a330[m feat: Fix minor bug in Docker Swarm
* [33md83584d[m feat: Add Docker Swarm configuration
* [33mad3f18c[m feat: Preparation for API
* [33m2a8aa8f[m feat: Improve explorer
* [33mf9fdbb9[m feat: Improve UI explorer
* [33m8733fea[m feat: Improve dataset detail
* [33mb246ed4[m feat: Implement topbar search
* [33mf17c377[m feat: Improve explorer
* [33m69bf05e[m feat: Improve dataset searching visualization
* [33m58bba60[m feat: Search by tags
* [33mc3c1326[m feat: Implement explorer (backend)
* [33ma662548[m feat: Update requirements
* [33m5b0a8a2[m feat: Improve download zip
* [33m90ca7cb[m fix: Fix download single file
* [33m2914353[m feat: Zenodo errors control
* [33md519d37[m feat: Implement download single file
* [33m430aea0[m feat: Implement dataset download
* [33mba86a81[m feat: Improve dataform control errors
* [33me7e9367[m fix: Remove comments
* [33m227afb9[m feat: Upgrade requirements with frozen versions
* [33m734e1ef[m fix: FIx routes testing
* [33m98d5aad[m fix: Fix big bug in Gunicorn instance
* [33m041c78d[m fix: Add removed code
* [33m1bdb143[m fix: Fix bugs in auth and login
* [33m6cb4b0b[m fix: Fix bug in auth module
* [33mf1468e5[m fix: Fix python alpine version
* [33md89373e[m fix: Fix bug in Gunicorn app instance
* [33m1dd5f75[m feat: Improve production deployment with Gunicorn
* [33m3adb931[m feat: Add cleanup to old images for Watchtower
* [33md19a2ec[m feat: Add restart always to watchtower
* [33m7dbdee1[m fix: Fix minor bug in models
* [33m01adffe[m feat: Add watchtower by default
* [33mbfb4e5c[m feat: Improve dataset form
* [33mfd39529[m fix: Fix bug in publication type
* [33m3a23c99[m fix: Fix bug in init.py
* [33md659ab4[m feat: Add flake8 as Python Linter
* [33mbaf6a0f[m feat: Fix minor bugs
* [33mc9fc3d9[m fix: Fix minor bugs
* [33mad67c24[m feat: Change restart policies
* [33mcd3d20e[m feat: Improve README
* [33m0aad217[m feat: Improve README
* [33m9be7049[m feat: Improve README
* [33md5d648f[m feat: Improve CD
* [33m04e69a6[m feat: Add latest tag in deployment
* [33m1c31d22[m feat: Add latest tag in deployment
* [33m67843f3[m fix: Update CD
* [33m7d7c476[m fix: Update CD
* [33m1aaa4a1[m fix: Fix CD
* [33m2ffe47c[m fix: Fix CD
* [33mc93edc5[m fix: Fix CD
* [33m1f8743c[m fix: Fix CD
* [33mba31a0e[m fix: Fix CD
* [33mef7460c[m fix: Change password to access token
* [33m43c46ef[m fix: Fix CD
* [33m385380c[m fix: Fix CD
* [33m5737208[m feat: Implement CD
* [33ma33b815[m feat: Add the light logo
* [33macdee14[m feat: Add the light logo
* [33maade614[m feat: Add the logo
* [33m44cf0e1[m feat: Add favicon
* [33m489d144[m fix: Fix name and description app
* [33mf6da034[m fix: Fix certificate domain
* [33me3dc0a5[m feat: Add cryptography package
* [33mf6fe863[m fix: Fix bug in nginx prod config
* [33m98d7c1c[m feat: Deployment in production
* [33mdf1fd34[m impr: Improve menu
* [33mf812223[m fix: Fix UI bugs
* [33m3bdb8b4[m feat: List dataset
* [33m04bdd91[m feat: Integration with Flamapy API
* [33m6a87b27[m feat: Move feature model files
* [33m7ee8a87[m feat: Publish dataset
* [33m9e60857[m feat: Finish upload files to Zenodo
* [33m4f6f597[m feat: Upload files to Zenodo
* [33m4bd282a[m feat: Improve visual UI
* [33maf717e4[m feat: Add uvl version
* [33m6c73837[m feat: Save feature models in backend
* [33mbef34ff[m fix: Fix bug un Dataset model
* [33m9befb8e[m fix: Fix bug in model
* [33m36b3171[m feat: Upload dataset to Zenodo as deposition
* [33md31d79d[m feat: Create dataset in backend
* [33med8934d[m feat: Add publication doi in form
* [33mcaed6c1[m fix: Fix bug in ID forms
* [33m7bd1c80[m feat: Handler for dataset forms
* [33mc8ff77b[m fix: Fix visual bugs
* [33m47c21e1[m fix: Fix dataset form
* [33m3951e9c[m feat: Dataset form
* [33m7d48ba8[m impr: Improve readme
* [33m9a18cd9[m feat: Dataset functionality
* [33m47f30c2[m feat: App name as an environment
* [33md0fafea[m feat: Implement DataSetForm
* [33m0028a8a[m fix: Fix bug in modeling
* [33maccda38[m feat: Improve models
* [33maf1c988[m fix: Delete comments
* [33m342a200[m feat: Prepares the ground for the dataset module
* [33m1565f12[m feat: Add custom error messages
* [33mc91fa8c[m feat: New UI for login and sign up forms
* [33m40e55b3[m fix: Comment danger line in User
* [33m36ca127[m fix: Fix minor bug in User model
* [33m9cfe765[m feat: Setting up UI
* [33mbef1aca[m feat: Basic login
* [33m5cb28c5[m fix: Downgrade to Python 3.9 in CI
*   [33m45c7557[m Merge branch 'main' of https://github.com/diverso-lab/fmlib into main
[32m|[m[33m\[m  
[32m|[m *   [33mc78cbfb[m Merge pull request #1 from diverso-lab/conceptual_model
[32m|[m [34m|[m[35m\[m  
* [34m|[m [35m|[m [33m4456ce7[m feat: Add secret key
* [34m|[m [35m|[m [33m5eff806[m feat: Modeling
* [34m|[m [35m|[m [33m4b2aa69[m refactor(core): Setting up  migration system
[35m|[m [34m|[m[35m/[m  
[35m|[m[35m/[m[34m|[m   
* [34m|[m [33m9fab8fb[m refactor(core): Change organizational structure
[34m|[m[34m/[m  
* [33m724c347[m feat: Add Zenodo API connection
* [33mfe0c6dd[m feat: Improve readme
* [33m995f503[m fix: Change CI
* [33mf47bb8e[m fix: Change CI
* [33m592e90e[m fix: Change CI
* [33mefaebe4[m fix: Change CI
* [33mfde6f6e[m fix: Change CI
* [33md890600[m fix: Fix test suite
* [33mb685932[m fix: Fix test suite
* [33m8492b18[m fix: Fix test suite
* [33mc8ef3ea[m fix: Fix test suite
* [33mf8e5cd5[m fix: Fix test suite
* [33mf9cca9a[m fix: Fix test suite
* [33m659032a[m fix: Fix test suite
* [33m6921481[m fix: Fix test suite
* [33m3be7dfe[m fix: Fix test suite
* [33m56caa05[m fix: Fix SQLALCHEMY_DATABASE_URI
* [33m68a2bcf[m fix: Fix unit testing
* [33m82281cb[m feat: Implements unit testing
* [33m7505b21[m feat: Implements commits checker
* [33mce6247a[m fix: Fix gitignore
* [33m93dc60b[m feat: Integrate fm characterization (labels)
* [33m704009b[m feat: Implements basic configuration in Flask
* [33m11d377e[m feat: Add .env to .gitignore
* [33m92ad549[m first commit
