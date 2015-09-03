#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 17U;
volatile int8_t x2 = 30;
int64_t x4 = -1LL;
int16_t x9 = INT16_MIN;
static uint16_t x15 = 12U;
uint8_t x18 = UINT8_MAX;
int8_t x22 = -1;
static volatile uint8_t x23 = 0U;
uint8_t x25 = 16U;
int32_t t6 = 11;
volatile int16_t x32 = INT16_MIN;
int32_t x34 = -4;
volatile int32_t t12 = -575018127;
static int64_t x61 = -1LL;
uint8_t x64 = 96U;
uint8_t x72 = 3U;
static int64_t x74 = -434668160870052485LL;
static int16_t x84 = INT16_MIN;
int16_t x97 = 22;
static int16_t x115 = 510;
volatile uint32_t x118 = 26003266U;
int8_t x123 = -1;
int16_t x127 = -1630;
int64_t x128 = 54935052234LL;
static uint32_t x132 = UINT32_MAX;
volatile uint32_t x133 = UINT32_MAX;
int32_t x134 = -1;
int8_t x136 = INT8_MIN;
int32_t t31 = 267329;
int32_t x137 = INT32_MAX;
uint8_t x138 = 40U;
int16_t x140 = INT16_MIN;
static uint8_t x141 = 27U;
int16_t x143 = INT16_MIN;
int32_t x144 = -1;
int32_t t33 = -24578452;
static uint8_t x150 = UINT8_MAX;
static uint16_t x151 = 0U;
int32_t t35 = -13;
uint32_t x159 = 0U;
int64_t x160 = INT64_MAX;
int32_t t36 = -248647398;
int64_t x166 = 205010LL;
int64_t x169 = 193401050819842418LL;
int32_t x175 = INT32_MIN;
int16_t x178 = -1;
static int16_t x196 = 335;
static uint16_t x209 = UINT16_MAX;
volatile uint16_t x212 = 97U;
volatile int32_t t46 = 25689;
uint32_t x222 = UINT32_MAX;
uint8_t x223 = 7U;
static uint64_t x232 = 891547523LLU;
volatile int32_t x233 = INT32_MIN;
static int8_t x234 = INT8_MIN;
volatile int32_t t51 = 8;
volatile int32_t t52 = 746060;
static int64_t x266 = INT64_MIN;
uint16_t x268 = UINT16_MAX;
uint64_t x270 = 1282798LLU;
int8_t x275 = INT8_MIN;
static uint32_t x277 = 31U;
uint64_t x278 = 75658575LLU;
static int32_t x282 = INT32_MIN;
volatile int64_t x297 = INT64_MIN;
static int32_t t65 = 10037570;
volatile int64_t x303 = -1LL;
volatile int32_t t66 = 4099;
static volatile uint32_t x309 = 110U;
int8_t x311 = INT8_MIN;
int16_t x331 = INT16_MIN;
volatile int32_t x336 = INT32_MIN;
int64_t x338 = INT64_MIN;
int32_t t72 = -24;
int8_t x353 = INT8_MIN;
static int64_t x354 = -1LL;
int16_t x365 = INT16_MIN;
static int16_t x366 = -1;
int64_t x374 = INT64_MIN;
int8_t x380 = -3;
volatile uint64_t x384 = 96235722173LLU;
volatile uint32_t x386 = 23745488U;
uint16_t x388 = 191U;
int32_t t82 = 47213;
int32_t x395 = -1;
int64_t x397 = INT64_MIN;
uint16_t x404 = 7U;
volatile uint16_t x405 = UINT16_MAX;
static int64_t x407 = INT64_MAX;
int32_t x412 = -3;
static int32_t t87 = -365539776;
static int64_t x414 = INT64_MIN;
volatile int64_t x426 = INT64_MAX;
static int8_t x428 = INT8_MIN;
int32_t x430 = -83;
static volatile int16_t x457 = INT16_MIN;
volatile int64_t x465 = INT64_MIN;
volatile int32_t x466 = 218;
static int64_t x472 = -102LL;
static uint8_t x474 = 5U;
int32_t t99 = 25;


