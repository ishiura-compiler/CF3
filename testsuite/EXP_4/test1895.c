#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = 5898230;
uint64_t x15 = 500110907282746093LLU;
int8_t x18 = -1;
int32_t x20 = -1;
int32_t x24 = INT32_MIN;
int32_t t4 = 96609110;
volatile int64_t x25 = -1LL;
int64_t x28 = -1LL;
int32_t t5 = 10;
int8_t x30 = INT8_MAX;
uint8_t x31 = 111U;
int32_t t8 = 23;
uint8_t x41 = 42U;
static int32_t t9 = -8;
int8_t x50 = INT8_MIN;
int64_t x54 = 26452788594LL;
uint32_t x66 = UINT32_MAX;
volatile int64_t x67 = INT64_MIN;
static int32_t t13 = -92;
volatile int32_t t14 = 21686;
volatile int16_t x81 = INT16_MAX;
volatile int32_t t16 = -84632;
volatile int32_t t19 = 1;
uint64_t x107 = 938LLU;
int64_t x108 = -117711859LL;
int8_t x109 = -1;
int8_t x118 = INT8_MIN;
int64_t x124 = -1891LL;
volatile uint32_t x126 = 21153U;
int64_t x128 = INT64_MIN;
uint8_t x129 = 24U;
uint32_t x143 = UINT32_MAX;
uint8_t x147 = UINT8_MAX;
volatile uint16_t x156 = 2U;
static volatile int32_t t30 = 53941849;
uint32_t x175 = UINT32_MAX;
int16_t x176 = INT16_MAX;
volatile uint64_t x192 = UINT64_MAX;
int32_t t37 = 7112536;
static int64_t x196 = INT64_MAX;
static uint32_t x197 = UINT32_MAX;
int32_t t39 = -1;
int32_t t40 = 251238;
static volatile int8_t x218 = -1;
static int16_t x230 = -106;
static int64_t x236 = -1LL;
static volatile int64_t x237 = INT64_MAX;
uint64_t x252 = 2LLU;
int32_t t48 = 700001;
int16_t x264 = -1;
int64_t x265 = 223054471838168223LL;
int32_t x268 = INT32_MIN;
volatile int16_t x269 = INT16_MIN;
static int8_t x286 = 0;
volatile int32_t t53 = 107066338;
int32_t t55 = -19825809;
uint16_t x298 = 23U;
int16_t x301 = -1;
uint32_t x309 = 2U;
uint16_t x310 = 0U;
volatile int16_t x320 = -1;
static volatile int32_t x324 = -1;
static int8_t x325 = -1;
int8_t x328 = -1;
int8_t x333 = -1;
int64_t x337 = INT64_MAX;
volatile int32_t t67 = 8540;
uint8_t x346 = 1U;
int64_t x351 = INT64_MIN;
volatile uint64_t x352 = 249LLU;
volatile int32_t t74 = 8124;
volatile uint32_t x385 = 1677792U;
static uint64_t x386 = 425967LLU;
int16_t x387 = -1;
int8_t x391 = INT8_MIN;
static volatile int32_t t77 = -84265;
int64_t x403 = -268967737725355286LL;
int16_t x411 = INT16_MIN;
int64_t x412 = 139137483280114LL;
static int64_t x415 = -3957005LL;
volatile int16_t x422 = INT16_MIN;
static int32_t x425 = INT32_MIN;
int32_t t84 = 241;
int16_t x430 = INT16_MIN;
int16_t x431 = 1;
int16_t x437 = -66;
uint64_t x445 = 371LLU;
uint32_t x449 = UINT32_MAX;
int8_t x450 = 1;
uint8_t x457 = UINT8_MAX;
volatile int16_t x465 = 0;
int64_t x467 = INT64_MIN;
static int32_t x471 = 1;
int32_t x475 = -9131;
static uint16_t x479 = 425U;
int16_t x480 = INT16_MIN;
int16_t x481 = INT16_MIN;
volatile int32_t t95 = -1;
int8_t x493 = -31;
volatile int32_t t97 = -16505;
int16_t x501 = 7695;


