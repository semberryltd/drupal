<div class="content main-content container">
	<h1 class="country-name datasource-name"><span>{{#info}}{{name}}{{/info}}</span></h1>
	<div class="row data-source">
		<div class="col-sm-9">
			<img class="source-logo" alt="" src="{{path}}/static/images/sources/{{#info}}{{id}}{{/info}}.png" />
			{{#info}}{{description}}{{/info}}

			<div class="row source-indicators">
				{{#selectors}}
					{{#indicators}}
							<div class="col-sm-6">
								<h3><a href="/book/indicators/detail?indicator={{id}}">{{name}}</a></h3>
								<p class="description">{{description}}</p>
								<p><span class="text-primary"><?php echo t("Format"); ?>:</span> {{format}}</p>
								<p><span class="text-primary"><?php echo t("Last updated"); ?>:</span> {{last_update}}</p>
							</div>
					{{/indicators}}
				{{/selectors}}
			</div>
		</div>
		<div class="col-sm-3">
			<h2 class="section"><span><?php echo t("On this source"); ?></span></h2>
			<ul class="indicator-list">
				{{#selectors}}
					{{#indicators}}
						<li><a href="/book/indicators/detail?indicator={{id}}">{{name}}</a></li>
					{{/indicators}}
				{{/selectors}}
			</ul>
			<h2 class="section"><span><?php echo t("Other sources"); ?></span></h2>
				<select id="source-selector" class="form-control">
					<option disabled="disabled" selected="true"><?php echo t("Select one"); ?></option>
					{{#selectors}}
						{{#data-sources}}
						<option value="{{id}}">{{name}}</option>
					{{/data-sources}}
				{{/selectors}}
				</select>
		</div>
	</div>
</div>

