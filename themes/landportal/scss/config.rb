#
# Landportal SCSS compiler configuration
#
# Author: Jules <jules@ker.bz>
#

require 'bootstrap-sass'
require 'compass/import-once/activate'

# 1. Set this to the root of your project when deployed:
http_path = "/"

# 2. probably don't need to touch these
css_dir = "../css"
sass_dir = "./"
images_dir = "../images"
#javascripts_dir = "../js"
environment = :development
relative_assets = true
sourcemap = true
#additional_import_paths = [ "../libs/compass" ]


# 3. You can select your preferred output style here (can be overridden via the command line):
output_style = :expanded
# output_style = :compressed

# To disable debugging comments that display the original location of your selectors. Uncomment:
# line_comments = false

# don't touch this
preferred_syntax = :scss
