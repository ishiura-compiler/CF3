#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -228175475648LL;
volatile int32_t x3 = INT32_MIN;
uint8_t x11 = 2U;
uint8_t x12 = 43U;
uint32_t t2 = 30343132U;
int64_t x18 = -80474350LL;
static volatile uint64_t t6 = 65LLU;
uint32_t x37 = 256492U;
int16_t x48 = INT16_MIN;
int32_t x51 = -1;
int64_t t9 = -7790LL;
int16_t x53 = 1004;
static volatile uint32_t x56 = 30U;
int32_t x60 = -1;
static uint64_t t11 = 145LLU;
static uint64_t x68 = 16384376291LLU;
int16_t x69 = 8;
int16_t x75 = -39;
int8_t x76 = 2;
uint8_t x77 = UINT8_MAX;
static int16_t x79 = -1;
uint64_t x85 = 44363769933473LLU;
volatile int16_t x86 = INT16_MAX;
static int64_t x87 = -14483761288530LL;
int8_t x91 = INT8_MIN;
uint8_t x94 = UINT8_MAX;
volatile int32_t t21 = -208068127;
uint32_t x129 = UINT32_MAX;
int16_t x131 = 1;
int8_t x138 = -1;
int64_t x139 = INT64_MIN;
uint32_t x142 = UINT32_MAX;
uint8_t x145 = 28U;
int8_t x153 = INT8_MIN;
volatile uint32_t t29 = 423537U;
uint16_t x170 = 3818U;
volatile int8_t x172 = INT8_MIN;
int32_t x189 = INT32_MIN;
volatile int64_t x192 = -3986051224LL;
uint32_t x194 = 407276U;
uint64_t t36 = 25508823172LLU;
int8_t x202 = -2;
volatile uint64_t t42 = 33801LLU;
int64_t t45 = 217461LL;
static int32_t x241 = INT32_MIN;
int64_t x244 = -1LL;
uint64_t x245 = 4LLU;
int8_t x246 = INT8_MIN;
int64_t x247 = INT64_MIN;
int64_t x251 = INT64_MAX;
static volatile int64_t t49 = 276LL;
int8_t x256 = -54;
volatile int8_t x263 = INT8_MIN;
int64_t t53 = -47041486500312145LL;
int16_t x270 = 0;
int64_t x273 = INT64_MAX;
uint64_t x278 = UINT64_MAX;
uint64_t x279 = 189407564LLU;
int16_t x282 = -6577;
static uint8_t x283 = 49U;
int32_t x284 = -1;
int16_t x308 = INT16_MIN;
volatile int32_t t60 = 5978;
static int8_t x331 = INT8_MIN;
int64_t x333 = 1LL;
static uint64_t x334 = 90139298500LLU;
static volatile int64_t t66 = -7793404LL;
int16_t x340 = INT16_MAX;
int16_t x345 = -1;
volatile int8_t x346 = INT8_MIN;
volatile int16_t x351 = -124;
static volatile int32_t t70 = -38505;
volatile uint16_t x364 = 8U;
volatile int32_t t72 = 14626;
static uint64_t x373 = 28743264223LLU;
uint16_t x379 = 14U;
uint64_t x381 = 5543540649233258LLU;
uint64_t x382 = UINT64_MAX;
uint32_t x384 = 514U;
volatile int32_t x403 = 1;
static volatile uint64_t t80 = 2717565339929LLU;
int32_t x435 = -1;
static int16_t x451 = 1602;
uint8_t x452 = 73U;
int16_t x454 = 5251;
static int64_t x455 = 122LL;
uint32_t x457 = 49673132U;
int8_t x459 = -12;
int64_t x462 = 226508820963382532LL;
static int64_t x464 = -7506916104964062LL;
int16_t x472 = INT16_MIN;
uint64_t t92 = 1LLU;
int16_t x497 = 492;
uint16_t x499 = 0U;
volatile int16_t x512 = 5;
volatile uint32_t t96 = 0U;
volatile int8_t x516 = INT8_MIN;
uint64_t t97 = 527339LLU;
uint32_t x520 = 205887U;
uint32_t t98 = 19917468U;
uint16_t x522 = 4U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint8_t x4 = 39U;
	static volatile int32_t t0 = 63673972;

	t0 = (x1*((x2==x3)|x4));

	if (t0 != -4992) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint8_t x6 = 20U;
	static uint32_t x7 = 58544666U;
	static volatile int8_t x8 = 1;
	static volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5*((x6==x7)|x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 502U;
	uint32_t x10 = 1586775U;

	t2 = (x9*((x10==x11)|x12));

	if (t2 != 21586U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	volatile int8_t x14 = 0;
	static uint64_t x15 = 41789461444LLU;
	uint64_t x16 = 12031043318201LLU;
	static uint64_t t3 = 96034033LLU;

	t3 = (x13*((x14==x15)|x16));

	if (t3 != 18446732042666233415LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 9298LLU;
	int32_t x19 = -1;
	volatile uint8_t x20 = 2U;
	uint64_t t4 = 13655402LLU;

	t4 = (x17*((x18==x19)|x20));

	if (t4 != 18596LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 7824U;
	int64_t x22 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	volatile uint32_t x24 = 14U;
	static uint32_t t5 = 7866356U;

	t5 = (x21*((x22==x23)|x24));

	if (t5 != 109536U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 53453495195600941LLU;
	uint32_t x26 = 2066792345U;
	int64_t x27 = -15LL;
	static int64_t x28 = -10LL;

	t6 = (x25*((x26==x27)|x28));

	if (t6 != 17912209121753542206LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x38 = 33948136254LL;
	int32_t x39 = -37643050;
	static int8_t x40 = INT8_MIN;
	static uint32_t t7 = 2987318U;

	t7 = (x37*((x38==x39)|x40));

	if (t7 != 4262136320U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 980220910LLU;
	int16_t x46 = 2164;
	int64_t x47 = -1LL;
	uint64_t t8 = 226238389LLU;

	t8 = (x45*((x46==x47)|x48));

	if (t8 != 18446711953830772736LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -7756297131LL;
	static int16_t x50 = INT16_MIN;
	int32_t x52 = 14553;

	t9 = (x49*((x50==x51)|x52));

	if (t9 != -112877392147443LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x54 = -1;
	static int32_t x55 = INT32_MIN;
	uint32_t t10 = 229016210U;

	t10 = (x53*((x54==x55)|x56));

	if (t10 != 30120U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = 4887335LLU;
	uint64_t x58 = 55726812036LLU;
	volatile uint32_t x59 = 3230U;

	t11 = (x57*((x58==x59)|x60));

	if (t11 != 18446744073704664281LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x61 = 5;
	int64_t x62 = 7931LL;
	int16_t x63 = INT16_MIN;
	int64_t x64 = -183LL;
	static volatile int64_t t12 = 148708708852LL;

	t12 = (x61*((x62==x63)|x64));

	if (t12 != -915LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x65 = 1U;
	int64_t x66 = -1LL;
	volatile uint16_t x67 = 0U;
	volatile uint64_t t13 = 1045536918LLU;

	t13 = (x65*((x66==x67)|x68));

	if (t13 != 16384376291LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x70 = -1;
	int64_t x71 = INT64_MIN;
	volatile uint32_t x72 = 1521801U;
	uint32_t t14 = 1295336U;

	t14 = (x69*((x70==x71)|x72));

	if (t14 != 12174408U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -1;
	uint32_t x74 = 18780822U;
	int32_t t15 = -106183003;

	t15 = (x73*((x74==x75)|x76));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x78 = -357689302931228LL;
	static int8_t x80 = -31;
	int32_t t16 = 15312;

	t16 = (x77*((x78==x79)|x80));

	if (t16 != -7905) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x88 = 454U;
	volatile uint64_t t17 = 466030981461599721LLU;

	t17 = (x85*((x86==x87)|x88));

	if (t17 != 20141151549796742LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x89 = 32506U;
	static int64_t x90 = -1LL;
	int8_t x92 = -1;
	int32_t t18 = 149340;

	t18 = (x89*((x90==x91)|x92));

	if (t18 != -32506) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = 43;
	int16_t x95 = -566;
	volatile int16_t x96 = -2585;
	static volatile int32_t t19 = -11422931;

	t19 = (x93*((x94==x95)|x96));

	if (t19 != -111155) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = 1;
	static int16_t x98 = 9;
	static int16_t x99 = -1;
	static volatile uint16_t x100 = 1491U;
	volatile int32_t t20 = 0;

	t20 = (x97*((x98==x99)|x100));

	if (t20 != 1491) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile int32_t x126 = INT32_MIN;
	int32_t x127 = 0;
	uint8_t x128 = 6U;

	t21 = (x125*((x126==x127)|x128));

	if (t21 != -196608) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x130 = 244310LL;
	int16_t x132 = -1;
	uint32_t t22 = 5U;

	t22 = (x129*((x130==x131)|x132));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x137 = INT32_MIN;
	uint32_t x140 = 12354718U;
	uint32_t t23 = 3526U;

	t23 = (x137*((x138==x139)|x140));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x141 = 43U;
	static volatile int16_t x143 = INT16_MIN;
	static int64_t x144 = -4368658LL;
	volatile int64_t t24 = -12297550LL;

	t24 = (x141*((x142==x143)|x144));

	if (t24 != -187852294LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x146 = 51;
	uint64_t x147 = 4631032486LLU;
	uint8_t x148 = 8U;
	int32_t t25 = -920;

	t25 = (x145*((x146==x147)|x148));

	if (t25 != 224) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x154 = UINT64_MAX;
	volatile int64_t x155 = 2471LL;
	int16_t x156 = INT16_MAX;
	volatile int32_t t26 = -87;

	t26 = (x153*((x154==x155)|x156));

	if (t26 != -4194176) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MIN;
	static volatile uint32_t x159 = UINT32_MAX;
	static int8_t x160 = INT8_MAX;
	static volatile int32_t t27 = -40;

	t27 = (x157*((x158==x159)|x160));

	if (t27 != -16256) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x161 = 7281145784064LLU;
	int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	int8_t x164 = -1;
	volatile uint64_t t28 = 29014494LLU;

	t28 = (x161*((x162==x163)|x164));

	if (t28 != 18446736792563767552LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x165 = INT32_MAX;
	volatile uint8_t x166 = 8U;
	uint8_t x167 = UINT8_MAX;
	volatile uint32_t x168 = 286238U;

	t29 = (x165*((x166==x167)|x168));

	if (t29 != 4294681058U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x169 = 1198399171494858LL;
	uint16_t x171 = 32702U;
	int64_t t30 = 550921839LL;

	t30 = (x169*((x170==x171)|x172));

	if (t30 != -153395093951341824LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = INT8_MIN;
	static uint64_t x174 = UINT64_MAX;
	uint8_t x175 = 11U;
	uint8_t x176 = UINT8_MAX;
	static volatile int32_t t31 = 430487313;

	t31 = (x173*((x174==x175)|x176));

	if (t31 != -32640) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x177 = -1LL;
	uint16_t x178 = UINT16_MAX;
	uint8_t x179 = 2U;
	uint8_t x180 = 0U;
	int64_t t32 = -1LL;

	t32 = (x177*((x178==x179)|x180));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = -1;
	uint64_t x183 = 30710LLU;
	int64_t x184 = -145437537LL;
	int64_t t33 = 23504676022LL;

	t33 = (x181*((x182==x183)|x184));

	if (t33 != -312324732367457439LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x185 = -1;
	static int8_t x186 = INT8_MIN;
	int16_t x187 = 1009;
	int8_t x188 = 22;
	int32_t t34 = -232173209;

	t34 = (x185*((x186==x187)|x188));

	if (t34 != -22) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x190 = INT16_MIN;
	static int32_t x191 = 4503057;
	volatile int64_t t35 = -5460050751LL;

	t35 = (x189*((x190==x191)|x192));

	if (t35 != 8559979823630385152LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x193 = 97706542U;
	volatile int8_t x195 = -14;
	uint64_t x196 = 730523881LLU;

	t36 = (x193*((x194==x195)|x196));

	if (t36 != 71376962260929502LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x197 = 0;
	int16_t x198 = -72;
	int32_t x199 = -1;
	int8_t x200 = INT8_MIN;
	int32_t t37 = -415;

	t37 = (x197*((x198==x199)|x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x201 = INT8_MAX;
	int32_t x203 = -14750525;
	int64_t x204 = -1LL;
	volatile int64_t t38 = -18068944732LL;

	t38 = (x201*((x202==x203)|x204));

	if (t38 != -127LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = 4049752867385621323LL;
	volatile uint32_t x210 = 1324U;
	volatile int16_t x211 = INT16_MIN;
	uint64_t x212 = 6314218LLU;
	uint64_t t39 = 61927182591475668LLU;

	t39 = (x209*((x210==x211)|x212));

	if (t39 != 16688613206681909902LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x213 = -1LL;
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = -10;
	volatile int32_t x216 = -1;
	int64_t t40 = -1LL;

	t40 = (x213*((x214==x215)|x216));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x217 = 1;
	uint16_t x218 = 229U;
	int8_t x219 = INT8_MIN;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t41 = -1664896;

	t41 = (x217*((x218==x219)|x220));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = -212115;
	int8_t x222 = INT8_MIN;
	volatile int16_t x223 = -1;
	static uint64_t x224 = UINT64_MAX;

	t42 = (x221*((x222==x223)|x224));

	if (t42 != 212115LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = -1;
	int16_t x226 = 1;
	uint64_t x227 = 835598177946249LLU;
	volatile int16_t x228 = -1;
	int32_t t43 = 2;

	t43 = (x225*((x226==x227)|x228));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = UINT64_MAX;
	volatile int64_t x230 = -1LL;
	int16_t x231 = INT16_MAX;
	static int64_t x232 = 12312589872224LL;
	uint64_t t44 = 902966742149LLU;

	t44 = (x229*((x230==x231)|x232));

	if (t44 != 18446731761119679392LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = INT32_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	int8_t x235 = -1;
	int64_t x236 = -1252406368LL;

	t45 = (x233*((x234==x235)|x236));

	if (t45 != 2689522193783586816LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x237 = 3644U;
	uint16_t x238 = 64U;
	int64_t x239 = INT64_MIN;
	int8_t x240 = INT8_MIN;
	int32_t t46 = -3363;

	t46 = (x237*((x238==x239)|x240));

	if (t46 != -466432) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = INT64_MAX;
	static volatile int64_t t47 = -558232237825477871LL;

	t47 = (x241*((x242==x243)|x244));

	if (t47 != 2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x248 = INT32_MAX;
	uint64_t t48 = 3069068496581LLU;

	t48 = (x245*((x246==x247)|x248));

	if (t48 != 8589934588LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x249 = -1;
	volatile uint8_t x250 = 40U;
	static volatile int64_t x252 = 16LL;

	t49 = (x249*((x250==x251)|x252));

	if (t49 != -16LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = 24;
	int8_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	volatile int32_t t50 = -23857;

	t50 = (x253*((x254==x255)|x256));

	if (t50 != -1296) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x257 = UINT16_MAX;
	static volatile int16_t x258 = INT16_MAX;
	int32_t x259 = -93781605;
	int64_t x260 = -1LL;
	volatile int64_t t51 = -49415LL;

	t51 = (x257*((x258==x259)|x260));

	if (t51 != -65535LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x261 = INT8_MIN;
	static int8_t x262 = INT8_MIN;
	int64_t x264 = 7930735802197LL;
	int64_t t52 = 144291173062LL;

	t52 = (x261*((x262==x263)|x264));

	if (t52 != -1015134182681216LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x265 = 475087LL;
	uint16_t x266 = 26U;
	int32_t x267 = INT32_MAX;
	int32_t x268 = INT32_MAX;

	t53 = (x265*((x266==x267)|x268));

	if (t53 != 1020241563402289LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x269 = 67346398717864LL;
	int16_t x271 = 2844;
	uint8_t x272 = 63U;
	static int64_t t54 = 433656310280420940LL;

	t54 = (x269*((x270==x271)|x272));

	if (t54 != 4242823119225432LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x274 = -1;
	int32_t x275 = INT32_MIN;
	static uint64_t x276 = UINT64_MAX;
	volatile uint64_t t55 = 3272195230151LLU;

	t55 = (x273*((x274==x275)|x276));

	if (t55 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x277 = INT16_MIN;
	static volatile int8_t x280 = INT8_MIN;
	volatile int32_t t56 = 1152;

	t56 = (x277*((x278==x279)|x280));

	if (t56 != 4194304) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x281 = UINT64_MAX;
	static volatile uint64_t t57 = 8520816635934465LLU;

	t57 = (x281*((x282==x283)|x284));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x285 = -82;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	static int64_t x288 = -1LL;
	int64_t t58 = 38296531210392824LL;

	t58 = (x285*((x286==x287)|x288));

	if (t58 != 82LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x293 = -24;
	int32_t x294 = INT32_MAX;
	static int32_t x295 = -1;
	int8_t x296 = -1;
	static volatile int32_t t59 = 4502086;

	t59 = (x293*((x294==x295)|x296));

	if (t59 != 24) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x305 = -1;
	uint32_t x306 = 92707U;
	int64_t x307 = INT64_MIN;

	t60 = (x305*((x306==x307)|x308));

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = 4690U;
	uint8_t x311 = UINT8_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t61 = 1U;

	t61 = (x309*((x310==x311)|x312));

	if (t61 != 32768U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x313 = 1497013856016358960LLU;
	int64_t x314 = -1LL;
	int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	volatile uint64_t t62 = 24660LLU;

	t62 = (x313*((x314==x315)|x316));

	if (t62 != 11296411240711120896LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x321 = 1U;
	int32_t x322 = INT32_MAX;
	uint32_t x323 = 1088919U;
	uint16_t x324 = 45U;
	int32_t t63 = 55616307;

	t63 = (x321*((x322==x323)|x324));

	if (t63 != 45) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = -1;
	int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MIN;
	static uint8_t x328 = 126U;
	volatile int32_t t64 = 757;

	t64 = (x325*((x326==x327)|x328));

	if (t64 != -126) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x329 = -1LL;
	static uint64_t x330 = 32993944627879669LLU;
	static int32_t x332 = -112310;
	volatile int64_t t65 = 4421714594872258LL;

	t65 = (x329*((x330==x331)|x332));

	if (t65 != 112310LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x335 = 1U;
	static int32_t x336 = INT32_MAX;

	t66 = (x333*((x334==x335)|x336));

	if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x337 = INT8_MAX;
	volatile int8_t x338 = -30;
	int8_t x339 = INT8_MIN;
	int32_t t67 = 57;

	t67 = (x337*((x338==x339)|x340));

	if (t67 != 4161409) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x341 = UINT32_MAX;
	int8_t x342 = INT8_MAX;
	volatile int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	volatile uint32_t t68 = 20U;

	t68 = (x341*((x342==x343)|x344));

	if (t68 != 32768U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x347 = INT32_MIN;
	static int16_t x348 = INT16_MIN;
	int32_t t69 = -198519032;

	t69 = (x345*((x346==x347)|x348));

	if (t69 != 32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x349 = 5U;
	int32_t x350 = INT32_MAX;
	int8_t x352 = 0;

	t70 = (x349*((x350==x351)|x352));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x353 = 1798032U;
	int32_t x354 = 3345846;
	int32_t x355 = INT32_MIN;
	int8_t x356 = 23;
	uint32_t t71 = 555745U;

	t71 = (x353*((x354==x355)|x356));

	if (t71 != 41354736U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x361 = -1;
	uint16_t x362 = 38U;
	int16_t x363 = 4;

	t72 = (x361*((x362==x363)|x364));

	if (t72 != -8) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x365 = 8675701U;
	int64_t x366 = -367162819590LL;
	int64_t x367 = INT64_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile uint32_t t73 = 1U;

	t73 = (x365*((x366==x367)|x368));

	if (t73 != 2212303755U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x369 = -54974;
	int32_t x370 = -1;
	uint16_t x371 = 16U;
	uint32_t x372 = 4722U;
	volatile uint32_t t74 = 155978U;

	t74 = (x369*((x370==x371)|x372));

	if (t74 != 4035380068U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x374 = 100873628;
	uint8_t x375 = 15U;
	static int64_t x376 = 261187LL;
	volatile uint64_t t75 = 11401156009LLU;

	t75 = (x373*((x374==x375)|x376));

	if (t75 != 7507366952612701LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x377 = INT16_MAX;
	int16_t x378 = -189;
	int8_t x380 = INT8_MAX;
	static int32_t t76 = -18201441;

	t76 = (x377*((x378==x379)|x380));

	if (t76 != 4161409) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x383 = -1;
	volatile uint64_t t77 = 185LLU;

	t77 = (x381*((x382==x383)|x384));

	if (t77 != 2854923434355127870LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	int16_t x395 = -1;
	static int8_t x396 = INT8_MIN;
	int32_t t78 = -10928;

	t78 = (x393*((x394==x395)|x396));

	if (t78 != 4194304) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x397 = 30U;
	static int16_t x398 = -26;
	static int64_t x399 = INT64_MIN;
	uint64_t x400 = 221787250780LLU;
	static volatile uint64_t t79 = 31265582035LLU;

	t79 = (x397*((x398==x399)|x400));

	if (t79 != 6653617523400LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x401 = 1994LLU;
	static int64_t x402 = -1LL;
	static int8_t x404 = INT8_MIN;

	t80 = (x401*((x402==x403)|x404));

	if (t80 != 18446744073709296384LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x405 = INT32_MIN;
	int16_t x406 = -31;
	int32_t x407 = 53;
	volatile int8_t x408 = 0;
	static int32_t t81 = -6552781;

	t81 = (x405*((x406==x407)|x408));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x409 = INT64_MAX;
	int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MIN;
	int8_t x412 = -1;
	volatile int64_t t82 = -9LL;

	t82 = (x409*((x410==x411)|x412));

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x413 = -1;
	uint8_t x414 = 66U;
	int16_t x415 = 1;
	volatile int8_t x416 = INT8_MIN;
	int32_t t83 = -24;

	t83 = (x413*((x414==x415)|x416));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x417 = INT8_MAX;
	static volatile uint16_t x418 = 178U;
	int8_t x419 = INT8_MIN;
	int64_t x420 = -55834528791756157LL;
	static int64_t t84 = 406LL;

	t84 = (x417*((x418==x419)|x420));

	if (t84 != -7090985156553031939LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x433 = 1662U;
	int64_t x434 = INT64_MIN;
	int8_t x436 = -1;
	volatile int32_t t85 = -28104669;

	t85 = (x433*((x434==x435)|x436));

	if (t85 != -1662) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x437 = -1;
	int16_t x438 = -1;
	int8_t x439 = INT8_MAX;
	int64_t x440 = -1LL;
	int64_t t86 = -140642LL;

	t86 = (x437*((x438==x439)|x440));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x445 = 1;
	volatile int64_t x446 = INT64_MIN;
	uint8_t x447 = UINT8_MAX;
	int8_t x448 = 5;
	static volatile int32_t t87 = 0;

	t87 = (x445*((x446==x447)|x448));

	if (t87 != 5) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x449 = -1;
	uint8_t x450 = 7U;
	int32_t t88 = -798351;

	t88 = (x449*((x450==x451)|x452));

	if (t88 != -73) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x453 = UINT64_MAX;
	static int32_t x456 = -1;
	uint64_t t89 = 2406826665LLU;

	t89 = (x453*((x454==x455)|x456));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x458 = INT8_MAX;
	static uint8_t x460 = UINT8_MAX;
	static volatile uint32_t t90 = 22716U;

	t90 = (x457*((x458==x459)|x460));

	if (t90 != 4076714068U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x461 = INT8_MIN;
	volatile int16_t x463 = INT16_MIN;
	volatile int64_t t91 = -182181LL;

	t91 = (x461*((x462==x463)|x464));

	if (t91 != 960885261435399936LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x469 = UINT64_MAX;
	static int16_t x470 = 42;
	volatile int8_t x471 = 1;

	t92 = (x469*((x470==x471)|x472));

	if (t92 != 32768LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x485 = 0;
	volatile int16_t x486 = INT16_MIN;
	uint16_t x487 = UINT16_MAX;
	volatile int16_t x488 = -2666;
	int32_t t93 = -2141;

	t93 = (x485*((x486==x487)|x488));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x489 = 9U;
	static int64_t x490 = INT64_MAX;
	static int64_t x491 = INT64_MIN;
	uint32_t x492 = UINT32_MAX;
	uint32_t t94 = 2U;

	t94 = (x489*((x490==x491)|x492));

	if (t94 != 4294967287U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x498 = INT8_MIN;
	uint32_t x500 = 11579U;
	volatile uint32_t t95 = 55180U;

	t95 = (x497*((x498==x499)|x500));

	if (t95 != 5696868U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x509 = 56U;
	uint32_t x510 = UINT32_MAX;
	int8_t x511 = -1;

	t96 = (x509*((x510==x511)|x512));

	if (t96 != 280U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x513 = UINT64_MAX;
	int32_t x514 = 823047534;
	int32_t x515 = -6022776;

	t97 = (x513*((x514==x515)|x516));

	if (t97 != 128LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = INT32_MIN;
	static int32_t x518 = 13;
	static int16_t x519 = -919;

	t98 = (x517*((x518==x519)|x520));

	if (t98 != 2147483648U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x521 = -1;
	static int8_t x523 = INT8_MIN;
	uint32_t x524 = 472749U;
	uint32_t t99 = 47219U;

	t99 = (x521*((x522==x523)|x524));

	if (t99 != 4294494547U) { NG(); } else { ; }
	
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

