#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = -376816998LL;
volatile uint32_t x13 = 16994U;
int8_t x16 = INT8_MAX;
int32_t t2 = 301573997;
uint8_t x17 = 16U;
static uint8_t x18 = 126U;
volatile int64_t t4 = 90715224LL;
uint32_t x28 = 8982U;
static int64_t x30 = -1LL;
int8_t x33 = 0;
int16_t x35 = -1;
uint16_t x36 = UINT16_MAX;
volatile int32_t t7 = -2104;
int32_t x41 = INT32_MIN;
int64_t x56 = 1865049111358780LL;
static volatile int32_t t12 = -107324775;
volatile uint32_t x70 = UINT32_MAX;
uint32_t x104 = 63U;
volatile int64_t x110 = -3481606LL;
volatile uint16_t x146 = UINT16_MAX;
uint64_t t23 = 53410LLU;
static int64_t x159 = -952813483195LL;
uint8_t x162 = 3U;
volatile int16_t x171 = INT16_MAX;
static uint16_t x177 = UINT16_MAX;
int32_t x182 = 6265;
int64_t x184 = -6865959055718LL;
int64_t x194 = 426LL;
int8_t x205 = 8;
static int16_t x213 = INT16_MIN;
uint8_t x217 = 33U;
int64_t x228 = 2367643378313LL;
int8_t x233 = 1;
static volatile uint64_t x238 = 9111692228LLU;
int64_t t40 = 57LL;
int8_t x244 = INT8_MIN;
int16_t x245 = -1;
int32_t x247 = -1;
int32_t t42 = -375416;
uint8_t x265 = UINT8_MAX;
volatile uint64_t x266 = 432204669434LLU;
volatile int32_t t44 = 71363773;
int16_t x286 = INT16_MIN;
int64_t x288 = INT64_MAX;
uint64_t x291 = 76236659LLU;
int8_t x305 = -17;
static uint16_t x308 = UINT16_MAX;
static int64_t x319 = INT64_MIN;
int32_t x323 = INT32_MIN;
volatile int32_t t54 = -16362591;
static uint16_t x332 = 313U;
int64_t x342 = -1LL;
int8_t x343 = -1;
int32_t x350 = INT32_MAX;
volatile int64_t x353 = -1LL;
static int64_t x356 = 3969540959775404LL;
int8_t x357 = INT8_MAX;
int8_t x358 = INT8_MAX;
int8_t x369 = INT8_MAX;
static uint64_t t63 = 7041LLU;
static int16_t x377 = -1;
int8_t x384 = INT8_MAX;
volatile int32_t t66 = -7;
volatile int32_t t68 = -753679;
uint8_t x397 = 2U;
static uint16_t x400 = 1U;
static int32_t t69 = -3;
int8_t x401 = INT8_MIN;
volatile int16_t x404 = -1;
int32_t t70 = -265760;
volatile uint8_t x410 = 28U;
static int64_t x415 = INT64_MIN;
static uint64_t x419 = 56289LLU;
uint32_t x422 = UINT32_MAX;
static int64_t x424 = -1LL;
int32_t x427 = INT32_MIN;
volatile uint64_t t77 = 12773909LLU;
int32_t x453 = INT32_MIN;
static volatile int64_t x455 = INT64_MIN;
uint32_t x463 = 142572U;
int8_t x464 = 25;
volatile int32_t t85 = -10;
volatile int64_t t86 = -2366202676LL;
int32_t x473 = -1;
static uint16_t x474 = 1017U;
int16_t x476 = INT16_MIN;
int32_t t89 = -1004266036;
int8_t x494 = INT8_MAX;
volatile uint16_t x495 = 2739U;
int16_t x498 = -1;
static int64_t x503 = INT64_MIN;
uint32_t x512 = UINT32_MAX;
volatile uint32_t t94 = 0U;
int32_t x519 = -1;
static int8_t x523 = INT8_MIN;
int8_t x524 = INT8_MAX;
volatile int32_t t96 = -25;
int16_t x525 = INT16_MIN;
int64_t x532 = -1LL;


