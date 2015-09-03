#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x12 = INT8_MAX;
int8_t x23 = INT8_MIN;
volatile int32_t x25 = -166698951;
int8_t x27 = INT8_MIN;
int32_t t4 = -46;
uint64_t x29 = 12806812LLU;
volatile int64_t x32 = INT64_MAX;
static uint64_t x41 = UINT64_MAX;
uint64_t x44 = UINT64_MAX;
volatile uint64_t t8 = 58116279330LLU;
static int32_t x53 = INT32_MAX;
uint8_t x55 = 2U;
static int8_t x62 = -1;
static uint16_t x63 = UINT16_MAX;
uint8_t x72 = UINT8_MAX;
static int32_t t13 = -9530;
volatile int16_t x98 = -1;
static int8_t x100 = INT8_MAX;
uint64_t x104 = UINT64_MAX;
uint64_t x116 = 303LLU;
int64_t x133 = INT64_MIN;
static int32_t x134 = INT32_MAX;
static int32_t x141 = -231088;
int16_t x165 = -1;
int64_t x166 = INT64_MAX;
int64_t t26 = 2298LL;
int8_t x189 = INT8_MIN;
static uint16_t x204 = 6790U;
int32_t x223 = INT32_MIN;
int16_t x229 = INT16_MAX;
static int32_t t34 = -31107865;
volatile int32_t t35 = 0;
int32_t x258 = INT32_MAX;
volatile uint8_t x259 = 0U;
volatile int8_t x269 = -15;
static uint64_t x280 = UINT64_MAX;
uint64_t t40 = 62199587520LLU;
volatile int16_t x294 = -26;
int16_t x305 = 1;
int32_t x307 = INT32_MAX;
volatile uint8_t x308 = UINT8_MAX;
volatile int32_t t43 = 119;
volatile uint64_t x309 = UINT64_MAX;
static int16_t x310 = INT16_MIN;
volatile uint16_t x319 = UINT16_MAX;
int8_t x325 = 2;
uint16_t x328 = 7U;
volatile int8_t x332 = INT8_MAX;
static uint32_t x334 = 494501763U;
int32_t t48 = -3900;
static uint16_t x343 = UINT16_MAX;
uint16_t x362 = 14370U;
static uint32_t x366 = UINT32_MAX;
int16_t x368 = INT16_MAX;
uint64_t x376 = UINT64_MAX;
int32_t t53 = -931;
volatile int64_t t55 = -126693774648600045LL;
uint8_t x388 = 3U;
int16_t x392 = INT16_MAX;
static int16_t x409 = -9867;
volatile int16_t x413 = INT16_MAX;
uint32_t x421 = 11667751U;
uint64_t x429 = UINT64_MAX;
int8_t x446 = INT8_MIN;
volatile uint16_t x448 = UINT16_MAX;
int32_t t65 = 6447681;
static uint16_t x449 = 2888U;
volatile int8_t x451 = INT8_MIN;
volatile int32_t t67 = 4762279;
uint8_t x478 = 1U;
int16_t x483 = -1;
static int16_t x485 = INT16_MAX;
uint16_t x494 = 51U;
volatile uint8_t x502 = UINT8_MAX;
static int64_t x504 = INT64_MAX;
uint64_t x505 = UINT64_MAX;
int32_t x510 = -193199;
int64_t x511 = -1LL;
static int32_t x519 = INT32_MIN;
int32_t t79 = 1;
volatile uint64_t x521 = 322939LLU;
uint32_t x522 = 241556U;
uint64_t x550 = 228LLU;
static int32_t t81 = -10879644;
uint16_t x559 = 3745U;
int8_t x563 = 28;
int32_t t83 = -1277;
volatile int32_t x570 = -186541;
uint32_t x602 = 86772U;
int32_t x616 = 453;
volatile int32_t t90 = -13;
static volatile int16_t x622 = 214;
int16_t x632 = 5138;
int64_t x634 = 6934625LL;
uint32_t x640 = UINT32_MAX;
volatile int32_t t94 = -204567555;
volatile int64_t x651 = -47LL;
static int64_t x674 = INT64_MIN;
volatile uint64_t t98 = 6497697LLU;
static int32_t t99 = 948336850;


