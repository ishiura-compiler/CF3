#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 177;
int16_t x4 = -1;
int8_t x23 = INT8_MAX;
static int64_t x40 = INT64_MAX;
int16_t x56 = INT16_MAX;
uint32_t x61 = UINT32_MAX;
uint64_t t4 = 265804704LLU;
int16_t x69 = 3;
uint32_t x70 = 1935U;
volatile uint64_t x84 = 4383956605258LLU;
uint16_t x91 = UINT16_MAX;
volatile uint32_t x99 = 13902157U;
static int32_t x102 = -1;
volatile uint64_t x107 = 222LLU;
uint32_t x115 = 120944U;
uint64_t x121 = UINT64_MAX;
int64_t x132 = INT64_MIN;
volatile uint64_t t16 = 59216514503832LLU;
static uint8_t x161 = 2U;
int64_t x164 = INT64_MIN;
volatile int8_t x178 = INT8_MIN;
uint64_t x183 = UINT64_MAX;
uint64_t x190 = 121LLU;
uint64_t x192 = 480LLU;
uint16_t x195 = 18U;
int16_t x205 = -1;
volatile uint64_t t30 = 104831454872227LLU;
static uint16_t x225 = 235U;
int8_t x226 = INT8_MIN;
int64_t t33 = -5221LL;
int16_t x236 = INT16_MIN;
volatile int32_t x239 = -261764;
volatile uint64_t x240 = 4126153LLU;
uint64_t t35 = 6590589350853LLU;
static int64_t x248 = -4960547LL;
static int64_t x257 = -6360LL;
volatile int64_t t37 = 3LL;
uint32_t x269 = 0U;
volatile uint32_t t40 = UINT32_MAX;
static uint32_t t41 = 170389U;
int64_t t43 = -10797651594699LL;
static volatile int8_t x310 = -1;
int16_t x324 = INT16_MAX;
volatile int8_t x338 = INT8_MAX;
int8_t x339 = INT8_MIN;
uint32_t x373 = 676491U;
uint64_t t50 = 4010025103572677407LLU;
volatile uint64_t x387 = 45567402383326740LLU;
int8_t x389 = INT8_MIN;
int8_t x390 = 8;
uint64_t x392 = 0LLU;
uint64_t t52 = 4924LLU;
int16_t x394 = INT16_MIN;
int64_t x428 = -1563490LL;
uint32_t x436 = 1U;
uint64_t x442 = 5208LLU;
int8_t x452 = INT8_MIN;
static uint32_t x453 = UINT32_MAX;
int8_t x455 = INT8_MAX;
volatile uint64_t x456 = UINT64_MAX;
int8_t x459 = INT8_MIN;
uint16_t x460 = 633U;
volatile uint64_t x507 = UINT64_MAX;
int8_t x513 = 13;
static volatile int16_t x516 = INT16_MIN;
volatile int64_t t67 = -31LL;
int8_t x538 = -1;
uint16_t x540 = UINT16_MAX;
volatile uint32_t t70 = 1079965011U;
int64_t x542 = INT64_MIN;
uint64_t x548 = 121387372LLU;
int8_t x557 = -1;
uint32_t t73 = 317U;
int8_t x569 = INT8_MAX;
volatile uint32_t x577 = 1019878U;
uint16_t x578 = 571U;
static int32_t x579 = 165686;
static volatile uint64_t t78 = 372757023936222832LLU;
uint32_t x594 = 1628126187U;
static uint64_t t80 = 363321600439LLU;
int8_t x626 = INT8_MAX;
uint32_t x644 = 7U;
volatile uint64_t t84 = 5048086924172272LLU;
int16_t x650 = INT16_MIN;
int16_t x651 = 0;
volatile uint64_t x658 = 55754219349559LLU;
static uint64_t t86 = 5LLU;
int32_t x670 = -1;
int16_t x679 = INT16_MAX;
volatile int64_t t90 = 2395326588557323613LL;
uint64_t t91 = 869647557104LLU;
volatile uint64_t t93 = 124508887982LLU;
int32_t x710 = -2;
volatile uint32_t x712 = 53599742U;
static int64_t x717 = -1LL;
volatile int8_t x721 = -18;
volatile uint64_t t98 = 16795670497305LLU;
int8_t x725 = INT8_MAX;