void f0(void) {
	static int16_t x5 = INT16_MAX;
	static int16_t x6 = INT16_MIN;
	volatile int32_t x7 = INT32_MAX;
	uint64_t x8 = 51159730768LLU;
	volatile uint64_t t0 = 326162992743LLU;

	t0 = (((x5-x6)<x7)-x8);

	if (t0 != 18446744022549820849LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = -1;
	uint64_t x10 = 24706124370314848LLU;
	static int64_t x11 = INT64_MIN;
	volatile int64_t t1 = 27341LL;

	t1 = (((x9-x10)<x11)-x12);

	if (t1 != 376816998LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MIN;
	int8_t x15 = 0;

	t2 = (((x13-x14)<x15)-x16);

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x19 = UINT64_MAX;
	volatile int16_t x20 = -11439;
	static int32_t t3 = -424;

	t3 = (((x17-x18)<x19)-x20);

	if (t3 != 11440) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x21 = INT16_MIN;
	volatile uint16_t x22 = 0U;
	int16_t x23 = -2352;
	int64_t x24 = INT64_MAX;

	t4 = (((x21-x22)<x23)-x24);

	if (t4 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 1226441U;
	int32_t x26 = -1;
	static int8_t x27 = INT8_MIN;
	static volatile uint32_t t5 = 3917U;

	t5 = (((x25-x26)<x27)-x28);

	if (t5 != 4294958315U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	int8_t x31 = -1;
	int64_t x32 = 16728025955185LL;
	static int64_t t6 = -257039705LL;

	t6 = (((x29-x30)<x31)-x32);

	if (t6 != -16728025955185LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = -1;

	t7 = (((x33-x34)<x35)-x36);

	if (t7 != -65535) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x42 = INT64_MIN;
	static uint8_t x43 = 111U;
	uint8_t x44 = 2U;
	int32_t t8 = -46;

	t8 = (((x41-x42)<x43)-x44);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 3320988683254197LLU;
	int8_t x46 = INT8_MAX;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = 119934U;
	static uint32_t t9 = 29U;

	t9 = (((x45-x46)<x47)-x48);

	if (t9 != 4294847363U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 47U;
	static int16_t x50 = INT16_MIN;
	int16_t x51 = 1017;
	static int8_t x52 = INT8_MAX;
	volatile int32_t t10 = 1;

	t10 = (((x49-x50)<x51)-x52);

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = -5;
	int16_t x54 = -1;
	uint8_t x55 = 64U;
	static volatile int64_t t11 = -40LL;

	t11 = (((x53-x54)<x55)-x56);

	if (t11 != -1865049111358779LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MAX;
	uint32_t x66 = UINT32_MAX;
	volatile uint16_t x67 = 7555U;
	int16_t x68 = INT16_MIN;

	t12 = (((x65-x66)<x67)-x68);

	if (t12 != 32769) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MAX;
	int8_t x71 = 0;
	uint64_t x72 = 3043721949585LLU;
	volatile uint64_t t13 = 10508933897819LLU;

	t13 = (((x69-x70)<x71)-x72);

	if (t13 != 18446741029987602031LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x73 = 113538U;
	int8_t x74 = -1;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = UINT16_MAX;
	int32_t t14 = 12521709;

	t14 = (((x73-x74)<x75)-x76);

	if (t14 != -65535) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	volatile uint16_t x83 = 261U;
	static volatile int64_t x84 = -2855561473337LL;
	int64_t t15 = 989887209LL;

	t15 = (((x81-x82)<x83)-x84);

	if (t15 != 2855561473338LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x101 = 1323860210LL;
	uint8_t x102 = 14U;
	volatile uint64_t x103 = 56580LLU;
	volatile uint32_t t16 = 433U;

	t16 = (((x101-x102)<x103)-x104);

	if (t16 != 4294967233U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x105 = INT32_MIN;
	static int32_t x106 = INT32_MIN;
	volatile int64_t x107 = INT64_MIN;
	volatile int64_t x108 = -26837933LL;
	int64_t t17 = -23782231781699563LL;

	t17 = (((x105-x106)<x107)-x108);

	if (t17 != 26837933LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x109 = -13998;
	int16_t x111 = -28;
	uint64_t x112 = 5430581606273950LLU;
	uint64_t t18 = 58834458911524361LLU;

	t18 = (((x109-x110)<x111)-x112);

	if (t18 != 18441313492103277666LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x121 = INT16_MAX;
	int16_t x122 = INT16_MIN;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = INT16_MAX;
	int32_t t19 = -59288329;

	t19 = (((x121-x122)<x123)-x124);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x129 = -88766109231LL;
	int16_t x130 = INT16_MIN;
	int8_t x131 = 4;
	int32_t x132 = -1;
	volatile int32_t t20 = 164307;

	t20 = (((x129-x130)<x131)-x132);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x133 = 25U;
	volatile uint16_t x134 = 362U;
	uint32_t x135 = 12U;
	uint8_t x136 = 3U;
	int32_t t21 = -64;

	t21 = (((x133-x134)<x135)-x136);

	if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x141 = 45095637061631LLU;
	static int64_t x142 = 19917LL;
	volatile int32_t x143 = INT32_MIN;
	int16_t x144 = -1;
	volatile int32_t t22 = 3855;

	t22 = (((x141-x142)<x143)-x144);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x145 = -18865;
	int32_t x147 = INT32_MAX;
	volatile uint64_t x148 = UINT64_MAX;

	t23 = (((x145-x146)<x147)-x148);

	if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x149 = -1;
	int32_t x150 = INT32_MIN;
	int8_t x151 = 4;
	int64_t x152 = -1LL;
	static int64_t t24 = 43868192LL;

	t24 = (((x149-x150)<x151)-x152);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = INT16_MIN;
	uint8_t x154 = 15U;
	int64_t x155 = -55LL;
	volatile int32_t x156 = -1;
	volatile int32_t t25 = 70336957;

	t25 = (((x153-x154)<x155)-x156);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x157 = -1;
	static uint8_t x158 = UINT8_MAX;
	static volatile int16_t x160 = 0;
	int32_t t26 = 3;

	t26 = (((x157-x158)<x159)-x160);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x161 = -1LL;
	static int16_t x163 = -1;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t27 = 2787U;

	t27 = (((x161-x162)<x163)-x164);

	if (t27 != 2U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x169 = -1;
	static int64_t x170 = 6298LL;
	uint32_t x172 = 16325124U;
	volatile uint32_t t28 = 3075442U;

	t28 = (((x169-x170)<x171)-x172);

	if (t28 != 4278642173U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x173 = UINT32_MAX;
	int32_t x174 = INT32_MIN;
	volatile int32_t x175 = 2227473;
	static int64_t x176 = INT64_MAX;
	volatile int64_t t29 = 5056LL;

	t29 = (((x173-x174)<x175)-x176);

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x178 = 20237U;
	int64_t x179 = 74LL;
	int8_t x180 = INT8_MAX;
	int32_t t30 = 48;

	t30 = (((x177-x178)<x179)-x180);

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x181 = 8;
	int64_t x183 = 1LL;
	volatile int64_t t31 = 135036135152LL;

	t31 = (((x181-x182)<x183)-x184);

	if (t31 != 6865959055719LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x193 = INT32_MIN;
	static volatile int8_t x195 = INT8_MIN;
	static int8_t x196 = INT8_MIN;
	int32_t t32 = 874268;

	t32 = (((x193-x194)<x195)-x196);

	if (t32 != 129) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = -1;
	static uint16_t x203 = UINT16_MAX;
	static volatile int64_t x204 = INT64_MAX;
	int64_t t33 = -1122746141918546680LL;

	t33 = (((x201-x202)<x203)-x204);

	if (t33 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x206 = UINT16_MAX;
	int16_t x207 = 3884;
	uint8_t x208 = 127U;
	volatile int32_t t34 = 13583;

	t34 = (((x205-x206)<x207)-x208);

	if (t34 != -126) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x214 = INT32_MIN;
	volatile int16_t x215 = INT16_MIN;
	int16_t x216 = 274;
	int32_t t35 = 0;

	t35 = (((x213-x214)<x215)-x216);

	if (t35 != -274) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x218 = 49U;
	volatile int64_t x219 = -1LL;
	int16_t x220 = 5811;
	int32_t t36 = -29560;

	t36 = (((x217-x218)<x219)-x220);

	if (t36 != -5810) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x221 = 3;
	int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	static uint64_t x224 = 124383069LLU;
	volatile uint64_t t37 = 9711254098047561LLU;

	t37 = (((x221-x222)<x223)-x224);

	if (t37 != 18446744073585168547LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x225 = -1;
	volatile uint8_t x226 = UINT8_MAX;
	int64_t x227 = -1LL;
	volatile int64_t t38 = 112183825534615426LL;

	t38 = (((x225-x226)<x227)-x228);

	if (t38 != -2367643378312LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x234 = UINT64_MAX;
	int64_t x235 = INT64_MIN;
	int16_t x236 = 35;
	int32_t t39 = -43800259;

	t39 = (((x233-x234)<x235)-x236);

	if (t39 != -34) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x237 = -3310LL;
	static int8_t x239 = -7;
	static int64_t x240 = 1458LL;

	t40 = (((x237-x238)<x239)-x240);

	if (t40 != -1457LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x241 = UINT16_MAX;
	int16_t x242 = INT16_MIN;
	volatile int8_t x243 = -1;
	volatile int32_t t41 = -86;

	t41 = (((x241-x242)<x243)-x244);

	if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x246 = INT32_MIN;
	volatile int16_t x248 = -2129;

	t42 = (((x245-x246)<x247)-x248);

	if (t42 != 2129) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x249 = 143896007LLU;
	int64_t x250 = -1LL;
	static int64_t x251 = 34225601094317LL;
	int16_t x252 = INT16_MIN;
	int32_t t43 = 473;

	t43 = (((x249-x250)<x251)-x252);

	if (t43 != 32769) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x267 = 7785U;
	static int8_t x268 = -1;

	t44 = (((x265-x266)<x267)-x268);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x273 = 95;
	int8_t x274 = INT8_MIN;
	static volatile uint32_t x275 = 536849707U;
	int32_t x276 = -85296;
	volatile int32_t t45 = 8580;

	t45 = (((x273-x274)<x275)-x276);

	if (t45 != 85297) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x277 = INT32_MIN;
	volatile uint32_t x278 = 259180291U;
	int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MAX;
	volatile int32_t t46 = -212612;

	t46 = (((x277-x278)<x279)-x280);

	if (t46 != -32766) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = INT8_MIN;
	volatile int64_t x287 = 4535327LL;
	volatile int64_t t47 = 11LL;

	t47 = (((x285-x286)<x287)-x288);

	if (t47 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x289 = INT32_MIN;
	int32_t x290 = -1;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t48 = 166U;

	t48 = (((x289-x290)<x291)-x292);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x297 = 104395066972LLU;
	int16_t x298 = -26;
	int8_t x299 = -36;
	volatile int8_t x300 = INT8_MIN;
	static int32_t t49 = -54;

	t49 = (((x297-x298)<x299)-x300);

	if (t49 != 129) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x306 = 5770668U;
	int16_t x307 = -48;
	volatile int32_t t50 = 206581939;

	t50 = (((x305-x306)<x307)-x308);

	if (t50 != -65534) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x309 = 11446755U;
	volatile int8_t x310 = INT8_MIN;
	static uint8_t x311 = UINT8_MAX;
	uint8_t x312 = 77U;
	volatile int32_t t51 = -131081901;

	t51 = (((x309-x310)<x311)-x312);

	if (t51 != -77) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x318 = UINT16_MAX;
	int32_t x320 = -6;
	static volatile int32_t t52 = -6043788;

	t52 = (((x317-x318)<x319)-x320);

	if (t52 != 6) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x321 = INT16_MIN;
	volatile int32_t x322 = INT32_MIN;
	int32_t x324 = -1;
	volatile int32_t t53 = 0;

	t53 = (((x321-x322)<x323)-x324);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x325 = 7751597U;
	volatile uint16_t x326 = 12U;
	volatile int16_t x327 = INT16_MAX;
	uint16_t x328 = 18880U;

	t54 = (((x325-x326)<x327)-x328);

	if (t54 != -18880) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x329 = INT64_MAX;
	volatile uint16_t x330 = UINT16_MAX;
	int8_t x331 = -1;
	int32_t t55 = -89;

	t55 = (((x329-x330)<x331)-x332);

	if (t55 != -313) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x333 = 6101040U;
	static uint16_t x334 = 5989U;
	uint32_t x335 = 818860U;
	int16_t x336 = 41;
	int32_t t56 = -3;

	t56 = (((x333-x334)<x335)-x336);

	if (t56 != -41) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x341 = INT16_MIN;
	int8_t x344 = -1;
	volatile int32_t t57 = -85;

	t57 = (((x341-x342)<x343)-x344);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x349 = INT32_MAX;
	static uint16_t x351 = 405U;
	static uint64_t x352 = 1194371831611LLU;
	uint64_t t58 = 514165753604LLU;

	t58 = (((x349-x350)<x351)-x352);

	if (t58 != 18446742879337720006LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x354 = -1;
	static int32_t x355 = -1;
	int64_t t59 = -6207860425LL;

	t59 = (((x353-x354)<x355)-x356);

	if (t59 != -3969540959775404LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x359 = INT8_MIN;
	volatile int64_t x360 = -2596712612520029LL;
	volatile int64_t t60 = 4126870906234938LL;

	t60 = (((x357-x358)<x359)-x360);

	if (t60 != 2596712612520029LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x361 = UINT64_MAX;
	static int64_t x362 = INT64_MAX;
	static uint8_t x363 = 26U;
	int64_t x364 = -1LL;
	volatile int64_t t61 = 1188478319706LL;

	t61 = (((x361-x362)<x363)-x364);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x365 = INT32_MIN;
	volatile int8_t x366 = 0;
	uint16_t x367 = UINT16_MAX;
	volatile int16_t x368 = -1;
	int32_t t62 = 33352;

	t62 = (((x365-x366)<x367)-x368);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x370 = 43747929553212LLU;
	uint32_t x371 = UINT32_MAX;
	uint64_t x372 = UINT64_MAX;

	t63 = (((x369-x370)<x371)-x372);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x373 = UINT8_MAX;
	static volatile uint64_t x374 = UINT64_MAX;
	int16_t x375 = -1;
	int32_t x376 = -1;
	volatile int32_t t64 = 58324496;

	t64 = (((x373-x374)<x375)-x376);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x378 = -1LL;
	static int8_t x379 = INT8_MAX;
	volatile uint64_t x380 = UINT64_MAX;
	static uint64_t t65 = 684753835702434779LLU;

	t65 = (((x377-x378)<x379)-x380);

	if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x381 = INT32_MAX;
	static uint32_t x382 = UINT32_MAX;
	volatile int8_t x383 = INT8_MAX;

	t66 = (((x381-x382)<x383)-x384);

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x385 = 96U;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MAX;
	uint16_t x388 = UINT16_MAX;
	int32_t t67 = -294128;

	t67 = (((x385-x386)<x387)-x388);

	if (t67 != -65534) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x393 = 0;
	int16_t x394 = -1;
	uint16_t x395 = 216U;
	int8_t x396 = -1;

	t68 = (((x393-x394)<x395)-x396);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x398 = INT16_MAX;
	volatile int8_t x399 = -1;

	t69 = (((x397-x398)<x399)-x400);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x402 = UINT16_MAX;
	uint32_t x403 = UINT32_MAX;

	t70 = (((x401-x402)<x403)-x404);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x405 = INT64_MAX;
	static uint16_t x406 = UINT16_MAX;
	int64_t x407 = -1LL;
	static int16_t x408 = -1;
	volatile int32_t t71 = -367469056;

	t71 = (((x405-x406)<x407)-x408);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x409 = UINT16_MAX;
	int8_t x411 = -3;
	static int16_t x412 = -5;
	int32_t t72 = -10640;

	t72 = (((x409-x410)<x411)-x412);

	if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x413 = 29;
	int64_t x414 = -1LL;
	int64_t x416 = -1LL;
	static volatile int64_t t73 = 844LL;

	t73 = (((x413-x414)<x415)-x416);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x417 = -97;
	int64_t x418 = INT64_MIN;
	int8_t x420 = INT8_MAX;
	int32_t t74 = 0;

	t74 = (((x417-x418)<x419)-x420);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x421 = INT32_MAX;
	uint16_t x423 = 42U;
	int64_t t75 = 873030252LL;

	t75 = (((x421-x422)<x423)-x424);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x425 = 1447;
	int8_t x426 = INT8_MIN;
	uint8_t x428 = 4U;
	volatile int32_t t76 = -1439558;

	t76 = (((x425-x426)<x427)-x428);

	if (t76 != -4) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x429 = -1;
	volatile int32_t x430 = INT32_MAX;
	uint32_t x431 = 887921U;
	volatile uint64_t x432 = UINT64_MAX;

	t77 = (((x429-x430)<x431)-x432);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x433 = -1;
	int8_t x434 = 0;
	int16_t x435 = INT16_MIN;
	int32_t x436 = 7774477;
	int32_t t78 = 251188052;

	t78 = (((x433-x434)<x435)-x436);

	if (t78 != -7774477) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x437 = -1LL;
	static int8_t x438 = -1;
	static uint8_t x439 = 25U;
	volatile uint32_t x440 = 14U;
	uint32_t t79 = 177885171U;

	t79 = (((x437-x438)<x439)-x440);

	if (t79 != 4294967283U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x441 = UINT16_MAX;
	int16_t x442 = INT16_MIN;
	static volatile int8_t x443 = -1;
	int64_t x444 = INT64_MAX;
	int64_t t80 = 1LL;

	t80 = (((x441-x442)<x443)-x444);

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = INT64_MIN;
	static int32_t x446 = -1;
	static int64_t x447 = -1LL;
	int8_t x448 = 0;
	volatile int32_t t81 = -27302;

	t81 = (((x445-x446)<x447)-x448);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x449 = -1;
	int64_t x450 = INT64_MIN;
	volatile int16_t x451 = INT16_MIN;
	int8_t x452 = INT8_MIN;
	static int32_t t82 = -164025;

	t82 = (((x449-x450)<x451)-x452);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x454 = INT16_MIN;
	volatile uint8_t x456 = UINT8_MAX;
	static volatile int32_t t83 = -2;

	t83 = (((x453-x454)<x455)-x456);

	if (t83 != -255) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x457 = INT16_MAX;
	static int16_t x458 = INT16_MIN;
	int16_t x459 = INT16_MIN;
	static uint16_t x460 = UINT16_MAX;
	int32_t t84 = 1;

	t84 = (((x457-x458)<x459)-x460);

	if (t84 != -65535) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x461 = -965;
	static int32_t x462 = 699;

	t85 = (((x461-x462)<x463)-x464);

	if (t85 != -25) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x469 = 12360U;
	static int8_t x470 = INT8_MIN;
	volatile uint8_t x471 = UINT8_MAX;
	int64_t x472 = 753145418402123590LL;

	t86 = (((x469-x470)<x471)-x472);

	if (t86 != -753145418402123590LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x475 = 457U;
	volatile int32_t t87 = -1523070;

	t87 = (((x473-x474)<x475)-x476);

	if (t87 != 32769) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x477 = INT8_MIN;
	uint32_t x478 = UINT32_MAX;
	int64_t x479 = -418657LL;
	static int8_t x480 = INT8_MIN;
	int32_t t88 = 483;

	t88 = (((x477-x478)<x479)-x480);

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x481 = 2028270LLU;
	static volatile int16_t x482 = INT16_MIN;
	int32_t x483 = INT32_MAX;
	uint16_t x484 = UINT16_MAX;

	t89 = (((x481-x482)<x483)-x484);

	if (t89 != -65534) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x485 = UINT16_MAX;
	int8_t x486 = INT8_MAX;
	int8_t x487 = INT8_MIN;
	static uint16_t x488 = UINT16_MAX;
	int32_t t90 = 704;

	t90 = (((x485-x486)<x487)-x488);

	if (t90 != -65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x493 = 0U;
	int16_t x496 = -7;
	static int32_t t91 = -8028;

	t91 = (((x493-x494)<x495)-x496);

	if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x497 = INT32_MIN;
	static uint8_t x499 = 4U;
	static int64_t x500 = 392235805513410LL;
	static volatile int64_t t92 = 210232230410870LL;

	t92 = (((x497-x498)<x499)-x500);

	if (t92 != -392235805513409LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x501 = -1;
	uint64_t x502 = 2LLU;
	uint32_t x504 = UINT32_MAX;
	static uint32_t t93 = 261331U;

	t93 = (((x501-x502)<x503)-x504);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x509 = -13;
	static uint64_t x510 = 13133LLU;
	int64_t x511 = 1031563LL;

	t94 = (((x509-x510)<x511)-x512);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x517 = INT32_MAX;
	int16_t x518 = INT16_MAX;
	int64_t x520 = INT64_MAX;
	int64_t t95 = -340140528701LL;

	t95 = (((x517-x518)<x519)-x520);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x521 = 3U;
	static int16_t x522 = INT16_MAX;

	t96 = (((x521-x522)<x523)-x524);

	if (t96 != -126) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x526 = -1;
	static int64_t x527 = -1LL;
	int64_t x528 = 945973707621LL;
	int64_t t97 = -2LL;

	t97 = (((x525-x526)<x527)-x528);

	if (t97 != -945973707620LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x529 = UINT16_MAX;
	uint8_t x530 = 7U;
	int64_t x531 = -42LL;
	volatile int64_t t98 = 2891LL;

	t98 = (((x529-x530)<x531)-x532);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x533 = INT32_MIN;
	int32_t x534 = -27111;
	uint64_t x535 = 275944371192592LLU;
	int32_t x536 = INT32_MAX;
	volatile int32_t t99 = -2037293;

	t99 = (((x533-x534)<x535)-x536);

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