void f0(void) {
	volatile uint8_t x5 = 25U;
	int16_t x6 = -5;
	int64_t x7 = INT64_MAX;
	static uint32_t x8 = UINT32_MAX;
	static int32_t t0 = -26938523;

	t0 = (x5%((x6==x7)<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int8_t x10 = 23;
	int16_t x11 = -2652;
	int32_t t1 = -31;

	t1 = (x9%((x10==x11)<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -1;
	static int64_t x14 = -1LL;
	volatile uint64_t x15 = 228819LLU;
	uint64_t x16 = UINT64_MAX;
	static int32_t t2 = -425502211;

	t2 = (x13%((x14==x15)<x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 13691;
	int16_t x22 = INT16_MAX;
	static uint8_t x24 = 3U;
	int32_t t3 = 1083;

	t3 = (x21%((x22==x23)<x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x26 = 1118U;
	static uint8_t x28 = 7U;

	t4 = (x25%((x26==x27)<x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x30 = INT8_MIN;
	static volatile uint8_t x31 = UINT8_MAX;
	uint64_t t5 = 1988039641573934903LLU;

	t5 = (x29%((x30==x31)<x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = -1;
	static uint8_t x34 = UINT8_MAX;
	static volatile int8_t x35 = INT8_MIN;
	volatile int16_t x36 = 237;
	static volatile int32_t t6 = 24523;

	t6 = (x33%((x34==x35)<x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 1762LLU;
	static uint32_t x38 = 5759U;
	volatile int16_t x39 = INT16_MAX;
	int32_t x40 = 245947;
	uint64_t t7 = 30989620LLU;

	t7 = (x37%((x38==x39)<x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = 48257464;
	int64_t x43 = 1LL;

	t8 = (x41%((x42==x43)<x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x54 = -9370893589LL;
	int64_t x56 = INT64_MAX;
	volatile int32_t t9 = -92680;

	t9 = (x53%((x54==x55)<x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = 8735;
	uint16_t x64 = UINT16_MAX;
	int32_t t10 = 434;

	t10 = (x61%((x62==x63)<x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = 7310;
	volatile uint16_t x70 = 30U;
	int64_t x71 = 22095402LL;
	int32_t t11 = 0;

	t11 = (x69%((x70==x71)<x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = 75U;
	static int16_t x74 = 0;
	int32_t x75 = -1;
	uint16_t x76 = 15494U;
	volatile int32_t t12 = 177610;

	t12 = (x73%((x74==x75)<x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = INT32_MAX;
	int32_t x78 = INT32_MAX;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 390436954230642LLU;

	t13 = (x77%((x78==x79)<x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MAX;
	volatile int8_t x83 = INT8_MAX;
	int32_t x84 = 1005;
	static int32_t t14 = 1;

	t14 = (x81%((x82==x83)<x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x97 = 7514U;
	static int16_t x99 = -8859;
	uint32_t t15 = 133133862U;

	t15 = (x97%((x98==x99)<x100));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x101 = 9U;
	uint64_t x102 = 2946LLU;
	uint64_t x103 = 100895683352669651LLU;
	volatile int32_t t16 = -21893;

	t16 = (x101%((x102==x103)<x104));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = INT32_MAX;
	static int32_t x110 = -1;
	volatile int32_t x111 = INT32_MIN;
	volatile int8_t x112 = 7;
	int32_t t17 = 6;

	t17 = (x109%((x110==x111)<x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x113 = 2516;
	static int8_t x114 = -1;
	volatile uint16_t x115 = 63U;
	int32_t t18 = 76;

	t18 = (x113%((x114==x115)<x116));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x117 = INT8_MIN;
	int16_t x118 = -1;
	static uint64_t x119 = 28143LLU;
	uint32_t x120 = 504185755U;
	static volatile int32_t t19 = 9547820;

	t19 = (x117%((x118==x119)<x120));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x125 = -1;
	uint32_t x126 = 0U;
	static int64_t x127 = -1LL;
	uint32_t x128 = UINT32_MAX;
	int32_t t20 = 248924;

	t20 = (x125%((x126==x127)<x128));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x129 = INT16_MAX;
	volatile uint64_t x130 = 696096298593619628LLU;
	static volatile int32_t x131 = -1;
	static int64_t x132 = 15LL;
	volatile int32_t t21 = -26888301;

	t21 = (x129%((x130==x131)<x132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x135 = INT64_MAX;
	int64_t x136 = 4121922LL;
	volatile int64_t t22 = -68LL;

	t22 = (x133%((x134==x135)<x136));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x142 = UINT32_MAX;
	uint64_t x143 = 60276933408661207LLU;
	uint16_t x144 = 120U;
	static volatile int32_t t23 = 120;

	t23 = (x141%((x142==x143)<x144));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x161 = 1548U;
	static volatile uint32_t x162 = UINT32_MAX;
	int64_t x163 = -1LL;
	volatile uint8_t x164 = 6U;
	volatile uint32_t t24 = 0U;

	t24 = (x161%((x162==x163)<x164));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = 1;
	int32_t t25 = -3;

	t25 = (x165%((x166==x167)<x168));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x181 = 736395343846LL;
	int16_t x182 = -1;
	uint32_t x183 = 5U;
	int16_t x184 = 1;

	t26 = (x181%((x182==x183)<x184));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	volatile uint32_t x187 = UINT32_MAX;
	volatile uint8_t x188 = UINT8_MAX;
	volatile int32_t t27 = -8193;

	t27 = (x185%((x186==x187)<x188));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x190 = 0;
	volatile uint32_t x191 = 6873U;
	static uint8_t x192 = 7U;
	volatile int32_t t28 = -246838492;

	t28 = (x189%((x190==x191)<x192));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x193 = INT16_MAX;
	int64_t x194 = -1LL;
	int32_t x195 = -237;
	volatile uint64_t x196 = 52132431410104LLU;
	static int32_t t29 = -625926305;

	t29 = (x193%((x194==x195)<x196));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x197 = INT64_MAX;
	volatile int8_t x198 = -1;
	uint64_t x199 = 916877661200773LLU;
	volatile uint64_t x200 = 985640768009LLU;
	int64_t t30 = -576241155869746094LL;

	t30 = (x197%((x198==x199)<x200));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x201 = 12560LLU;
	int16_t x202 = 1;
	int16_t x203 = INT16_MIN;
	volatile uint64_t t31 = 98540777632LLU;

	t31 = (x201%((x202==x203)<x204));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x221 = UINT8_MAX;
	uint8_t x222 = 0U;
	int64_t x224 = 212399260465466LL;
	volatile int32_t t32 = -92708443;

	t32 = (x221%((x222==x223)<x224));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x225 = 0;
	int8_t x226 = INT8_MIN;
	static int8_t x227 = -1;
	int64_t x228 = 2219LL;
	static int32_t t33 = -262834997;

	t33 = (x225%((x226==x227)<x228));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x230 = INT16_MIN;
	int32_t x231 = 234379;
	uint64_t x232 = 17670794809391140LLU;

	t34 = (x229%((x230==x231)<x232));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x249 = 0;
	static int64_t x250 = -23145023565403LL;
	int32_t x251 = INT32_MIN;
	static uint32_t x252 = 47U;

	t35 = (x249%((x250==x251)<x252));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x257 = 3660222895LL;
	volatile uint64_t x260 = 625377400251226LLU;
	int64_t t36 = -98093LL;

	t36 = (x257%((x258==x259)<x260));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x270 = 21303U;
	uint32_t x271 = 174377301U;
	volatile uint16_t x272 = 18513U;
	volatile int32_t t37 = 353231068;

	t37 = (x269%((x270==x271)<x272));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x273 = 35U;
	int16_t x274 = INT16_MIN;
	static volatile int16_t x275 = INT16_MIN;
	static volatile uint8_t x276 = 17U;
	int32_t t38 = 168900;

	t38 = (x273%((x274==x275)<x276));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x277 = UINT16_MAX;
	volatile int64_t x278 = INT64_MIN;
	int64_t x279 = 1LL;
	int32_t t39 = -12991333;

	t39 = (x277%((x278==x279)<x280));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x281 = UINT64_MAX;
	uint64_t x282 = UINT64_MAX;
	volatile int64_t x283 = 5940LL;
	static int64_t x284 = 212905LL;

	t40 = (x281%((x282==x283)<x284));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x289 = 109U;
	uint8_t x290 = 12U;
	int8_t x291 = 1;
	static volatile uint32_t x292 = UINT32_MAX;
	volatile int32_t t41 = 1015998;

	t41 = (x289%((x290==x291)<x292));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x293 = INT8_MIN;
	volatile int16_t x295 = -925;
	uint16_t x296 = 35U;
	int32_t t42 = 94;

	t42 = (x293%((x294==x295)<x296));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x306 = 29U;

	t43 = (x305%((x306==x307)<x308));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x311 = -1;
	uint32_t x312 = 22U;
	uint64_t t44 = 350991410440350238LLU;

	t44 = (x309%((x310==x311)<x312));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x317 = 46U;
	volatile int16_t x318 = -26;
	int64_t x320 = INT64_MAX;
	int32_t t45 = -10038;

	t45 = (x317%((x318==x319)<x320));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x326 = INT16_MAX;
	static uint64_t x327 = 19131701342825858LLU;
	int32_t t46 = 0;

	t46 = (x325%((x326==x327)<x328));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x329 = UINT16_MAX;
	static int32_t x330 = INT32_MIN;
	int64_t x331 = -1LL;
	volatile int32_t t47 = -7781956;

	t47 = (x329%((x330==x331)<x332));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x333 = -1;
	uint8_t x335 = 54U;
	int8_t x336 = INT8_MAX;

	t48 = (x333%((x334==x335)<x336));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x341 = 2;
	int32_t x342 = -28063;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t49 = 2;

	t49 = (x341%((x342==x343)<x344));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x357 = -1;
	volatile uint8_t x358 = UINT8_MAX;
	int16_t x359 = INT16_MAX;
	static int32_t x360 = 118701;
	volatile int32_t t50 = 28448;

	t50 = (x357%((x358==x359)<x360));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x361 = 186U;
	static volatile int16_t x363 = INT16_MAX;
	int16_t x364 = 2;
	static volatile int32_t t51 = 1;

	t51 = (x361%((x362==x363)<x364));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x365 = INT64_MAX;
	uint16_t x367 = 20666U;
	volatile int64_t t52 = -836LL;

	t52 = (x365%((x366==x367)<x368));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x373 = INT16_MAX;
	int64_t x374 = INT64_MIN;
	volatile uint32_t x375 = 145167113U;

	t53 = (x373%((x374==x375)<x376));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x377 = INT8_MIN;
	static volatile int32_t x378 = 25045;
	int8_t x379 = INT8_MAX;
	uint8_t x380 = 37U;
	volatile int32_t t54 = -19957923;

	t54 = (x377%((x378==x379)<x380));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x381 = INT64_MIN;
	static uint64_t x382 = 7674215LLU;
	int8_t x383 = 9;
	volatile uint16_t x384 = UINT16_MAX;

	t55 = (x381%((x382==x383)<x384));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x385 = INT8_MIN;
	static volatile int32_t x386 = INT32_MIN;
	int64_t x387 = 7673753LL;
	volatile int32_t t56 = -46726524;

	t56 = (x385%((x386==x387)<x388));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x389 = INT64_MAX;
	static int8_t x390 = -1;
	static int64_t x391 = INT64_MIN;
	int64_t t57 = 2472LL;

	t57 = (x389%((x390==x391)<x392));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x405 = -1;
	volatile int8_t x406 = -6;
	uint16_t x407 = UINT16_MAX;
	uint64_t x408 = 44128629121LLU;
	int32_t t58 = 57;

	t58 = (x405%((x406==x407)<x408));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x410 = 97016U;
	int8_t x411 = -14;
	static volatile int16_t x412 = 1;
	volatile int32_t t59 = -59057;

	t59 = (x409%((x410==x411)<x412));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x414 = 1402119194137LL;
	uint32_t x415 = UINT32_MAX;
	uint32_t x416 = 13895U;
	int32_t t60 = 397586;

	t60 = (x413%((x414==x415)<x416));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x417 = -15366;
	int16_t x418 = 3464;
	static int16_t x419 = INT16_MIN;
	volatile uint8_t x420 = 14U;
	volatile int32_t t61 = -10;

	t61 = (x417%((x418==x419)<x420));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x422 = INT16_MIN;
	int64_t x423 = INT64_MIN;
	volatile uint32_t x424 = 21U;
	volatile uint32_t t62 = 54359U;

	t62 = (x421%((x422==x423)<x424));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x430 = INT8_MIN;
	volatile int8_t x431 = INT8_MIN;
	uint16_t x432 = 255U;
	volatile uint64_t t63 = 275913589500LLU;

	t63 = (x429%((x430==x431)<x432));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x441 = INT64_MAX;
	int8_t x442 = -30;
	static int16_t x443 = 147;
	uint8_t x444 = 2U;
	volatile int64_t t64 = -1945830887746291LL;

	t64 = (x441%((x442==x443)<x444));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x445 = -62;
	volatile int64_t x447 = -2593905752670LL;

	t65 = (x445%((x446==x447)<x448));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x450 = 2737;
	uint8_t x452 = 22U;
	volatile int32_t t66 = 47362060;

	t66 = (x449%((x450==x451)<x452));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x457 = -61212;
	uint64_t x458 = 374198194671181LLU;
	static uint16_t x459 = 7U;
	uint64_t x460 = 5LLU;

	t67 = (x457%((x458==x459)<x460));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x461 = 402478400264379682LLU;
	volatile uint8_t x462 = UINT8_MAX;
	int8_t x463 = INT8_MAX;
	volatile uint32_t x464 = 201218254U;
	uint64_t t68 = 510382659086LLU;

	t68 = (x461%((x462==x463)<x464));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x469 = 2U;
	int8_t x470 = -1;
	int16_t x471 = -1227;
	int64_t x472 = 20285286621141275LL;
	volatile int32_t t69 = 2721;

	t69 = (x469%((x470==x471)<x472));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x473 = 1;
	int8_t x474 = INT8_MIN;
	uint16_t x475 = 41U;
	static volatile uint8_t x476 = 124U;
	volatile int32_t t70 = -34499;

	t70 = (x473%((x474==x475)<x476));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x477 = 10U;
	uint8_t x479 = 1U;
	static uint8_t x480 = UINT8_MAX;
	int32_t t71 = 18;

	t71 = (x477%((x478==x479)<x480));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x481 = 559997087U;
	int16_t x482 = -1;
	static int16_t x484 = INT16_MAX;
	volatile uint32_t t72 = 734856828U;

	t72 = (x481%((x482==x483)<x484));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x486 = UINT8_MAX;
	int32_t x487 = -1;
	static volatile uint32_t x488 = 13U;
	volatile int32_t t73 = -23;

	t73 = (x485%((x486==x487)<x488));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x493 = INT8_MIN;
	int8_t x495 = INT8_MIN;
	volatile uint16_t x496 = UINT16_MAX;
	int32_t t74 = -3689619;

	t74 = (x493%((x494==x495)<x496));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x501 = INT32_MIN;
	static int64_t x503 = INT64_MIN;
	int32_t t75 = 1;

	t75 = (x501%((x502==x503)<x504));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x506 = -3;
	uint16_t x507 = 90U;
	uint64_t x508 = UINT64_MAX;
	uint64_t t76 = 16LLU;

	t76 = (x505%((x506==x507)<x508));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x509 = UINT16_MAX;
	uint64_t x512 = 660833798006322310LLU;
	volatile int32_t t77 = -117705487;

	t77 = (x509%((x510==x511)<x512));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x513 = 464U;
	static uint32_t x514 = 401976U;
	int64_t x515 = INT64_MAX;
	int16_t x516 = 4;
	int32_t t78 = -896;

	t78 = (x513%((x514==x515)<x516));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x517 = INT8_MIN;
	static volatile uint8_t x518 = 11U;
	int32_t x520 = INT32_MAX;

	t79 = (x517%((x518==x519)<x520));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x523 = INT8_MAX;
	uint8_t x524 = UINT8_MAX;
	volatile uint64_t t80 = 1421871462544LLU;

	t80 = (x521%((x522==x523)<x524));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x549 = INT8_MIN;
	int8_t x551 = INT8_MAX;
	uint32_t x552 = UINT32_MAX;

	t81 = (x549%((x550==x551)<x552));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x557 = 9;
	volatile int16_t x558 = INT16_MIN;
	volatile int16_t x560 = INT16_MAX;
	volatile int32_t t82 = 377572501;

	t82 = (x557%((x558==x559)<x560));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x561 = UINT16_MAX;
	volatile int32_t x562 = 1;
	int32_t x564 = INT32_MAX;

	t83 = (x561%((x562==x563)<x564));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x569 = 71U;
	uint64_t x571 = 3768543LLU;
	uint8_t x572 = 53U;
	static volatile int32_t t84 = 417;

	t84 = (x569%((x570==x571)<x572));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x573 = UINT16_MAX;
	int16_t x574 = -14;
	int64_t x575 = 0LL;
	uint8_t x576 = 59U;
	volatile int32_t t85 = -1;

	t85 = (x573%((x574==x575)<x576));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x577 = -1;
	static int8_t x578 = -1;
	int32_t x579 = INT32_MIN;
	volatile uint64_t x580 = UINT64_MAX;
	int32_t t86 = 90106798;

	t86 = (x577%((x578==x579)<x580));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x593 = -1002;
	static uint8_t x594 = 1U;
	volatile uint8_t x595 = 1U;
	uint16_t x596 = 42U;
	static int32_t t87 = -337643;

	t87 = (x593%((x594==x595)<x596));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x597 = -1;
	uint64_t x598 = UINT64_MAX;
	int32_t x599 = -1;
	int8_t x600 = 3;
	int32_t t88 = -5472;

	t88 = (x597%((x598==x599)<x600));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x601 = 1;
	uint32_t x603 = 263818U;
	static int64_t x604 = 38174309LL;
	static volatile int32_t t89 = 10490175;

	t89 = (x601%((x602==x603)<x604));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x613 = 1;
	uint8_t x614 = 18U;
	int16_t x615 = 15878;

	t90 = (x613%((x614==x615)<x616));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x621 = INT64_MIN;
	volatile uint32_t x623 = 52U;
	volatile uint64_t x624 = 5334719287368LLU;
	int64_t t91 = -251506LL;

	t91 = (x621%((x622==x623)<x624));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x629 = INT8_MIN;
	int64_t x630 = -1LL;
	volatile int16_t x631 = INT16_MAX;
	volatile int32_t t92 = -4105;

	t92 = (x629%((x630==x631)<x632));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x633 = -1;
	uint64_t x635 = 7863819286289273409LLU;
	int8_t x636 = INT8_MAX;
	static int32_t t93 = 6766260;

	t93 = (x633%((x634==x635)<x636));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x637 = INT32_MIN;
	int16_t x638 = INT16_MIN;
	int32_t x639 = -20;

	t94 = (x637%((x638==x639)<x640));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x645 = UINT32_MAX;
	int8_t x646 = INT8_MAX;
	int8_t x647 = 1;
	uint16_t x648 = 1852U;
	static volatile uint32_t t95 = 40U;

	t95 = (x645%((x646==x647)<x648));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x649 = INT8_MAX;
	uint64_t x650 = 6426007080LLU;
	uint64_t x652 = UINT64_MAX;
	int32_t t96 = 287323;

	t96 = (x649%((x650==x651)<x652));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x665 = INT8_MIN;
	uint32_t x666 = UINT32_MAX;
	uint64_t x667 = UINT64_MAX;
	uint8_t x668 = UINT8_MAX;
	int32_t t97 = 372;

	t97 = (x665%((x666==x667)<x668));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x673 = UINT64_MAX;
	uint64_t x675 = 378441826LLU;
	int32_t x676 = INT32_MAX;

	t98 = (x673%((x674==x675)<x676));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x685 = -1;
	int8_t x686 = INT8_MAX;
	int8_t x687 = INT8_MIN;
	int32_t x688 = INT32_MAX;

	t99 = (x685%((x686==x687)<x688));

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

