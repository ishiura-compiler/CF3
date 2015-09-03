#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x18 = INT8_MAX;
int64_t t3 = -7LL;
volatile int32_t x32 = 249;
static int8_t x36 = INT8_MIN;
uint32_t t7 = 37037427U;
static int8_t x47 = INT8_MAX;
int64_t t9 = 860483LL;
static int8_t x51 = 0;
int32_t x52 = -33151;
uint16_t x53 = 1872U;
int16_t x55 = INT16_MAX;
static int64_t x64 = INT64_MIN;
static int16_t x65 = -1;
int8_t x69 = 1;
volatile int16_t x70 = 0;
static int64_t x72 = INT64_MIN;
volatile int64_t x79 = -1LL;
static int8_t x80 = INT8_MAX;
volatile int16_t x94 = INT16_MIN;
static int32_t t18 = -8669;
int16_t x106 = INT16_MIN;
int8_t x114 = -1;
volatile int16_t x115 = INT16_MIN;
int32_t t21 = -3400482;
int8_t x143 = INT8_MAX;
uint64_t t24 = 49153840LLU;
int32_t x158 = INT32_MIN;
volatile int64_t t27 = -234282313LL;
static uint32_t x172 = 985815U;
static uint64_t x176 = 17545463291044LLU;
static volatile uint64_t t30 = 13356810625LLU;
static uint8_t x183 = UINT8_MAX;
uint16_t x185 = 0U;
uint16_t x194 = UINT16_MAX;
static uint8_t x195 = UINT8_MAX;
int64_t x196 = -1LL;
int8_t x218 = -1;
int32_t x220 = INT32_MAX;
int8_t x221 = 13;
volatile int16_t x224 = INT16_MIN;
volatile int64_t x235 = -18302705373854187LL;
int32_t x237 = -257943;
int8_t x240 = -1;
uint8_t x246 = 95U;
int32_t x250 = -63708;
int16_t x262 = INT16_MIN;
int64_t t51 = 378531992189LL;
uint32_t t52 = 4593U;
uint16_t x290 = 7U;
volatile int16_t x296 = -1;
uint32_t t54 = 81641U;
static int16_t x298 = -1;
int32_t x300 = INT32_MIN;
int32_t t55 = -205;
int64_t t57 = -1LL;
static int32_t x341 = 2876;
uint32_t x343 = 0U;
int64_t x345 = 500820359606612LL;
volatile uint64_t x350 = 2LLU;
static uint64_t t60 = 1205691280002432LLU;
static uint64_t x383 = UINT64_MAX;
uint64_t t65 = 5377LLU;
uint64_t x390 = 15069264LLU;
static uint16_t x393 = 211U;
static uint16_t x396 = 42U;
static int8_t x406 = 11;
uint64_t x414 = 1435031821242566096LLU;
uint16_t x421 = 1U;
int64_t t72 = INT64_MAX;
uint8_t x440 = 28U;
int64_t t74 = 2LL;
static volatile int64_t x455 = INT64_MIN;
int32_t x459 = 1082887;
uint16_t x460 = 841U;
volatile int8_t x463 = -8;
uint32_t t78 = 100766U;
int16_t x476 = -1;
int32_t x478 = 131887;
int32_t x487 = -1;
uint16_t x492 = 0U;
int64_t x510 = -1216204126485701342LL;
int8_t x519 = -1;
static uint64_t t87 = 2LLU;
uint32_t x521 = 1380327U;
int8_t x530 = -10;
volatile int64_t x550 = -232911007LL;
uint64_t x552 = UINT64_MAX;
static uint64_t t92 = 190593195LLU;
static int8_t x563 = -1;
static volatile int8_t x564 = 7;
uint64_t t94 = 652946LLU;
int8_t x566 = 4;
int8_t x571 = INT8_MIN;
uint64_t x572 = 5019849912326LLU;
volatile int32_t t98 = -962467253;
int32_t x593 = 118937;
int64_t x595 = 269691559036437LL;


