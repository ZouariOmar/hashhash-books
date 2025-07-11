# Odoo Notes

- Python doesn't require you to use the exact same parameter names, _but Odoo does use argument names in some parts of its framework logic_, especially with decorators and method calls via reflection. So mismatching names can cause issues.

```Python
# ✅ Correct Signature for create in Odoo
@api.model
def create(self, vals_list):
    ...
# ❌ Incorrect
@api.model
def create(self, vals):  # ❌ This causes a parameter name mismatch
    ...
```

## How to Use Logging in Odoo

1. First, import the logging module in python: ie, `import logging`
2. Next, create logger instance for the odoo class: ie, `_logger = logging.getLogger(__name__)`
3. Then use `_logger.info()`,`_logger.warning()` or `_logger.error()` to log the messages.

- Also possible to add logging settings in the _Odoo configuration file_ (odoo.conf):

```conf
; Set the log level (debug, info, warning, error, or critical).
log_level = LEVEL
; Set the path of the log file.
logfile = /path/log/file.log
```

- In Python:

```Python
# First, import the logging module and initialize the logger to a variable.
import logging
_logger = logging.getLogger(__name__)

# Then, create any function to show the different log levels.
class ProductPriceList(models.Model):
  _inherit = "product.pricelist"
  @api.onchange('currency_id')
  def onchange_currency_id(self):
    """ Logging at different levels """
    _logger.debug("------------IT IS DEBUG-----------")
    _logger.info("-------------IT IS INFO------------")
    _logger.error("------------IT IS Error-----------")
    _logger.warning("----------IT IS warning---------")
    _logger.critical("----------IT IS Critical---------")
```