void f0(void) {
	int64_t x3 = 2074LL;
	volatile int32_t t0 = 18;

	t0 = (x1==(x2%(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint16_t x6 = UINT16_MAX;
	static int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = -130834;

	t1 = (x5==(x6%(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = 0LLU;
	static int32_t x11 = -87332840;
	static volatile int8_t x12 = 0;
	int32_t t2 = 115;

	t2 = (x9==(x10%(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	static int64_t x14 = INT64_MIN;
	static int16_t x16 = -994;
	int32_t t3 = -29193387;

	t3 = (x13==(x14%(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 40U;
	static uint16_t x19 = 116U;
	int16_t x20 = -1;
	int32_t t4 = 0;

	t4 = (x17==(x18%(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 182;
	int16_t x24 = -791;
	static int32_t t5 = 1;

	t5 = (x21==(x22%(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MAX;
	int32_t x28 = 884;

	t6 = (x25==(x26%(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 3192269311LLU;
	int8_t x30 = -1;
	static int8_t x31 = -1;
	int32_t t7 = -749481;

	t7 = (x29==(x30%(x31-x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	volatile uint8_t x35 = UINT8_MAX;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = -1;

	t8 = (x33==(x34%(x35-x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	uint8_t x39 = 14U;
	int32_t x40 = INT32_MAX;
	volatile int32_t t9 = 0;

	t9 = (x37==(x38%(x39-x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MAX;
	int64_t x50 = -1LL;
	volatile int16_t x51 = 13;
	int32_t x52 = INT32_MAX;
	volatile int32_t t10 = 20;

	t10 = (x49==(x50%(x51-x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int64_t x54 = 12577493345980651LL;
	uint64_t x55 = 13894384LLU;
	static int64_t x56 = -1LL;
	volatile int32_t t11 = -89;

	t11 = (x53==(x54%(x55-x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 14U;
	static uint32_t x58 = 5443840U;
	uint16_t x59 = UINT16_MAX;
	int16_t x60 = INT16_MAX;

	t12 = (x57==(x58%(x59-x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x62 = UINT16_MAX;
	volatile uint16_t x63 = UINT16_MAX;
	volatile int32_t t13 = 8659;

	t13 = (x61==(x62%(x63-x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = 60LL;
	int8_t x66 = -1;
	int16_t x67 = -22;
	uint8_t x68 = UINT8_MAX;
	static int32_t t14 = 177;

	t14 = (x65==(x66%(x67-x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x69 = UINT16_MAX;
	int16_t x70 = INT16_MIN;
	static uint64_t x71 = 32LLU;
	int32_t t15 = 1594;

	t15 = (x69==(x70%(x71-x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -4LL;
	volatile int8_t x75 = -39;
	int16_t x76 = 7129;
	int32_t t16 = 11450394;

	t16 = (x73==(x74%(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = 1U;
	static int16_t x78 = 229;
	int16_t x79 = 0;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t17 = 91;

	t17 = (x77==(x78%(x79-x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -2015387526LL;
	uint32_t x82 = 261579U;
	uint8_t x83 = 3U;
	int32_t t18 = 23400;

	t18 = (x81==(x82%(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x85 = 30890U;
	static int64_t x86 = INT64_MIN;
	int16_t x87 = -1;
	int32_t x88 = -3887;
	int32_t t19 = 1037017;

	t19 = (x85==(x86%(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 434U;
	int8_t x90 = -1;
	int32_t x91 = -34829;
	uint64_t x92 = 30856138205104LLU;
	volatile int32_t t20 = 54123;

	t20 = (x89==(x90%(x91-x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x93 = 59;
	static int8_t x94 = INT8_MAX;
	static volatile int16_t x95 = 2022;
	int64_t x96 = -1LL;
	int32_t t21 = -5743612;

	t21 = (x93==(x94%(x95-x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x98 = 144174634U;
	static volatile int16_t x99 = 1876;
	static int32_t x100 = -1;
	volatile int32_t t22 = -1;

	t22 = (x97==(x98%(x99-x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -72;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int32_t t23 = 2295;

	t23 = (x101==(x102%(x103-x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = INT8_MAX;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = -1;
	int64_t x108 = INT64_MIN;
	static int32_t t24 = 0;

	t24 = (x105==(x106%(x107-x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x109 = INT32_MAX;
	uint8_t x110 = 15U;
	uint64_t x111 = 214540588LLU;
	int8_t x112 = 0;
	volatile int32_t t25 = 293505;

	t25 = (x109==(x110%(x111-x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x113 = 10U;
	uint16_t x114 = UINT16_MAX;
	uint32_t x116 = UINT32_MAX;
	int32_t t26 = -143886;

	t26 = (x113==(x114%(x115-x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 2818466LLU;
	volatile uint64_t x119 = 38LLU;
	static int64_t x120 = 743611LL;
	volatile int32_t t27 = 0;

	t27 = (x117==(x118%(x119-x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = 751198609839614861LL;
	static volatile uint8_t x122 = 5U;
	volatile int32_t x124 = INT32_MIN;
	int32_t t28 = 1081971;

	t28 = (x121==(x122%(x123-x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = 5U;
	uint64_t x126 = 130359260LLU;
	int32_t t29 = 1;

	t29 = (x125==(x126%(x127-x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = 8;
	int16_t x130 = INT16_MIN;
	int8_t x131 = 6;
	int32_t t30 = -3168;

	t30 = (x129==(x130%(x131-x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x135 = UINT32_MAX;

	t31 = (x133==(x134%(x135-x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x139 = -13;
	int32_t t32 = -1827;

	t32 = (x137==(x138%(x139-x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x142 = 2U;

	t33 = (x141==(x142%(x143-x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = 863167;
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	volatile int64_t x148 = -1LL;
	volatile int32_t t34 = 20737572;

	t34 = (x145==(x146%(x147-x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x152 = INT16_MAX;

	t35 = (x149==(x150%(x151-x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = -1;
	int16_t x158 = -720;

	t36 = (x157==(x158%(x159-x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MAX;
	uint64_t x167 = UINT64_MAX;
	uint64_t x168 = 21LLU;
	static volatile int32_t t37 = -139233099;

	t37 = (x165==(x166%(x167-x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x170 = 12U;
	int8_t x171 = 18;
	int8_t x172 = INT8_MIN;
	int32_t t38 = 12;

	t38 = (x169==(x170%(x171-x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -3;
	int32_t x174 = 4368694;
	volatile int64_t x176 = -213223624513LL;
	static int32_t t39 = -939918759;

	t39 = (x173==(x174%(x175-x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = INT32_MIN;
	uint8_t x179 = 5U;
	uint32_t x180 = 963449U;
	volatile int32_t t40 = -20;

	t40 = (x177==(x178%(x179-x180)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x185 = 712636114;
	uint16_t x186 = UINT16_MAX;
	int8_t x187 = -1;
	static int8_t x188 = -21;
	int32_t t41 = -226;

	t41 = (x185==(x186%(x187-x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	int8_t x195 = INT8_MIN;
	volatile int32_t t42 = -886;

	t42 = (x193==(x194%(x195-x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MIN;
	uint64_t x198 = UINT64_MAX;
	uint16_t x199 = 1522U;
	uint8_t x200 = 2U;
	static int32_t t43 = -2;

	t43 = (x197==(x198%(x199-x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x205 = 6723785835749158LLU;
	uint16_t x206 = 175U;
	int64_t x207 = INT64_MAX;
	uint64_t x208 = 347025982639LLU;
	static volatile int32_t t44 = -31860585;

	t44 = (x205==(x206%(x207-x208)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x210 = -1;
	int64_t x211 = -1LL;
	volatile int32_t t45 = -244280078;

	t45 = (x209==(x210%(x211-x212)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x213 = 43U;
	int8_t x214 = INT8_MAX;
	int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MAX;

	t46 = (x213==(x214%(x215-x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MAX;
	int32_t x218 = -1;
	int64_t x219 = INT64_MAX;
	uint32_t x220 = 331471U;
	int32_t t47 = -261881400;

	t47 = (x217==(x218%(x219-x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = INT64_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t48 = -139884874;

	t48 = (x221==(x222%(x223-x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x225 = -1;
	int64_t x226 = -1LL;
	static int64_t x227 = -3856367801561479LL;
	int32_t x228 = -981701;
	static int32_t t49 = 14251;

	t49 = (x225==(x226%(x227-x228)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 78U;
	static volatile int32_t x230 = -1;
	static int16_t x231 = -3;
	volatile int32_t t50 = -11;

	t50 = (x229==(x230%(x231-x232)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x235 = INT32_MAX;
	uint16_t x236 = 27682U;

	t51 = (x233==(x234%(x235-x236)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = INT8_MIN;
	volatile uint32_t x238 = 18428437U;
	static uint16_t x239 = UINT16_MAX;
	uint8_t x240 = 80U;

	t52 = (x237==(x238%(x239-x240)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = -1;
	static int32_t x242 = INT32_MIN;
	static uint32_t x243 = 385U;
	static volatile uint32_t x244 = 1440666U;
	static volatile int32_t t53 = 43;

	t53 = (x241==(x242%(x243-x244)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MIN;
	volatile int64_t x246 = INT64_MAX;
	int64_t x247 = -1LL;
	uint16_t x248 = UINT16_MAX;
	int32_t t54 = -8;

	t54 = (x245==(x246%(x247-x248)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = 15962;
	uint16_t x250 = 5447U;
	int8_t x251 = 0;
	uint64_t x252 = UINT64_MAX;
	int32_t t55 = -120;

	t55 = (x249==(x250%(x251-x252)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = 0;
	int32_t x263 = 613430652;
	uint8_t x264 = 23U;
	int32_t t56 = -1288191;

	t56 = (x261==(x262%(x263-x264)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = INT8_MIN;
	volatile uint64_t x267 = 6728435LLU;
	volatile int32_t t57 = -4789;

	t57 = (x265==(x266%(x267-x268)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = 1990;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 0U;
	int32_t t58 = 1959;

	t58 = (x269==(x270%(x271-x272)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = INT32_MAX;
	int8_t x274 = -1;
	volatile uint8_t x276 = 23U;
	volatile int32_t t59 = -1393;

	t59 = (x273==(x274%(x275-x276)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = INT32_MIN;
	static int32_t t60 = -12810;

	t60 = (x277==(x278%(x279-x280)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -1;
	uint64_t x283 = 836032921LLU;
	int8_t x284 = 0;
	volatile int32_t t61 = 29106967;

	t61 = (x281==(x282%(x283-x284)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x285 = UINT16_MAX;
	uint16_t x286 = 37U;
	uint64_t x287 = 120062LLU;
	uint8_t x288 = UINT8_MAX;
	int32_t t62 = -33943848;

	t62 = (x285==(x286%(x287-x288)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x289 = 13018U;
	volatile int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	int32_t x292 = INT32_MAX;
	volatile int32_t t63 = -6110101;

	t63 = (x289==(x290%(x291-x292)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x293 = 57U;
	volatile uint64_t x294 = 55296006LLU;
	uint16_t x295 = 10U;
	volatile uint64_t x296 = 824158617145693857LLU;
	volatile int32_t t64 = 9321;

	t64 = (x293==(x294%(x295-x296)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x298 = -1;
	static int8_t x299 = INT8_MIN;
	volatile int16_t x300 = INT16_MAX;

	t65 = (x297==(x298%(x299-x300)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = INT64_MAX;
	int16_t x302 = INT16_MIN;
	int32_t x304 = -38822462;

	t66 = (x301==(x302%(x303-x304)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x310 = -1;
	volatile int8_t x312 = INT8_MAX;
	int32_t t67 = 67401836;

	t67 = (x309==(x310%(x311-x312)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x317 = 3U;
	int16_t x318 = INT16_MIN;
	static uint32_t x319 = 239U;
	int32_t x320 = -1148021;
	int32_t t68 = 12383526;

	t68 = (x317==(x318%(x319-x320)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x325 = 52869947LL;
	uint64_t x326 = 3183294905506LLU;
	int8_t x327 = -7;
	int16_t x328 = -1;
	int32_t t69 = 3757;

	t69 = (x325==(x326%(x327-x328)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = INT8_MIN;
	volatile int16_t x330 = INT16_MAX;
	uint64_t x332 = 6974115603LLU;
	int32_t t70 = -6033630;

	t70 = (x329==(x330%(x331-x332)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x333 = UINT8_MAX;
	static int16_t x334 = INT16_MIN;
	static int8_t x335 = -1;
	volatile int32_t t71 = -4;

	t71 = (x333==(x334%(x335-x336)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x337 = 4240769LL;
	static volatile uint8_t x339 = UINT8_MAX;
	int8_t x340 = 0;

	t72 = (x337==(x338%(x339-x340)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = INT16_MIN;
	volatile uint32_t x346 = 743800U;
	int16_t x347 = -93;
	int8_t x348 = 47;
	static volatile int32_t t73 = 25580078;

	t73 = (x345==(x346%(x347-x348)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = 4047703261327LLU;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = UINT64_MAX;
	int32_t t74 = 10;

	t74 = (x349==(x350%(x351-x352)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x355 = INT32_MIN;
	uint32_t x356 = 1491324931U;
	volatile int32_t t75 = 105103;

	t75 = (x353==(x354%(x355-x356)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x361 = 22U;
	int16_t x362 = INT16_MAX;
	static int32_t x363 = INT32_MAX;
	uint32_t x364 = 60U;
	int32_t t76 = -943642;

	t76 = (x361==(x362%(x363-x364)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x367 = INT64_MAX;
	static volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t77 = 3;

	t77 = (x365==(x366%(x367-x368)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x369 = -126512677520LL;
	uint32_t x370 = 21928121U;
	volatile int16_t x371 = 14;
	int8_t x372 = INT8_MAX;
	int32_t t78 = -2027523;

	t78 = (x369==(x370%(x371-x372)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x373 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MIN;
	int32_t t79 = -400157;

	t79 = (x373==(x374%(x375-x376)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x377 = UINT64_MAX;
	uint32_t x378 = UINT32_MAX;
	int32_t x379 = -6;
	volatile int32_t t80 = 3;

	t80 = (x377==(x378%(x379-x380)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x381 = 671164461120453LL;
	static uint64_t x382 = 1517424620245LLU;
	uint32_t x383 = 16575285U;
	volatile int32_t t81 = 1005;

	t81 = (x381==(x382%(x383-x384)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = INT8_MIN;
	uint16_t x387 = UINT16_MAX;

	t82 = (x385==(x386%(x387-x388)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t83 = -248355384;

	t83 = (x393==(x394%(x395-x396)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x398 = 1U;
	int64_t x399 = INT64_MAX;
	uint32_t x400 = 257259720U;
	volatile int32_t t84 = -58;

	t84 = (x397==(x398%(x399-x400)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x401 = UINT32_MAX;
	int32_t x402 = INT32_MAX;
	uint16_t x403 = 437U;
	int32_t t85 = -5301;

	t85 = (x401==(x402%(x403-x404)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x406 = INT64_MIN;
	int64_t x408 = 5LL;
	int32_t t86 = -13;

	t86 = (x405==(x406%(x407-x408)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = -1LL;
	uint64_t x410 = 3719867524155718475LLU;
	volatile uint16_t x411 = 6343U;

	t87 = (x409==(x410%(x411-x412)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = 1LL;
	int16_t x415 = INT16_MIN;
	int32_t x416 = -55406658;
	int32_t t88 = 0;

	t88 = (x413==(x414%(x415-x416)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x421 = INT32_MIN;
	int8_t x422 = -1;
	int32_t x423 = INT32_MIN;
	uint32_t x424 = UINT32_MAX;
	static int32_t t89 = 165845;

	t89 = (x421==(x422%(x423-x424)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x425 = 13235U;
	int8_t x427 = -6;
	int32_t t90 = 58;

	t90 = (x425==(x426%(x427-x428)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x429 = 3299U;
	static int32_t x431 = INT32_MIN;
	static int64_t x432 = INT64_MIN;
	volatile int32_t t91 = -26;

	t91 = (x429==(x430%(x431-x432)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x445 = UINT16_MAX;
	uint16_t x446 = 3U;
	int64_t x447 = INT64_MIN;
	static int64_t x448 = -1886778LL;
	int32_t t92 = 2;

	t92 = (x445==(x446%(x447-x448)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x449 = -120;
	int32_t x450 = INT32_MIN;
	uint16_t x451 = 211U;
	int16_t x452 = -143;
	volatile int32_t t93 = -697758760;

	t93 = (x449==(x450%(x451-x452)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x458 = UINT8_MAX;
	int64_t x459 = 60340081544462LL;
	uint64_t x460 = 155404424LLU;
	volatile int32_t t94 = 2;

	t94 = (x457==(x458%(x459-x460)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = INT16_MIN;
	static int16_t x462 = -6799;
	static int8_t x463 = INT8_MIN;
	uint8_t x464 = 0U;
	volatile int32_t t95 = -2927;

	t95 = (x461==(x462%(x463-x464)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x467 = 582224U;
	static uint8_t x468 = 79U;
	int32_t t96 = 777126;

	t96 = (x465==(x466%(x467-x468)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x469 = UINT32_MAX;
	static int8_t x470 = -5;
	uint32_t x471 = 10746101U;
	volatile int32_t t97 = -204785;

	t97 = (x469==(x470%(x471-x472)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x473 = 65;
	int16_t x475 = INT16_MAX;
	volatile int8_t x476 = INT8_MIN;
	volatile int32_t t98 = 11018;

	t98 = (x473==(x474%(x475-x476)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x477 = INT64_MAX;
	uint32_t x478 = 16179U;
	uint32_t x479 = 599U;
	int64_t x480 = INT64_MAX;

	t99 = (x477==(x478%(x479-x480)));

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