void f0(void) {
	static volatile int8_t x5 = INT8_MIN;
	uint32_t x7 = 510454U;
	int32_t x8 = INT32_MIN;
	int32_t t0 = -137;

	t0 = (x5<=(x6*(x7|x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -28169574;
	int16_t x10 = 2;
	uint8_t x11 = 39U;
	int8_t x12 = INT8_MIN;
	int32_t t1 = 1232165;

	t1 = (x9<=(x10*(x11|x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int32_t x14 = 2;
	int64_t x16 = 4013850808919848LL;
	int32_t t2 = 1621;

	t2 = (x13<=(x14*(x15|x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MAX;
	int32_t x19 = -1;
	volatile int32_t t3 = -4741;

	t3 = (x17<=(x18*(x19|x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MAX;
	volatile int8_t x22 = -1;
	uint16_t x23 = 1386U;

	t4 = (x21<=(x22*(x23|x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x26 = 79802LLU;
	int8_t x27 = INT8_MIN;

	t5 = (x25<=(x26*(x27|x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = UINT64_MAX;
	volatile int8_t x32 = INT8_MIN;
	int32_t t6 = 191127869;

	t6 = (x29<=(x30*(x31|x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MIN;
	volatile uint32_t x34 = 13181U;
	int8_t x35 = INT8_MIN;
	static uint32_t x36 = UINT32_MAX;
	int32_t t7 = -8412;

	t7 = (x33<=(x34*(x35|x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	static volatile int64_t x39 = -65267LL;
	int8_t x40 = -1;

	t8 = (x37<=(x38*(x39|x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x42 = 274LLU;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = 3592LLU;

	t9 = (x41<=(x42*(x43|x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 13U;
	uint8_t x46 = UINT8_MAX;
	uint64_t x47 = UINT64_MAX;
	static volatile int16_t x48 = -1;
	int32_t t10 = -350206;

	t10 = (x45<=(x46*(x47|x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	static int8_t x51 = INT8_MIN;
	static volatile uint8_t x52 = UINT8_MAX;
	static int32_t t11 = 8637;

	t11 = (x49<=(x50*(x51|x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = UINT16_MAX;
	int64_t x55 = 10748255150LL;
	int32_t x56 = -3842282;
	volatile int32_t t12 = -114;

	t12 = (x53<=(x54*(x55|x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x65 = 697645LLU;
	static int16_t x68 = INT16_MIN;

	t13 = (x65<=(x66*(x67|x68)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = -1;
	uint8_t x74 = 12U;
	uint64_t x75 = UINT64_MAX;
	static int64_t x76 = INT64_MIN;

	t14 = (x73<=(x74*(x75|x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = 3;
	volatile int8_t x78 = -1;
	int8_t x79 = -9;
	static volatile int16_t x80 = INT16_MIN;
	int32_t t15 = 25577;

	t15 = (x77<=(x78*(x79|x80)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x82 = -1LL;
	static int64_t x83 = INT64_MAX;
	volatile int32_t x84 = 1348;

	t16 = (x81<=(x82*(x83|x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = 0;
	static int64_t x86 = 1831313083LL;
	uint8_t x87 = 1U;
	uint32_t x88 = 90941670U;
	int32_t t17 = -58451176;

	t17 = (x85<=(x86*(x87|x88)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x90 = INT32_MIN;
	int64_t x91 = INT64_MIN;
	volatile uint64_t x92 = UINT64_MAX;
	volatile int32_t t18 = -113587;

	t18 = (x89<=(x90*(x91|x92)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = 1;
	uint64_t x94 = 22941522424875LLU;
	uint64_t x95 = 10656593246LLU;
	int64_t x96 = INT64_MAX;

	t19 = (x93<=(x94*(x95|x96)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x105 = -986LL;
	int32_t x106 = INT32_MAX;
	volatile int32_t t20 = 17158328;

	t20 = (x105<=(x106*(x107|x108)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x110 = UINT32_MAX;
	volatile int16_t x111 = INT16_MAX;
	int16_t x112 = INT16_MAX;
	int32_t t21 = 72524;

	t21 = (x109<=(x110*(x111|x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x113 = 14566271U;
	uint16_t x114 = 1U;
	int64_t x115 = 14187LL;
	uint32_t x116 = 1U;
	int32_t t22 = 57619;

	t22 = (x113<=(x114*(x115|x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x117 = 175716;
	int16_t x119 = INT16_MIN;
	static uint64_t x120 = 943159725183239LLU;
	int32_t t23 = 0;

	t23 = (x117<=(x118*(x119|x120)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x121 = 27258443003334790LL;
	int64_t x122 = -1LL;
	volatile uint16_t x123 = UINT16_MAX;
	int32_t t24 = 274673435;

	t24 = (x121<=(x122*(x123|x124)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MIN;
	int32_t x127 = -1;
	volatile int32_t t25 = 1827535;

	t25 = (x125<=(x126*(x127|x128)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x130 = -1;
	int16_t x131 = INT16_MIN;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t26 = 27649;

	t26 = (x129<=(x130*(x131|x132)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MAX;
	uint32_t x138 = 393U;
	uint64_t x139 = 245578481LLU;
	int32_t x140 = -373434;
	int32_t t27 = 100;

	t27 = (x137<=(x138*(x139|x140)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x141 = -1;
	int32_t x142 = 17166403;
	int16_t x144 = INT16_MAX;
	volatile int32_t t28 = 232;

	t28 = (x141<=(x142*(x143|x144)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = INT16_MIN;
	uint32_t x146 = 461595U;
	static uint8_t x148 = 58U;
	volatile int32_t t29 = -4573;

	t29 = (x145<=(x146*(x147|x148)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x153 = UINT8_MAX;
	static uint32_t x154 = 265780661U;
	int32_t x155 = -1;

	t30 = (x153<=(x154*(x155|x156)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = -1;
	int64_t x162 = 53LL;
	int32_t x163 = INT32_MIN;
	static int32_t x164 = INT32_MIN;
	volatile int32_t t31 = 119717729;

	t31 = (x161<=(x162*(x163|x164)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x169 = 96U;
	uint32_t x170 = UINT32_MAX;
	int16_t x171 = INT16_MAX;
	volatile int8_t x172 = INT8_MIN;
	static int32_t t32 = 229807702;

	t32 = (x169<=(x170*(x171|x172)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x173 = 0U;
	volatile uint64_t x174 = UINT64_MAX;
	int32_t t33 = -27;

	t33 = (x173<=(x174*(x175|x176)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = INT8_MIN;
	uint32_t x178 = 1015366U;
	volatile uint16_t x179 = 1U;
	int8_t x180 = INT8_MAX;
	int32_t t34 = -987365368;

	t34 = (x177<=(x178*(x179|x180)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x181 = INT64_MIN;
	uint64_t x182 = 2514569861LLU;
	int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;
	int32_t t35 = -1156815;

	t35 = (x181<=(x182*(x183|x184)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = -1LL;
	volatile uint32_t x186 = 15641U;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = 27;
	static int32_t t36 = 133;

	t36 = (x185<=(x186*(x187|x188)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x189 = 232191518U;
	volatile uint8_t x190 = UINT8_MAX;
	static volatile uint32_t x191 = 3151U;

	t37 = (x189<=(x190*(x191|x192)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = INT8_MIN;
	static uint64_t x194 = 52504180176822LLU;
	uint64_t x195 = 313764397LLU;
	int32_t t38 = 9125680;

	t38 = (x193<=(x194*(x195|x196)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x198 = 50U;
	int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MAX;

	t39 = (x197<=(x198*(x199|x200)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = INT16_MAX;
	int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MAX;
	static int8_t x212 = INT8_MIN;

	t40 = (x209<=(x210*(x211|x212)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x213 = INT32_MIN;
	static int8_t x214 = -1;
	uint16_t x215 = 19U;
	uint32_t x216 = 1495U;
	volatile int32_t t41 = 1982;

	t41 = (x213<=(x214*(x215|x216)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x217 = 7530682U;
	volatile int8_t x219 = -1;
	uint8_t x220 = 0U;
	volatile int32_t t42 = 1257;

	t42 = (x217<=(x218*(x219|x220)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = 369;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	int32_t x224 = -37;
	int32_t t43 = -7;

	t43 = (x221<=(x222*(x223|x224)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x229 = UINT8_MAX;
	uint16_t x231 = UINT16_MAX;
	uint32_t x232 = UINT32_MAX;
	int32_t t44 = 400757;

	t44 = (x229<=(x230*(x231|x232)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 357559U;
	static volatile int32_t t45 = -15533561;

	t45 = (x233<=(x234*(x235|x236)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x238 = UINT64_MAX;
	int64_t x239 = 1392436915519608529LL;
	static int64_t x240 = INT64_MIN;
	volatile int32_t t46 = -23507487;

	t46 = (x237<=(x238*(x239|x240)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x245 = INT64_MAX;
	int8_t x246 = INT8_MIN;
	static int32_t x247 = -50648364;
	uint64_t x248 = UINT64_MAX;
	int32_t t47 = 495984;

	t47 = (x245<=(x246*(x247|x248)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x249 = INT32_MIN;
	static int16_t x250 = -1;
	static uint32_t x251 = 148237U;

	t48 = (x249<=(x250*(x251|x252)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x253 = 4134200U;
	volatile int8_t x254 = INT8_MIN;
	static int64_t x255 = -1LL;
	int8_t x256 = INT8_MIN;
	volatile int32_t t49 = 50146;

	t49 = (x253<=(x254*(x255|x256)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = INT8_MAX;
	uint16_t x262 = 2U;
	static int32_t x263 = 8992333;
	static int32_t t50 = 27;

	t50 = (x261<=(x262*(x263|x264)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x266 = 1114U;
	volatile uint64_t x267 = UINT64_MAX;
	volatile int32_t t51 = -1;

	t51 = (x265<=(x266*(x267|x268)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = INT16_MIN;
	int64_t x272 = -4LL;
	static volatile int32_t t52 = -223524;

	t52 = (x269<=(x270*(x271|x272)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x285 = INT8_MIN;
	int8_t x287 = -1;
	static uint16_t x288 = UINT16_MAX;

	t53 = (x285<=(x286*(x287|x288)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x289 = UINT64_MAX;
	volatile uint32_t x290 = 10394U;
	uint64_t x291 = 15875977LLU;
	static int8_t x292 = INT8_MIN;
	int32_t t54 = 136;

	t54 = (x289<=(x290*(x291|x292)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x293 = 0LLU;
	volatile uint8_t x294 = 1U;
	int16_t x295 = INT16_MIN;
	static int8_t x296 = -1;

	t55 = (x293<=(x294*(x295|x296)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = -30;
	int32_t x299 = 1511595;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t56 = -8209;

	t56 = (x297<=(x298*(x299|x300)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x302 = 684;
	static int16_t x303 = -2;
	uint8_t x304 = 0U;
	int32_t t57 = 96;

	t57 = (x301<=(x302*(x303|x304)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x305 = INT8_MIN;
	int64_t x306 = -1LL;
	int16_t x307 = -91;
	int8_t x308 = 1;
	int32_t t58 = -418816810;

	t58 = (x305<=(x306*(x307|x308)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x311 = UINT8_MAX;
	uint16_t x312 = UINT16_MAX;
	static volatile int32_t t59 = -250315063;

	t59 = (x309<=(x310*(x311|x312)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x313 = INT16_MAX;
	static int16_t x314 = -1;
	static uint64_t x315 = UINT64_MAX;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t60 = -172785391;

	t60 = (x313<=(x314*(x315|x316)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x317 = -1;
	volatile int64_t x318 = -1LL;
	int16_t x319 = INT16_MAX;
	int32_t t61 = -897595;

	t61 = (x317<=(x318*(x319|x320)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x321 = 2;
	uint8_t x322 = 17U;
	int64_t x323 = INT64_MIN;
	int32_t t62 = -243090;

	t62 = (x321<=(x322*(x323|x324)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x326 = -29;
	static volatile uint32_t x327 = UINT32_MAX;
	int32_t t63 = -22660;

	t63 = (x325<=(x326*(x327|x328)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x329 = UINT16_MAX;
	uint16_t x330 = 1738U;
	int32_t x331 = INT32_MAX;
	volatile int16_t x332 = INT16_MIN;
	static int32_t t64 = -6;

	t64 = (x329<=(x330*(x331|x332)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x334 = 1LLU;
	uint16_t x335 = 5U;
	static int8_t x336 = INT8_MAX;
	int32_t t65 = 10347917;

	t65 = (x333<=(x334*(x335|x336)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x338 = 92;
	int64_t x339 = -1LL;
	uint16_t x340 = 199U;
	int32_t t66 = 22;

	t66 = (x337<=(x338*(x339|x340)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = 27;
	volatile int32_t x343 = -59;
	volatile uint8_t x344 = UINT8_MAX;

	t67 = (x341<=(x342*(x343|x344)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x345 = -15986940LL;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = 2387750027548537916LLU;
	int32_t t68 = 56;

	t68 = (x345<=(x346*(x347|x348)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x349 = -1;
	int32_t x350 = INT32_MIN;
	volatile int32_t t69 = -148938;

	t69 = (x349<=(x350*(x351|x352)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x361 = 13072161U;
	uint64_t x362 = 4654428622LLU;
	static uint32_t x363 = 974U;
	uint16_t x364 = 310U;
	int32_t t70 = -226;

	t70 = (x361<=(x362*(x363|x364)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x369 = 1U;
	int64_t x370 = 7610047866LL;
	int16_t x371 = -1;
	int32_t x372 = INT32_MIN;
	volatile int32_t t71 = 91;

	t71 = (x369<=(x370*(x371|x372)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x373 = -844686;
	static volatile int8_t x374 = -1;
	int64_t x375 = -2653611LL;
	int64_t x376 = -1LL;
	volatile int32_t t72 = 113;

	t72 = (x373<=(x374*(x375|x376)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x377 = -207614096449253099LL;
	int16_t x378 = INT16_MIN;
	static int8_t x379 = 13;
	int16_t x380 = -1;
	static volatile int32_t t73 = 434;

	t73 = (x377<=(x378*(x379|x380)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x381 = 4136LLU;
	int32_t x382 = 7;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;

	t74 = (x381<=(x382*(x383|x384)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x388 = INT32_MIN;
	int32_t t75 = -230942531;

	t75 = (x385<=(x386*(x387|x388)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x389 = -1;
	int32_t x390 = 229;
	uint32_t x392 = 125210U;
	static volatile int32_t t76 = -2;

	t76 = (x389<=(x390*(x391|x392)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x393 = INT64_MIN;
	uint32_t x394 = 16U;
	int64_t x395 = INT64_MAX;
	int8_t x396 = INT8_MIN;

	t77 = (x393<=(x394*(x395|x396)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x397 = -52;
	volatile int8_t x398 = -51;
	int16_t x399 = INT16_MIN;
	volatile int16_t x400 = INT16_MIN;
	int32_t t78 = 4;

	t78 = (x397<=(x398*(x399|x400)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x401 = 104704LL;
	static int32_t x402 = 402;
	int64_t x404 = -1LL;
	static int32_t t79 = 15;

	t79 = (x401<=(x402*(x403|x404)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x405 = 55396LLU;
	uint16_t x406 = 8932U;
	uint8_t x407 = UINT8_MAX;
	uint8_t x408 = 38U;
	volatile int32_t t80 = -444444067;

	t80 = (x405<=(x406*(x407|x408)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x409 = -1;
	uint16_t x410 = UINT16_MAX;
	volatile int32_t t81 = -158182570;

	t81 = (x409<=(x410*(x411|x412)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x413 = UINT32_MAX;
	static int16_t x414 = -44;
	int8_t x416 = INT8_MIN;
	volatile int32_t t82 = 14491;

	t82 = (x413<=(x414*(x415|x416)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x421 = UINT32_MAX;
	int64_t x423 = -1LL;
	int8_t x424 = INT8_MIN;
	volatile int32_t t83 = 14776590;

	t83 = (x421<=(x422*(x423|x424)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x426 = 487LL;
	uint8_t x427 = 0U;
	int16_t x428 = -1;

	t84 = (x425<=(x426*(x427|x428)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x429 = INT64_MIN;
	int32_t x432 = 1;
	int32_t t85 = 53460806;

	t85 = (x429<=(x430*(x431|x432)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x433 = 0U;
	uint32_t x434 = UINT32_MAX;
	volatile int32_t x435 = INT32_MIN;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t86 = 238360;

	t86 = (x433<=(x434*(x435|x436)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x438 = UINT64_MAX;
	int8_t x439 = 52;
	int32_t x440 = -1;
	volatile int32_t t87 = -553652;

	t87 = (x437<=(x438*(x439|x440)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x446 = -1205327;
	volatile uint16_t x447 = UINT16_MAX;
	static int16_t x448 = INT16_MIN;
	int32_t t88 = -6;

	t88 = (x445<=(x446*(x447|x448)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x451 = 1063U;
	int64_t x452 = INT64_MIN;
	volatile int32_t t89 = -23014;

	t89 = (x449<=(x450*(x451|x452)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x458 = -1LL;
	volatile int16_t x459 = INT16_MIN;
	volatile int16_t x460 = INT16_MIN;
	static volatile int32_t t90 = 0;

	t90 = (x457<=(x458*(x459|x460)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x466 = INT32_MIN;
	int8_t x468 = INT8_MIN;
	volatile int32_t t91 = 396833621;

	t91 = (x465<=(x466*(x467|x468)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x469 = 7;
	int8_t x470 = INT8_MAX;
	uint8_t x472 = 24U;
	int32_t t92 = -45661;

	t92 = (x469<=(x470*(x471|x472)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x473 = -1LL;
	int32_t x474 = -59032;
	int8_t x476 = -5;
	int32_t t93 = -6506;

	t93 = (x473<=(x474*(x475|x476)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x477 = UINT8_MAX;
	uint64_t x478 = 1560LLU;
	static int32_t t94 = 242010755;

	t94 = (x477<=(x478*(x479|x480)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x482 = 200544U;
	int8_t x483 = -1;
	static int16_t x484 = 29;

	t95 = (x481<=(x482*(x483|x484)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x485 = 55589849571LLU;
	static uint64_t x486 = 512997940277LLU;
	static int64_t x487 = INT64_MIN;
	uint32_t x488 = UINT32_MAX;
	int32_t t96 = -532718;

	t96 = (x485<=(x486*(x487|x488)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x494 = INT16_MAX;
	int8_t x495 = INT8_MAX;
	int64_t x496 = 82LL;

	t97 = (x493<=(x494*(x495|x496)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x497 = 77720424504471103LLU;
	int8_t x498 = INT8_MAX;
	volatile uint64_t x499 = 464824830350795081LLU;
	volatile int64_t x500 = 1803022LL;
	int32_t t98 = -1495;

	t98 = (x497<=(x498*(x499|x500)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x502 = INT8_MAX;
	static int8_t x503 = -1;
	volatile uint16_t x504 = 47U;
	volatile int32_t t99 = 4553;

	t99 = (x501<=(x502*(x503|x504)));

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