void f0(void) {
	int8_t x1 = 1;
	int8_t x2 = INT8_MIN;
	static int32_t t0 = -34;

	t0 = ((x1*(x2*x3))^x4);

	if (t0 != 22655) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x21 = -1LL;
	uint32_t x22 = UINT32_MAX;
	uint64_t x24 = 39LLU;
	uint64_t t1 = 2063911875LLU;

	t1 = ((x21*(x22*x23))^x24);

	if (t1 != 18446744069414584408LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x37 = INT32_MIN;
	uint16_t x38 = UINT16_MAX;
	uint64_t x39 = 457LLU;
	volatile uint64_t t2 = 1357136LLU;

	t2 = ((x37*(x38*x39))^x40);

	if (t2 != 9287688087633133567LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x53 = INT8_MIN;
	int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	static int32_t t3 = 21;

	t3 = ((x53*(x54*x55))^x56);

	if (t3 != -4161537) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x62 = 6U;
	uint64_t x63 = UINT64_MAX;
	static int8_t x64 = -25;

	t4 = ((x61*(x62*x63))^x64);

	if (t4 != 25769803745LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x71 = 113LL;
	volatile int8_t x72 = INT8_MAX;
	int64_t t5 = -6946060LL;

	t5 = ((x69*(x70*x71))^x72);

	if (t5 != 655906LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x77 = 540351823672701LLU;
	volatile uint16_t x78 = UINT16_MAX;
	static uint32_t x79 = 14U;
	uint8_t x80 = 34U;
	static uint64_t t6 = 31832915397LLU;

	t6 = ((x77*(x78*x79))^x80);

	if (t6 != 16152048785018098440LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x81 = 1036760732573LL;
	static uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 10LLU;
	volatile uint64_t t7 = 2LLU;

	t7 = ((x81*(x82*x83))^x84);

	if (t7 != 16540939990526304916LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x89 = INT8_MAX;
	volatile int16_t x90 = -1;
	static int16_t x92 = INT16_MIN;
	int32_t t8 = 14;

	t8 = ((x89*(x90*x91))^x92);

	if (t8 != 8290431) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x93 = -1217;
	volatile uint64_t x94 = UINT64_MAX;
	int32_t x95 = 2;
	volatile int16_t x96 = -1;
	uint64_t t9 = 15101999612533627LLU;

	t9 = ((x93*(x94*x95))^x96);

	if (t9 != 18446744073709549181LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x97 = INT8_MAX;
	int32_t x98 = 46;
	static int8_t x100 = -1;
	uint32_t t10 = 1U;

	t10 = ((x97*(x98*x99))^x100);

	if (t10 != 387977429U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x101 = 108U;
	int8_t x103 = -3;
	uint64_t x104 = 205LLU;
	volatile uint64_t t11 = 1LLU;

	t11 = ((x101*(x102*x103))^x104);

	if (t11 != 393LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = INT32_MIN;
	static int16_t x108 = -10;
	volatile uint64_t t12 = 23978758095LLU;

	t12 = ((x105*(x106*x107))^x108);

	if (t12 != 18446683050814210038LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x109 = UINT32_MAX;
	int8_t x110 = INT8_MIN;
	static uint16_t x111 = 17U;
	int16_t x112 = 8;
	uint32_t t13 = 2813773U;

	t13 = ((x109*(x110*x111))^x112);

	if (t13 != 2184U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x113 = INT32_MAX;
	static int8_t x114 = INT8_MIN;
	uint8_t x116 = 2U;
	uint32_t t14 = 2634U;

	t14 = ((x113*(x114*x115))^x116);

	if (t14 != 15480834U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x122 = INT16_MIN;
	uint64_t x123 = 10053718210441LLU;
	volatile uint8_t x124 = UINT8_MAX;
	volatile uint64_t t15 = 432159LLU;

	t15 = ((x121*(x122*x123))^x124);

	if (t15 != 329440238319730943LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x129 = UINT64_MAX;
	uint8_t x130 = 2U;
	static uint16_t x131 = 14306U;

	t16 = ((x129*(x130*x131))^x132);

	if (t16 != 9223372036854747196LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x133 = -1;
	volatile int64_t x134 = -1LL;
	static uint8_t x135 = UINT8_MAX;
	static int64_t x136 = 86344461862285072LL;
	static int64_t t17 = -135674346LL;

	t17 = ((x133*(x134*x135))^x136);

	if (t17 != 86344461862285295LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x137 = 275933U;
	volatile uint64_t x138 = 958236403898644762LLU;
	static int8_t x139 = INT8_MAX;
	int16_t x140 = -1;
	static volatile uint64_t t18 = 219473145077458LLU;

	t18 = ((x137*(x138*x139))^x140);

	if (t18 != 6053796354974528625LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x145 = UINT32_MAX;
	volatile int16_t x146 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	int16_t x148 = INT16_MIN;
	volatile uint32_t t19 = 4U;

	t19 = ((x145*(x146*x147))^x148);

	if (t19 != 4286578688U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x162 = INT16_MAX;
	volatile uint64_t x163 = 13568589637244LLU;
	uint64_t t20 = 272409793841802826LLU;

	t20 = ((x161*(x162*x163))^x164);

	if (t20 != 10112575990141924104LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x165 = -1LL;
	int16_t x166 = 3;
	static int16_t x167 = 161;
	uint16_t x168 = 14U;
	volatile int64_t t21 = -29706565LL;

	t21 = ((x165*(x166*x167))^x168);

	if (t21 != -493LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x173 = 0;
	int8_t x174 = 0;
	int16_t x175 = -1;
	static uint64_t x176 = UINT64_MAX;
	uint64_t t22 = UINT64_MAX;

	t22 = ((x173*(x174*x175))^x176);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x177 = 26614905255804087LLU;
	int8_t x179 = INT8_MIN;
	volatile uint64_t x180 = 38909LLU;
	uint64_t t23 = 2769LLU;

	t23 = ((x177*(x178*x179))^x180);

	if (t23 != 11783494015774447613LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x181 = 1864U;
	uint32_t x182 = 42226U;
	uint32_t x184 = 329199U;
	static uint64_t t24 = 1612585LLU;

	t24 = ((x181*(x182*x183))^x184);

	if (t24 != 18446744073630644255LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x185 = 3277933656041245LLU;
	static volatile int64_t x186 = 7712296LL;
	volatile int32_t x187 = INT32_MAX;
	static int32_t x188 = INT32_MIN;
	uint64_t t25 = 1537839767535LLU;

	t25 = ((x185*(x186*x187))^x188);

	if (t25 != 7744044856544669048LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x189 = INT64_MIN;
	int64_t x191 = INT64_MIN;
	uint64_t t26 = 69124168103313685LLU;

	t26 = ((x189*(x190*x191))^x192);

	if (t26 != 480LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x193 = INT8_MIN;
	static volatile int16_t x194 = -1;
	static int16_t x196 = INT16_MIN;
	volatile int32_t t27 = 4;

	t27 = ((x193*(x194*x195))^x196);

	if (t27 != -30464) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x197 = INT16_MIN;
	int32_t x198 = -1;
	volatile uint32_t x199 = UINT32_MAX;
	volatile int16_t x200 = 1;
	uint32_t t28 = 967U;

	t28 = ((x197*(x198*x199))^x200);

	if (t28 != 4294934529U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x206 = 10287609975919883LL;
	uint64_t x207 = 543115772277861401LLU;
	int32_t x208 = -885147843;
	volatile uint64_t t29 = 26977LLU;

	t29 = ((x205*(x206*x207))^x208);

	if (t29 != 4645787872845724368LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x209 = UINT32_MAX;
	int32_t x210 = INT32_MIN;
	static uint64_t x211 = UINT64_MAX;
	static int16_t x212 = INT16_MIN;

	t30 = ((x209*(x210*x211))^x212);

	if (t30 != 9223372039002226688LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x213 = INT8_MIN;
	static uint64_t x214 = 999915809LLU;
	int64_t x215 = -1LL;
	int8_t x216 = -26;
	volatile uint64_t t31 = 40323812014708929LLU;

	t31 = ((x213*(x214*x215))^x216);

	if (t31 != 18446743945720328038LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x227 = 625;
	uint32_t x228 = 1U;
	volatile uint32_t t32 = 12281963U;

	t32 = ((x225*(x226*x227))^x228);

	if (t32 != 4276167297U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x229 = -1017511739LL;
	int32_t x230 = -1;
	int64_t x231 = -1LL;
	uint32_t x232 = 1U;

	t33 = ((x229*(x230*x231))^x232);

	if (t33 != -1017511740LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x233 = -8;
	int8_t x234 = -7;
	int8_t x235 = 0;
	int32_t t34 = 222306;

	t34 = ((x233*(x234*x235))^x236);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x237 = 46U;
	int8_t x238 = INT8_MAX;

	t35 = ((x237*(x238*x239))^x240);

	if (t35 != 18446744072181197425LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x245 = 273470946293LLU;
	static uint16_t x246 = 501U;
	uint16_t x247 = 8298U;
	volatile uint64_t t36 = 220664LLU;

	t36 = ((x245*(x246*x247))^x248);

	if (t36 != 17309843855631392967LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x258 = -1;
	int16_t x259 = -1;
	int16_t x260 = INT16_MIN;

	t37 = ((x257*(x258*x259))^x260);

	if (t37 != 26408LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x261 = 1U;
	int64_t x262 = INT64_MAX;
	volatile int32_t x263 = -1;
	volatile int64_t x264 = 35814086178LL;
	volatile int64_t t38 = -8282LL;

	t38 = ((x261*(x262*x263))^x264);

	if (t38 != -9223372001040689629LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x265 = -1LL;
	static uint64_t x266 = UINT64_MAX;
	int8_t x267 = INT8_MIN;
	volatile uint32_t x268 = UINT32_MAX;
	volatile uint64_t t39 = 233046128036515676LLU;

	t39 = ((x265*(x266*x267))^x268);

	if (t39 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x270 = INT16_MAX;
	uint32_t x271 = 60U;
	uint32_t x272 = UINT32_MAX;

	t40 = ((x269*(x270*x271))^x272);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x285 = UINT8_MAX;
	uint32_t x286 = 3922U;
	uint8_t x287 = 11U;
	volatile int8_t x288 = INT8_MAX;

	t41 = ((x285*(x286*x287))^x288);

	if (t41 != 11001093U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x289 = INT64_MIN;
	uint64_t x290 = 1872702097103907931LLU;
	int16_t x291 = -1;
	static int32_t x292 = INT32_MAX;
	volatile uint64_t t42 = 63898LLU;

	t42 = ((x289*(x290*x291))^x292);

	if (t42 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x301 = 5U;
	int8_t x302 = 28;
	uint16_t x303 = 13641U;
	static int64_t x304 = INT64_MIN;

	t43 = ((x301*(x302*x303))^x304);

	if (t43 != -9223372036852866068LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x309 = INT32_MAX;
	int8_t x311 = -1;
	volatile uint32_t x312 = UINT32_MAX;
	uint32_t t44 = 115U;

	t44 = ((x309*(x310*x311))^x312);

	if (t44 != 2147483648U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x321 = INT16_MAX;
	static uint64_t x322 = UINT64_MAX;
	static uint32_t x323 = 14977U;
	uint64_t t45 = 111186345LLU;

	t45 = ((x321*(x322*x323))^x324);

	if (t45 != 18446744073218803070LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x329 = 81U;
	static uint32_t x330 = 4417U;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MIN;
	uint64_t t46 = 25974197LLU;

	t46 = ((x329*(x330*x331))^x332);

	if (t46 != 357871LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x337 = 1991293695LL;
	static int64_t x340 = 11707LL;
	volatile int64_t t47 = -48814475844LL;

	t47 = ((x337*(x338*x339))^x340);

	if (t47 != -32370470317509LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x357 = 47LL;
	static uint8_t x358 = 3U;
	uint64_t x359 = 0LLU;
	int16_t x360 = -1;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x357*(x358*x359))^x360);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x369 = -373582LL;
	uint32_t x370 = 5519958U;
	static uint16_t x371 = UINT16_MAX;
	uint16_t x372 = UINT16_MAX;
	int64_t t49 = 4LL;

	t49 = ((x369*(x370*x371))^x372);

	if (t49 != -363568009766965LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x374 = 339U;
	int16_t x375 = INT16_MIN;
	uint64_t x376 = UINT64_MAX;

	t50 = ((x373*(x374*x375))^x376);

	if (t50 != 18446744072216936447LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x385 = UINT32_MAX;
	int64_t x386 = 49849442989386LL;
	static volatile uint16_t x388 = 1796U;
	static uint64_t t51 = 22LLU;

	t51 = ((x385*(x386*x387))^x388);

	if (t51 != 3986771711701871932LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x391 = 21193U;

	t52 = ((x389*(x390*x391))^x392);

	if (t52 != 4273265664LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x393 = -1;
	int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MIN;
	volatile int64_t t53 = -72979LL;

	t53 = ((x393*(x394*x395))^x396);

	if (t53 != 9223372036850581504LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x413 = -1594627969016LL;
	volatile int16_t x414 = INT16_MIN;
	int8_t x415 = -1;
	int8_t x416 = -13;
	volatile int64_t t54 = 1197LL;

	t54 = ((x413*(x414*x415))^x416);

	if (t54 != 52252769288716275LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x425 = 0LL;
	int64_t x426 = 2368LL;
	volatile uint8_t x427 = UINT8_MAX;
	volatile int64_t t55 = -1242LL;

	t55 = ((x425*(x426*x427))^x428);

	if (t55 != -1563490LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x433 = INT16_MAX;
	int8_t x434 = 0;
	volatile int8_t x435 = INT8_MIN;
	uint32_t t56 = 14U;

	t56 = ((x433*(x434*x435))^x436);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x441 = INT64_MIN;
	uint8_t x443 = 11U;
	int64_t x444 = 988193522LL;
	uint64_t t57 = 551654LLU;

	t57 = ((x441*(x442*x443))^x444);

	if (t57 != 988193522LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x449 = UINT8_MAX;
	static uint16_t x450 = 3613U;
	static uint64_t x451 = 70408713282212332LLU;
	volatile uint64_t t58 = 218857LLU;

	t58 = ((x449*(x450*x451))^x452);

	if (t58 != 8595229635038376900LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x454 = INT8_MIN;
	uint64_t t59 = 124491785913LLU;

	t59 = ((x453*(x454*x455))^x456);

	if (t59 != 18446744073709535359LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x457 = 12U;
	static uint32_t x458 = 2U;
	uint32_t t60 = 475U;

	t60 = ((x457*(x458*x459))^x460);

	if (t60 != 4294964857U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x465 = INT32_MAX;
	uint8_t x466 = 0U;
	int64_t x467 = INT64_MAX;
	int32_t x468 = -109678;
	static int64_t t61 = -237LL;

	t61 = ((x465*(x466*x467))^x468);

	if (t61 != -109678LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x473 = 0;
	int64_t x474 = -1LL;
	uint32_t x475 = 14363U;
	static int8_t x476 = -5;
	volatile int64_t t62 = 399930719302LL;

	t62 = ((x473*(x474*x475))^x476);

	if (t62 != -5LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x501 = 1U;
	int16_t x502 = -1;
	int8_t x503 = -6;
	uint8_t x504 = UINT8_MAX;
	volatile uint32_t t63 = 6U;

	t63 = ((x501*(x502*x503))^x504);

	if (t63 != 249U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x505 = INT16_MAX;
	int16_t x506 = INT16_MAX;
	int64_t x508 = -133162878569LL;
	volatile uint64_t t64 = 54534498LLU;

	t64 = ((x505*(x506*x507))^x508);

	if (t64 != 134198806120LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x514 = UINT16_MAX;
	uint32_t x515 = 358592U;
	volatile uint32_t t65 = 26U;

	t65 = ((x513*(x514*x515))^x516);

	if (t65 != 3733413440U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x517 = -1;
	int16_t x518 = -1;
	uint16_t x519 = UINT16_MAX;
	int64_t x520 = INT64_MAX;
	static int64_t t66 = -75111144LL;

	t66 = ((x517*(x518*x519))^x520);

	if (t66 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x521 = 7627;
	static int16_t x522 = 1;
	int8_t x523 = INT8_MAX;
	int64_t x524 = -2392LL;

	t67 = ((x521*(x522*x523))^x524);

	if (t67 != -970467LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x525 = -17;
	uint32_t x526 = 2519U;
	int16_t x527 = INT16_MIN;
	int32_t x528 = 7;
	static volatile uint32_t t68 = 53479U;

	t68 = ((x525*(x526*x527))^x528);

	if (t68 != 1403224071U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x533 = INT8_MAX;
	volatile uint32_t x534 = UINT32_MAX;
	static uint64_t x535 = 267LLU;
	int8_t x536 = INT8_MIN;
	uint64_t t69 = 34567890379LLU;

	t69 = ((x533*(x534*x535))^x536);

	if (t69 != 18446598435663545355LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x537 = 612632U;
	int16_t x539 = INT16_MAX;

	t70 = ((x537*(x538*x539))^x540);

	if (t70 != 1400743655U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x541 = 223;
	uint64_t x543 = 282622547458872LLU;
	volatile int64_t x544 = -1LL;
	uint64_t t71 = UINT64_MAX;

	t71 = ((x541*(x542*x543))^x544);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x545 = -1;
	static int64_t x546 = -1LL;
	int32_t x547 = INT32_MIN;
	static uint64_t t72 = 813760262LLU;

	t72 = ((x545*(x546*x547))^x548);

	if (t72 != 18446744071683455340LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x558 = UINT32_MAX;
	int16_t x559 = 395;
	uint16_t x560 = UINT16_MAX;

	t73 = ((x557*(x558*x559))^x560);

	if (t73 != 65140U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x561 = INT32_MAX;
	int8_t x562 = -1;
	int16_t x563 = -1;
	int8_t x564 = 3;
	static volatile int32_t t74 = -1181;

	t74 = ((x561*(x562*x563))^x564);

	if (t74 != 2147483644) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x565 = -1;
	int32_t x566 = 0;
	uint64_t x567 = UINT64_MAX;
	static int16_t x568 = INT16_MIN;
	uint64_t t75 = 1378511058623672LLU;

	t75 = ((x565*(x566*x567))^x568);

	if (t75 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x570 = UINT8_MAX;
	uint64_t x571 = 355622701192401364LLU;
	int32_t x572 = INT32_MIN;
	uint64_t t76 = 1823490LLU;

	t76 = ((x569*(x570*x571))^x572);

	if (t76 != 12373867951429948372LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x580 = 11U;
	static volatile uint32_t t77 = 78021U;

	t77 = ((x577*(x578*x579))^x580);

	if (t77 != 857797223U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x581 = -1371886LL;
	volatile int16_t x582 = INT16_MAX;
	int64_t x583 = -1LL;
	uint64_t x584 = 3LLU;

	t78 = ((x581*(x582*x583))^x584);

	if (t78 != 44952588561LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x589 = UINT8_MAX;
	static int64_t x590 = -1LL;
	volatile int8_t x591 = -1;
	volatile int64_t x592 = INT64_MAX;
	int64_t t79 = -83088103369606725LL;

	t79 = ((x589*(x590*x591))^x592);

	if (t79 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x593 = INT64_MAX;
	static uint64_t x595 = 4299385714172LLU;
	static volatile int16_t x596 = 14733;

	t80 = ((x593*(x594*x595))^x596);

	if (t80 != 9820278752499393569LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x609 = INT16_MIN;
	int8_t x610 = -1;
	int16_t x611 = -3145;
	volatile int64_t x612 = -1LL;
	volatile int64_t t81 = 996LL;

	t81 = ((x609*(x610*x611))^x612);

	if (t81 != 103055359LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x617 = -15275;
	static int8_t x618 = INT8_MAX;
	volatile int32_t x619 = -1;
	static int64_t x620 = -357875639LL;
	volatile int64_t t82 = -5893078992945LL;

	t82 = ((x617*(x618*x619))^x620);

	if (t82 != -357115492LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x625 = INT8_MIN;
	int8_t x627 = INT8_MIN;
	static int8_t x628 = INT8_MAX;
	int32_t t83 = -28531;

	t83 = ((x625*(x626*x627))^x628);

	if (t83 != 2080895) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x641 = 1101650607696053223LLU;
	int16_t x642 = INT16_MAX;
	uint16_t x643 = UINT16_MAX;

	t84 = ((x641*(x642*x643))^x644);

	if (t84 != 5934688631891854304LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x649 = -1;
	uint64_t x652 = 1003211010849LLU;
	uint64_t t85 = 768346680LLU;

	t85 = ((x649*(x650*x651))^x652);

	if (t85 != 1003211010849LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x657 = UINT64_MAX;
	uint64_t x659 = 62303595775LLU;
	uint64_t x660 = 369LLU;

	t86 = ((x657*(x658*x659))^x660);

	if (t86 != 18031414638304295494LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x665 = -1;
	static int16_t x666 = INT16_MAX;
	static volatile int16_t x667 = INT16_MIN;
	int64_t x668 = -161126491889LL;
	int64_t t87 = -40194125092767192LL;

	t87 = ((x665*(x666*x667))^x668);

	if (t87 != -162069784305LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x669 = INT64_MIN;
	uint8_t x671 = 0U;
	int16_t x672 = INT16_MIN;
	static int64_t t88 = 147323621989LL;

	t88 = ((x669*(x670*x671))^x672);

	if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x673 = 3U;
	int16_t x674 = 0;
	volatile int64_t x675 = 535018544LL;
	int16_t x676 = 3264;
	volatile int64_t t89 = 49LL;

	t89 = ((x673*(x674*x675))^x676);

	if (t89 != 3264LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x677 = INT32_MAX;
	static int64_t x678 = -1LL;
	static uint8_t x680 = 127U;

	t90 = ((x677*(x678*x679))^x680);

	if (t90 != -70366596661376LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x681 = 757063720326906LLU;
	int8_t x682 = -1;
	int8_t x683 = INT8_MAX;
	int16_t x684 = INT16_MIN;

	t91 = ((x681*(x682*x683))^x684);

	if (t91 != 96147092481530362LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x689 = -30;
	uint16_t x690 = 4U;
	int8_t x691 = 0;
	static uint64_t x692 = UINT64_MAX;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x689*(x690*x691))^x692);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x693 = INT16_MIN;
	int16_t x694 = INT16_MAX;
	uint64_t x695 = 3475961755631144423LLU;
	int8_t x696 = -31;

	t93 = ((x693*(x694*x695))^x696);

	if (t93 != 12387365022430167009LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x701 = INT8_MIN;
	int8_t x702 = 2;
	int8_t x703 = INT8_MIN;
	int16_t x704 = INT16_MAX;
	int32_t t94 = -8153;

	t94 = ((x701*(x702*x703))^x704);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x705 = 1LLU;
	int16_t x706 = INT16_MIN;
	uint64_t x707 = 2763112LLU;
	static int16_t x708 = INT16_MIN;
	uint64_t t95 = 27930479190LLU;

	t95 = ((x705*(x706*x707))^x708);

	if (t95 != 90541621248LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x709 = 0U;
	int32_t x711 = 6745;
	volatile uint32_t t96 = 223000U;

	t96 = ((x709*(x710*x711))^x712);

	if (t96 != 53599742U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x718 = 751578LLU;
	int64_t x719 = INT64_MIN;
	int32_t x720 = INT32_MIN;
	uint64_t t97 = 239LLU;

	t97 = ((x717*(x718*x719))^x720);

	if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x722 = 100LLU;
	int64_t x723 = INT64_MIN;
	int64_t x724 = INT64_MIN;

	t98 = ((x721*(x722*x723))^x724);

	if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x726 = UINT16_MAX;
	uint8_t x727 = UINT8_MAX;
	static int16_t x728 = -1867;
	int32_t t99 = 851894107;

	t99 = ((x725*(x726*x727))^x728);

	if (t99 != -2122352182) { NG(); } else { ; }
	
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