void f0(void) {
	volatile uint8_t x9 = 5U;
	int8_t x10 = 8;
	uint8_t x11 = 12U;
	int16_t x12 = 29;
	int32_t t0 = 1;

	t0 = (x9*(x10|(x11+x12)));

	if (t0 != 205) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	volatile int16_t x15 = INT16_MAX;
	int8_t x16 = 29;
	volatile int32_t t1 = 3153254;

	t1 = (x13*(x14|(x15+x16)));

	if (t1 != -33023) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = 0;
	uint32_t x19 = 29580928U;
	int8_t x20 = INT8_MIN;
	volatile uint32_t t2 = 73656U;

	t2 = (x17*(x18|(x19+x20)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 112U;
	int16_t x22 = -1;
	int64_t x23 = INT64_MAX;
	uint16_t x24 = 0U;

	t3 = (x21*(x22|(x23+x24)));

	if (t3 != -112LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = INT64_MIN;
	int64_t x26 = INT64_MIN;
	static uint64_t x27 = 339963345LLU;
	static uint32_t x28 = 336210105U;
	uint64_t t4 = 17288674853229919LLU;

	t4 = (x25*(x26|(x27+x28)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -69214LL;
	int32_t x30 = -261;
	static int16_t x31 = 1083;
	static volatile int64_t t5 = -3654219408979447351LL;

	t5 = (x29*(x30|(x31+x32)));

	if (t5 != 69214LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = INT64_MIN;
	int64_t x34 = 814LL;
	static uint64_t x35 = UINT64_MAX;
	uint64_t t6 = 31448807168LLU;

	t6 = (x33*(x34|(x35+x36)));

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x37 = -230;
	uint16_t x38 = 31918U;
	uint32_t x39 = UINT32_MAX;
	static int32_t x40 = INT32_MIN;

	t7 = (x37*(x38|(x39+x40)));

	if (t7 != 230U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	uint8_t x42 = UINT8_MAX;
	static int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MAX;
	static uint32_t t8 = 52753120U;

	t8 = (x41*(x42|(x43+x44)));

	if (t8 != 2147516417U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	int64_t x46 = -1LL;
	int32_t x48 = INT32_MIN;

	t9 = (x45*(x46|(x47+x48)));

	if (t9 != -32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 31561582U;
	uint64_t x50 = UINT64_MAX;
	static volatile uint64_t t10 = 92503749LLU;

	t10 = (x49*(x50|(x51+x52)));

	if (t10 != 18446744073677990034LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x54 = INT16_MIN;
	volatile int8_t x56 = -11;
	int32_t t11 = 633;

	t11 = (x53*(x54|(x55+x56)));

	if (t11 != -22464) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x61 = INT32_MAX;
	static volatile int32_t x62 = -1;
	uint16_t x63 = 1U;
	volatile int64_t t12 = -160LL;

	t12 = (x61*(x62|(x63+x64)));

	if (t12 != -2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x66 = -1;
	uint32_t x67 = 393815U;
	static volatile uint16_t x68 = UINT16_MAX;
	uint32_t t13 = 8U;

	t13 = (x65*(x66|(x67+x68)));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x71 = 1;
	static volatile int64_t t14 = -14LL;

	t14 = (x69*(x70|(x71+x72)));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x73 = INT8_MAX;
	volatile uint16_t x74 = UINT16_MAX;
	uint16_t x75 = 3U;
	uint64_t x76 = UINT64_MAX;
	static volatile uint64_t t15 = 33857607286747236LLU;

	t15 = (x73*(x74|(x75+x76)));

	if (t15 != 8322945LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	volatile uint32_t x78 = 332U;
	static volatile int64_t t16 = -10419LL;

	t16 = (x77*(x78|(x79+x80)));

	if (t16 != -382LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x93 = 399873LLU;
	uint64_t x95 = 56725796512394961LLU;
	uint16_t x96 = UINT16_MAX;
	static volatile uint64_t t17 = 3522683LLU;

	t17 = (x93*(x94|(x95+x96)));

	if (t17 != 18446744071950110416LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = 1881690;
	int16_t x98 = 40;
	int8_t x99 = INT8_MIN;
	static int8_t x100 = -7;

	t18 = (x97*(x98|(x99+x100)));

	if (t18 != -254028150) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = 0;
	volatile uint8_t x107 = 1U;
	int64_t x108 = -1LL;
	static volatile int64_t t19 = 12095213596191LL;

	t19 = (x105*(x106|(x107+x108)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x109 = 43;
	int8_t x110 = -1;
	uint8_t x111 = 57U;
	volatile uint16_t x112 = UINT16_MAX;
	int32_t t20 = 3583;

	t20 = (x109*(x110|(x111+x112)));

	if (t20 != -43) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x113 = 0U;
	static int32_t x116 = -1;

	t21 = (x113*(x114|(x115+x116)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 0U;
	int64_t x122 = -1474696LL;
	volatile int16_t x123 = INT16_MIN;
	int16_t x124 = -2;
	volatile int64_t t22 = -23142850995LL;

	t22 = (x121*(x122|(x123+x124)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	static int64_t x135 = INT64_MAX;
	static int64_t x136 = INT64_MIN;
	volatile int64_t t23 = -25900268008940445LL;

	t23 = (x133*(x134|(x135+x136)));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x141 = INT8_MIN;
	uint64_t x142 = UINT64_MAX;
	uint16_t x144 = 14U;

	t24 = (x141*(x142|(x143+x144)));

	if (t24 != 128LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = 2;
	static volatile int16_t x150 = 452;
	static int64_t x151 = INT64_MIN;
	uint64_t x152 = 8446LLU;
	volatile uint64_t t25 = 4095682227LLU;

	t25 = (x149*(x150|(x151+x152)));

	if (t25 != 17404LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MAX;
	int16_t x155 = -1;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t26 = 103499000LLU;

	t26 = (x153*(x154|(x155+x156)));

	if (t26 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x157 = -1LL;
	volatile int16_t x159 = 7;
	uint32_t x160 = 59330U;

	t27 = (x157*(x158|(x159+x160)));

	if (t27 != -2147542985LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	int8_t x164 = 7;
	uint64_t t28 = 29024982320654LLU;

	t28 = (x161*(x162|(x163+x164)));

	if (t28 != 32761LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = -13231;
	int32_t x170 = INT32_MIN;
	static uint16_t x171 = UINT16_MAX;
	static uint32_t t29 = 7U;

	t29 = (x169*(x170|(x171+x172)));

	if (t29 != 1121973686U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x173 = 1;
	int32_t x174 = INT32_MIN;
	int32_t x175 = 244794;

	t30 = (x173*(x174|(x175+x176)));

	if (t30 != 18446744072084199646LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x181 = -1LL;
	volatile uint16_t x182 = UINT16_MAX;
	uint32_t x184 = UINT32_MAX;
	static volatile int64_t t31 = -23794591488675372LL;

	t31 = (x181*(x182|(x183+x184)));

	if (t31 != -65535LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x186 = INT8_MIN;
	volatile int16_t x187 = -1;
	volatile int8_t x188 = INT8_MIN;
	volatile int32_t t32 = -30;

	t32 = (x185*(x186|(x187+x188)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x189 = UINT16_MAX;
	volatile uint64_t x190 = 407346LLU;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = UINT8_MAX;
	volatile uint64_t t33 = 2692713025544539LLU;

	t33 = (x189*(x190|(x191+x192)));

	if (t33 != 18446744072501544961LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x193 = 32385U;
	static int64_t t34 = -30253129148713LL;

	t34 = (x193*(x194|(x195+x196)));

	if (t34 != 2122350975LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	int8_t x200 = 0;
	uint64_t t35 = 3LLU;

	t35 = (x197*(x198|(x199+x200)));

	if (t35 != 32768LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x202 = UINT32_MAX;
	int32_t x203 = 318411283;
	static int8_t x204 = -1;
	volatile uint32_t t36 = 4433120U;

	t36 = (x201*(x202|(x203+x204)));

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x205 = 32319LL;
	static volatile int32_t x206 = 441;
	int32_t x207 = -1;
	static uint32_t x208 = 2U;
	int64_t t37 = 1044267026734LL;

	t37 = (x205*(x206|(x207+x208)));

	if (t37 != 14252679LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x209 = 28LLU;
	int16_t x210 = INT16_MIN;
	int32_t x211 = 2;
	volatile int64_t x212 = INT64_MIN;
	volatile uint64_t t38 = 10LLU;

	t38 = (x209*(x210|(x211+x212)));

	if (t38 != 18446744073708634168LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x213 = 2U;
	int16_t x214 = -599;
	uint16_t x215 = UINT16_MAX;
	int16_t x216 = 321;
	int32_t t39 = -480;

	t39 = (x213*(x214|(x215+x216)));

	if (t39 != -1070) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x217 = UINT32_MAX;
	static int16_t x219 = INT16_MIN;
	volatile uint32_t t40 = 4891U;

	t40 = (x217*(x218|(x219+x220)));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x222 = 15U;
	volatile uint8_t x223 = 17U;
	volatile int32_t t41 = 5143;

	t41 = (x221*(x222|(x223+x224)));

	if (t41 != -425581) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = -12;
	int64_t x230 = -1LL;
	static uint16_t x231 = 3U;
	int16_t x232 = INT16_MAX;
	int64_t t42 = -2LL;

	t42 = (x229*(x230|(x231+x232)));

	if (t42 != 12LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x233 = 1;
	static int16_t x234 = INT16_MIN;
	int32_t x236 = -61452;
	static int64_t t43 = -89806894044660026LL;

	t43 = (x233*(x234|(x235+x236)));

	if (t43 != -10743LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x238 = INT32_MAX;
	volatile uint32_t x239 = 26U;
	uint32_t t44 = 392010U;

	t44 = (x237*(x238|(x239+x240)));

	if (t44 != 2147741591U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = UINT32_MAX;
	static volatile uint32_t x243 = UINT32_MAX;
	static uint16_t x244 = 1U;
	uint32_t t45 = 85314844U;

	t45 = (x241*(x242|(x243+x244)));

	if (t45 != 32768U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x245 = 2430281958907802LLU;
	volatile int32_t x247 = INT32_MIN;
	uint16_t x248 = 0U;
	volatile uint64_t t46 = 115676310153992LLU;

	t46 = (x245*(x246|(x247+x248)));

	if (t46 != 17637659000833473062LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x249 = 4U;
	static int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MAX;
	volatile int64_t t47 = 1026600608LL;

	t47 = (x249*(x250|(x251+x252)));

	if (t47 != -4LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x253 = 1U;
	int64_t x254 = INT64_MAX;
	uint32_t x255 = UINT32_MAX;
	static int64_t x256 = INT64_MIN;
	volatile int64_t t48 = -80286963954539LL;

	t48 = (x253*(x254|(x255+x256)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x261 = 794519U;
	volatile uint8_t x263 = 23U;
	uint8_t x264 = 84U;
	volatile uint32_t t49 = 101901367U;

	t49 = (x261*(x262|(x263+x264)));

	if (t49 != 4114986013U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x273 = INT8_MAX;
	volatile int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	int64_t x276 = -379440067782902136LL;
	int64_t t50 = 876531615LL;

	t50 = (x273*(x274|(x275+x276)));

	if (t50 != -47752LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x277 = 325950LL;
	int32_t x278 = INT32_MIN;
	int32_t x279 = -1;
	int8_t x280 = 9;

	t51 = (x277*(x278|(x279+x280)));

	if (t51 != -699972292458000LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x281 = -1;
	uint8_t x282 = 61U;
	uint16_t x283 = UINT16_MAX;
	uint32_t x284 = 27454665U;

	t52 = (x281*(x282|(x283+x284)));

	if (t52 != 4267447043U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x289 = 967964U;
	uint16_t x291 = 150U;
	int8_t x292 = INT8_MAX;
	uint32_t t53 = 14628373U;

	t53 = (x289*(x290|(x291+x292)));

	if (t53 != 270061956U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x293 = -1;
	uint32_t x294 = 477U;
	int16_t x295 = INT16_MAX;

	t54 = (x293*(x294|(x295+x296)));

	if (t54 != 4294934529U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x297 = -1;
	uint8_t x299 = 29U;

	t55 = (x297*(x298|(x299+x300)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x305 = 81U;
	int32_t x306 = -1;
	static volatile int32_t x307 = 33;
	int64_t x308 = INT64_MIN;
	int64_t t56 = 27207509LL;

	t56 = (x305*(x306|(x307+x308)));

	if (t56 != -81LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x309 = -1LL;
	volatile int32_t x310 = 37;
	uint32_t x311 = 8983112U;
	int8_t x312 = -49;

	t57 = (x309*(x310|(x311+x312)));

	if (t57 != -8983095LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x342 = -1;
	static volatile uint32_t x344 = 184147U;
	static uint32_t t58 = 5233276U;

	t58 = (x341*(x342|(x343+x344)));

	if (t58 != 4294964420U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x346 = -1;
	int32_t x347 = -1;
	int16_t x348 = INT16_MIN;
	int64_t t59 = -117347679299277148LL;

	t59 = (x345*(x346|(x347+x348)));

	if (t59 != -500820359606612LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x349 = -157;
	int16_t x351 = INT16_MIN;
	int32_t x352 = 5;

	t60 = (x349*(x350|(x351+x352)));

	if (t60 != 5143477LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x353 = -1;
	int16_t x354 = -1;
	volatile uint32_t x355 = 760612348U;
	volatile int32_t x356 = INT32_MIN;
	volatile uint32_t t61 = 346860U;

	t61 = (x353*(x354|(x355+x356)));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x365 = -2471;
	int64_t x366 = INT64_MIN;
	int64_t x367 = -1LL;
	int16_t x368 = -1;
	volatile int64_t t62 = 0LL;

	t62 = (x365*(x366|(x367+x368)));

	if (t62 != 4942LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x373 = 1357;
	int16_t x374 = INT16_MAX;
	int32_t x375 = INT32_MAX;
	volatile int64_t x376 = -62336380618100LL;
	volatile int64_t t63 = -63929093025837717LL;

	t63 = (x373*(x374|(x375+x376)));

	if (t63 != -84587554339325261LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = 1;
	int32_t x380 = INT32_MIN;
	volatile int32_t t64 = 3508056;

	t64 = (x377*(x378|(x379+x380)));

	if (t64 != 2147418113) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x381 = UINT16_MAX;
	uint64_t x382 = 21333542LLU;
	int8_t x384 = -2;

	t65 = (x381*(x382|(x383+x384)));

	if (t65 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x385 = INT8_MIN;
	static int64_t x386 = -1LL;
	int16_t x387 = INT16_MIN;
	static uint64_t x388 = 24340718LLU;
	static volatile uint64_t t66 = 258279062065098579LLU;

	t66 = (x385*(x386|(x387+x388)));

	if (t66 != 128LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x389 = -1LL;
	uint8_t x391 = UINT8_MAX;
	volatile int64_t x392 = 368926LL;
	static uint64_t t67 = 3LLU;

	t67 = (x389*(x390|(x391+x392)));

	if (t67 != 18446744073694481827LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x394 = 1583685U;
	int64_t x395 = 1305440916183541LL;
	int64_t t68 = 1149148449574LL;

	t68 = (x393*(x394|(x395+x396)));

	if (t68 != 275448033427102797LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x405 = INT8_MIN;
	int8_t x407 = INT8_MAX;
	uint8_t x408 = 7U;
	int32_t t69 = -321012962;

	t69 = (x405*(x406|(x407+x408)));

	if (t69 != -18304) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x409 = 45;
	volatile uint16_t x410 = 1U;
	int16_t x411 = -35;
	volatile uint64_t x412 = 1855898549167856253LLU;
	uint64_t t70 = 3955634560LLU;

	t70 = (x409*(x410|(x411+x412)));

	if (t70 != 9728458417715323391LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x413 = INT8_MIN;
	static uint8_t x415 = 31U;
	int16_t x416 = -5;
	static uint64_t t71 = 2445222747241LLU;

	t71 = (x413*(x414|(x415+x416)));

	if (t71 != 783367618047054592LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x422 = UINT8_MAX;
	int16_t x423 = 0;
	static int64_t x424 = INT64_MAX;

	t72 = (x421*(x422|(x423+x424)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x429 = -2029807804LL;
	int32_t x430 = -1;
	uint64_t x431 = 167882767292481058LLU;
	volatile uint16_t x432 = UINT16_MAX;
	uint64_t t73 = 24843127290262LLU;

	t73 = (x429*(x430|(x431+x432)));

	if (t73 != 2029807804LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x437 = 0LL;
	int32_t x438 = -405;
	int64_t x439 = -19278719135LL;

	t74 = (x437*(x438|(x439+x440)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x445 = 1;
	static uint32_t x446 = 5549U;
	volatile uint16_t x447 = 7U;
	volatile int32_t x448 = -1;
	uint32_t t75 = 48468398U;

	t75 = (x445*(x446|(x447+x448)));

	if (t75 != 5551U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x453 = -1LL;
	volatile int16_t x454 = 3353;
	volatile int8_t x456 = INT8_MAX;
	int64_t t76 = 6424702LL;

	t76 = (x453*(x454|(x455+x456)));

	if (t76 != 9223372036854772353LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x457 = 121328627LLU;
	int16_t x458 = 2791;
	uint64_t t77 = 3067LLU;

	t77 = (x457*(x458|(x459+x460)));

	if (t77 != 131569612419189LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x461 = -1;
	static uint32_t x462 = 5U;
	static int16_t x464 = -1;

	t78 = (x461*(x462|(x463+x464)));

	if (t78 != 9U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x465 = 685348308U;
	uint32_t x466 = 6667U;
	static uint64_t x467 = UINT64_MAX;
	uint32_t x468 = 48195U;
	uint64_t t79 = 15383597LLU;

	t79 = (x465*(x466|(x467+x468)));

	if (t79 != 33386742824220LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x473 = INT8_MAX;
	int16_t x474 = INT16_MAX;
	uint8_t x475 = UINT8_MAX;
	static volatile int32_t t80 = -5611688;

	t80 = (x473*(x474|(x475+x476)));

	if (t80 != 4161409) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x477 = INT8_MAX;
	static uint64_t x479 = UINT64_MAX;
	static int16_t x480 = -9849;
	static uint64_t t81 = 1464123LLU;

	t81 = (x477*(x478|(x479+x480)));

	if (t81 != 18446744073708370897LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x485 = UINT16_MAX;
	static uint8_t x486 = 0U;
	int16_t x488 = -1;
	static volatile int32_t t82 = 1;

	t82 = (x485*(x486|(x487+x488)));

	if (t82 != -131070) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x489 = -1;
	static volatile int16_t x490 = -1;
	uint32_t x491 = 52312U;
	volatile uint32_t t83 = 1286U;

	t83 = (x489*(x490|(x491+x492)));

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x501 = 166473764LL;
	volatile int32_t x502 = INT32_MAX;
	uint16_t x503 = UINT16_MAX;
	static int16_t x504 = INT16_MAX;
	volatile int64_t t84 = -4657925LL;

	t84 = (x501*(x502|(x503+x504)));

	if (t84 != 357499685844537308LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x509 = -1423;
	static int64_t x511 = INT64_MAX;
	uint64_t x512 = 10064907814460LLU;
	volatile uint64_t t85 = 1LLU;

	t85 = (x509*(x510|(x511+x512)));

	if (t85 != 15109482370803967755LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x513 = INT8_MIN;
	int8_t x514 = -1;
	volatile int32_t x515 = INT32_MIN;
	volatile uint64_t x516 = 88163844928LLU;
	uint64_t t86 = 213525109615866LLU;

	t86 = (x513*(x514|(x515+x516)));

	if (t86 != 128LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x517 = 104784LLU;
	static uint64_t x518 = 2973650987992069152LLU;
	uint64_t x520 = 29312426583LLU;

	t87 = (x517*(x518|(x519+x520)));

	if (t87 != 7093821425475881696LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x522 = 3;
	uint32_t x523 = 9U;
	int32_t x524 = INT32_MIN;
	uint32_t t88 = 203323037U;

	t88 = (x521*(x522|(x523+x524)));

	if (t88 != 2162667245U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x529 = -44;
	int16_t x531 = INT16_MAX;
	int64_t x532 = -4908LL;
	static int64_t t89 = 1LL;

	t89 = (x529*(x530|(x531+x532)));

	if (t89 != 396LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x537 = -13989058LL;
	volatile uint8_t x538 = 59U;
	uint16_t x539 = 0U;
	int64_t x540 = 32128553LL;
	int64_t t90 = -156994837711810LL;

	t90 = (x537*(x538|(x539+x540)));

	if (t90 != -449448443176118LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x541 = 4LLU;
	int16_t x542 = -1;
	int64_t x543 = INT64_MIN;
	int8_t x544 = 0;
	volatile uint64_t t91 = 2071335787868LLU;

	t91 = (x541*(x542|(x543+x544)));

	if (t91 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x549 = UINT8_MAX;
	int64_t x551 = INT64_MAX;

	t92 = (x549*(x550|(x551+x552)));

	if (t92 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x553 = INT8_MIN;
	uint8_t x554 = UINT8_MAX;
	volatile int8_t x555 = INT8_MIN;
	int8_t x556 = INT8_MIN;
	int32_t t93 = -1;

	t93 = (x553*(x554|(x555+x556)));

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x561 = UINT64_MAX;
	uint8_t x562 = 2U;

	t94 = (x561*(x562|(x563+x564)));

	if (t94 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x565 = INT16_MAX;
	int64_t x567 = 1099349361LL;
	int32_t x568 = INT32_MAX;
	int64_t t95 = 1063014054LL;

	t95 = (x565*(x566|(x567+x568)));

	if (t95 != 106388977304204LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x569 = 3495282569400234LL;
	static int8_t x570 = 2;
	volatile uint64_t t96 = 2529415247885LLU;

	t96 = (x569*(x570|(x571+x572)));

	if (t96 != 3135040113043925244LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x573 = INT16_MIN;
	int8_t x574 = 1;
	int32_t x575 = -1871;
	static int64_t x576 = -4277930856381LL;
	int64_t t97 = -33460795062LL;

	t97 = (x573*(x574|(x575+x576)));

	if (t97 != 140179238363168768LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x577 = INT8_MIN;
	static int16_t x578 = -848;
	volatile int32_t x579 = -1;
	int8_t x580 = INT8_MIN;

	t98 = (x577*(x578|(x579+x580)));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x594 = -1;
	static uint8_t x596 = UINT8_MAX;
	static volatile int64_t t99 = 620893770461LL;

	t99 = (x593*(x594|(x595+x596)));

	if (t99 != -118937LL) { NG(); } else { ; }
	
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

