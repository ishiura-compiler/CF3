#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 0U;
int64_t x4 = -1LL;
volatile uint32_t t2 = 146838U;
static uint8_t x18 = 3U;
int64_t x19 = 1368396245064998LL;
static volatile uint64_t x23 = UINT64_MAX;
static uint64_t t4 = 12358404LLU;
uint64_t t5 = 26LLU;
uint32_t x45 = UINT32_MAX;
static volatile int8_t x47 = INT8_MAX;
static volatile int8_t x48 = 6;
volatile uint64_t x49 = 110LLU;
volatile int8_t x51 = -1;
int64_t x75 = 3010095519185LL;
static uint16_t x78 = UINT16_MAX;
uint32_t x96 = 7337U;
volatile uint64_t x102 = 6LLU;
int64_t t20 = -115119LL;
volatile int16_t x126 = -1;
static volatile uint32_t x141 = 27508078U;
uint8_t x149 = UINT8_MAX;
int16_t x152 = 2;
volatile int8_t x163 = INT8_MAX;
volatile int32_t x172 = -1;
static volatile int32_t x173 = -1;
uint16_t x182 = UINT16_MAX;
int8_t x197 = -9;
volatile int32_t t36 = -3506270;
volatile uint16_t x222 = 1U;
static volatile uint64_t t39 = 4996179620LLU;
int64_t x227 = 1062991079LL;
int32_t x230 = INT32_MAX;
volatile int32_t x232 = 1;
volatile int32_t x239 = INT32_MIN;
volatile int32_t t43 = 59245981;
uint32_t x249 = UINT32_MAX;
uint64_t x255 = UINT64_MAX;
int32_t t46 = 228370;
int16_t x259 = INT16_MIN;
int64_t x263 = INT64_MIN;
volatile uint32_t t48 = 3052861U;
uint32_t x281 = 11246184U;
int32_t t50 = 14754769;
static uint16_t x296 = UINT16_MAX;
int32_t t54 = -12602;
int8_t x327 = INT8_MAX;
uint32_t x328 = 67U;
int64_t t56 = 56948LL;
volatile int8_t x330 = INT8_MIN;
int32_t t58 = 10;
uint16_t x343 = 2494U;
static int32_t t61 = 687033;
static int32_t x354 = INT32_MIN;
int64_t x367 = INT64_MAX;
static int16_t x369 = INT16_MIN;
volatile int32_t t66 = 76;
uint32_t x379 = UINT32_MAX;
volatile int64_t t68 = 3694399826189281LL;
int32_t t69 = -735;
uint64_t x389 = 313808306LLU;
static volatile uint64_t t71 = 0LLU;
int8_t x408 = INT8_MAX;
volatile int16_t x414 = INT16_MIN;
volatile int32_t t74 = -1844;
uint8_t x418 = 14U;
uint64_t x422 = UINT64_MAX;
volatile int32_t t79 = -601;
uint32_t x437 = 1271471U;
int32_t x439 = INT32_MAX;
int64_t x440 = -1LL;
uint64_t x448 = 2780LLU;
uint64_t x449 = UINT64_MAX;
int32_t x454 = 30;
int32_t t83 = 2862012;
static uint64_t t85 = 1138418090196LLU;
int64_t x466 = INT64_MAX;
int8_t x468 = 41;
volatile int32_t x471 = 106;
volatile int64_t t87 = 4487463397022231LL;
int32_t x474 = -1;
uint16_t x480 = 64U;
uint64_t x486 = 298253LLU;
int32_t x488 = -1;
int32_t t91 = 10;
int64_t x489 = -1LL;
int8_t x493 = INT8_MAX;
int16_t x495 = INT16_MAX;
int8_t x505 = -1;
int8_t x522 = INT8_MIN;
int64_t x523 = -1LL;
volatile int8_t x524 = INT8_MAX;
int8_t x538 = INT8_MIN;
int32_t x540 = -66;
volatile uint32_t t99 = 1215989939U;


void f0(void) {
	static int64_t x1 = 4482059260LL;
	int32_t x3 = -3412304;
	int64_t t0 = -1LL;

	t0 = ((x1+(x2==x3))*x4);

	if (t0 != -4482059260LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = 3434572010754154483LLU;
	uint16_t x10 = UINT16_MAX;
	uint64_t x11 = 22962332272624263LLU;
	volatile int64_t x12 = -1LL;
	volatile uint64_t t1 = 8LLU;

	t1 = ((x9+(x10==x11))*x12);

	if (t1 != 15012172062955397133LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = UINT32_MAX;
	static uint64_t x14 = UINT64_MAX;
	uint32_t x15 = 492046U;
	volatile int16_t x16 = -50;

	t2 = ((x13+(x14==x15))*x16);

	if (t2 != 50U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -41;
	volatile int8_t x20 = 2;
	static int32_t t3 = 48047411;

	t3 = ((x17+(x18==x19))*x20);

	if (t3 != -82) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int8_t x22 = -1;
	uint64_t x24 = UINT64_MAX;

	t4 = ((x21+(x22==x23))*x24);

	if (t4 != 2147483647LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 69186001804167LLU;
	uint16_t x26 = 801U;
	volatile uint32_t x27 = 83562676U;
	int16_t x28 = 291;

	t5 = ((x25+(x26==x27))*x28);

	if (t5 != 20133126525012597LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = 3510U;
	uint8_t x38 = UINT8_MAX;
	int16_t x39 = -1;
	static int8_t x40 = -1;
	volatile int32_t t6 = -4133001;

	t6 = ((x37+(x38==x39))*x40);

	if (t6 != -3510) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 1U;
	volatile int32_t x42 = -1;
	int32_t x43 = -1;
	volatile int8_t x44 = INT8_MIN;
	int32_t t7 = 1;

	t7 = ((x41+(x42==x43))*x44);

	if (t7 != -256) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x46 = 1;
	uint32_t t8 = 3611005U;

	t8 = ((x45+(x46==x47))*x48);

	if (t8 != 4294967290U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x50 = INT8_MAX;
	uint8_t x52 = UINT8_MAX;
	volatile uint64_t t9 = 204773987625LLU;

	t9 = ((x49+(x50==x51))*x52);

	if (t9 != 28050LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 6U;
	volatile int8_t x54 = -27;
	uint32_t x55 = 2U;
	static int32_t x56 = -5;
	volatile int32_t t10 = 41245442;

	t10 = ((x53+(x54==x55))*x56);

	if (t10 != -30) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x57 = 22U;
	volatile int64_t x58 = -1LL;
	int16_t x59 = 10;
	static int8_t x60 = -1;
	int32_t t11 = -48;

	t11 = ((x57+(x58==x59))*x60);

	if (t11 != -22) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	int16_t x63 = 0;
	static int8_t x64 = INT8_MAX;
	int32_t t12 = -2282647;

	t12 = ((x61+(x62==x63))*x64);

	if (t12 != -4161536) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = UINT64_MAX;
	static uint64_t t13 = 440892181652675713LLU;

	t13 = ((x69+(x70==x71))*x72);

	if (t13 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x73 = 0U;
	int8_t x74 = INT8_MAX;
	int64_t x76 = -1228272101567LL;
	volatile int64_t t14 = 168691804701755473LL;

	t14 = ((x73+(x74==x75))*x76);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x77 = 2U;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -108;
	volatile int32_t t15 = 101;

	t15 = ((x77+(x78==x79))*x80);

	if (t15 != -216) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x93 = 0U;
	static int8_t x94 = -1;
	int32_t x95 = INT32_MIN;
	uint32_t t16 = 1043919431U;

	t16 = ((x93+(x94==x95))*x96);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x97 = 4;
	uint8_t x98 = UINT8_MAX;
	uint64_t x99 = 687744246166729LLU;
	uint8_t x100 = 17U;
	int32_t t17 = 5;

	t17 = ((x97+(x98==x99))*x100);

	if (t17 != 68) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = 1LLU;
	static volatile int64_t x103 = 191212311826707708LL;
	uint8_t x104 = 16U;
	volatile uint64_t t18 = 1435488471442LLU;

	t18 = ((x101+(x102==x103))*x104);

	if (t18 != 16LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = UINT64_MAX;
	volatile int64_t x106 = -1LL;
	int8_t x107 = INT8_MIN;
	int16_t x108 = -1;
	static volatile uint64_t t19 = 11513679334469LLU;

	t19 = ((x105+(x106==x107))*x108);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = INT16_MIN;
	int8_t x110 = -1;
	volatile int32_t x111 = 82530533;
	int64_t x112 = 89053LL;

	t20 = ((x109+(x110==x111))*x112);

	if (t20 != -2918088704LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = -1;
	uint64_t x122 = 298392858693LLU;
	static int32_t x123 = INT32_MAX;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int32_t t21 = -919006066;

	t21 = ((x121+(x122==x123))*x124);

	if (t21 != -65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = 30103U;
	uint16_t x127 = 11U;
	int16_t x128 = INT16_MIN;
	int32_t t22 = -907;

	t22 = ((x125+(x126==x127))*x128);

	if (t22 != -986415104) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x142 = 401336155;
	int16_t x143 = INT16_MIN;
	static int16_t x144 = 0;
	uint32_t t23 = 30U;

	t23 = ((x141+(x142==x143))*x144);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x145 = INT32_MIN;
	static int8_t x146 = INT8_MAX;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = UINT64_MAX;
	static uint64_t t24 = 1101822854756LLU;

	t24 = ((x145+(x146==x147))*x148);

	if (t24 != 2147483648LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x150 = -1LL;
	static volatile int16_t x151 = INT16_MIN;
	int32_t t25 = 32590;

	t25 = ((x149+(x150==x151))*x152);

	if (t25 != 510) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x154 = 62U;
	int16_t x155 = INT16_MIN;
	static uint64_t x156 = UINT64_MAX;
	volatile uint64_t t26 = 3LLU;

	t26 = ((x153+(x154==x155))*x156);

	if (t26 != 128LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = INT16_MIN;
	int16_t x158 = INT16_MIN;
	static volatile int64_t x159 = 3727766488544639LL;
	int64_t x160 = -1LL;
	int64_t t27 = -899447LL;

	t27 = ((x157+(x158==x159))*x160);

	if (t27 != 32768LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x161 = -1;
	int8_t x162 = INT8_MIN;
	volatile int8_t x164 = INT8_MAX;
	static int32_t t28 = 1;

	t28 = ((x161+(x162==x163))*x164);

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = -1LL;
	static int8_t x170 = INT8_MAX;
	volatile int16_t x171 = -1;
	static volatile int64_t t29 = -29011LL;

	t29 = ((x169+(x170==x171))*x172);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x174 = 24940056U;
	uint64_t x175 = 261LLU;
	static volatile int64_t x176 = INT64_MAX;
	int64_t t30 = -10320594568LL;

	t30 = ((x173+(x174==x175))*x176);

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x181 = -10;
	int16_t x183 = -301;
	static int16_t x184 = INT16_MIN;
	volatile int32_t t31 = -13;

	t31 = ((x181+(x182==x183))*x184);

	if (t31 != 327680) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x185 = 1U;
	uint8_t x186 = 8U;
	volatile uint32_t x187 = UINT32_MAX;
	uint32_t x188 = UINT32_MAX;
	uint32_t t32 = UINT32_MAX;

	t32 = ((x185+(x186==x187))*x188);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = UINT8_MAX;
	int8_t x191 = -10;
	int64_t x192 = -1LL;
	static int64_t t33 = 304106LL;

	t33 = ((x189+(x190==x191))*x192);

	if (t33 != 128LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x198 = INT8_MIN;
	int32_t x199 = 1989051;
	static volatile int16_t x200 = -49;
	static volatile int32_t t34 = 0;

	t34 = ((x197+(x198==x199))*x200);

	if (t34 != 441) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x201 = 7LL;
	static int32_t x202 = INT32_MAX;
	int32_t x203 = 921446880;
	volatile int32_t x204 = 208;
	int64_t t35 = -53249334988LL;

	t35 = ((x201+(x202==x203))*x204);

	if (t35 != 1456LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x205 = 2U;
	uint8_t x206 = 9U;
	static int32_t x207 = -22;
	int16_t x208 = -338;

	t36 = ((x205+(x206==x207))*x208);

	if (t36 != -676) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x209 = -1;
	volatile uint8_t x210 = 12U;
	int8_t x211 = 2;
	uint16_t x212 = 81U;
	volatile int32_t t37 = 7151;

	t37 = ((x209+(x210==x211))*x212);

	if (t37 != -81) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x217 = -66630;
	int8_t x218 = -1;
	int16_t x219 = INT16_MAX;
	int32_t x220 = -1;
	int32_t t38 = 1855517;

	t38 = ((x217+(x218==x219))*x220);

	if (t38 != 66630) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x221 = 59184238LLU;
	int8_t x223 = INT8_MIN;
	static int16_t x224 = INT16_MIN;

	t39 = ((x221+(x222==x223))*x224);

	if (t39 != 18446742134360440832LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x225 = UINT16_MAX;
	uint64_t x226 = UINT64_MAX;
	volatile int8_t x228 = 3;
	int32_t t40 = 201;

	t40 = ((x225+(x226==x227))*x228);

	if (t40 != 196605) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x229 = UINT64_MAX;
	uint64_t x231 = 193705593367LLU;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = ((x229+(x230==x231))*x232);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x233 = 27419768117250LLU;
	int16_t x234 = 3;
	int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MAX;
	volatile uint64_t t42 = 107586LLU;

	t42 = ((x233+(x234==x235))*x236);

	if (t42 != 18446716653941434366LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x237 = 19U;
	uint8_t x238 = UINT8_MAX;
	int8_t x240 = INT8_MIN;

	t43 = ((x237+(x238==x239))*x240);

	if (t43 != -2432) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = INT16_MIN;
	int32_t x248 = -122;
	volatile int32_t t44 = -95895;

	t44 = ((x245+(x246==x247))*x248);

	if (t44 != 15616) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x250 = INT32_MIN;
	int8_t x251 = -1;
	uint64_t x252 = 11749395201976253LLU;
	volatile uint64_t t45 = 6254973739LLU;

	t45 = ((x249+(x250==x251))*x252);

	if (t45 != 4552340676119435331LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x253 = UINT8_MAX;
	uint16_t x254 = 3102U;
	int32_t x256 = -1;

	t46 = ((x253+(x254==x255))*x256);

	if (t46 != -255) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x257 = INT16_MIN;
	uint32_t x258 = 4450U;
	uint32_t x260 = 65899U;
	volatile uint32_t t47 = 7670601U;

	t47 = ((x257+(x258==x259))*x260);

	if (t47 != 2135588864U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x261 = -1;
	int32_t x262 = 14;
	uint32_t x264 = UINT32_MAX;

	t48 = ((x261+(x262==x263))*x264);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x282 = 1U;
	static volatile int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MIN;
	static uint32_t t49 = 758U;

	t49 = ((x281+(x282==x283))*x284);

	if (t49 != 2855455744U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x289 = INT16_MAX;
	uint8_t x290 = 0U;
	static uint16_t x291 = 4U;
	volatile uint8_t x292 = 45U;

	t50 = ((x289+(x290==x291))*x292);

	if (t50 != 1474515) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x293 = -1;
	int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	volatile int32_t t51 = 506;

	t51 = ((x293+(x294==x295))*x296);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x297 = 7166;
	int8_t x298 = INT8_MAX;
	uint8_t x299 = 1U;
	uint64_t x300 = UINT64_MAX;
	uint64_t t52 = 471736LLU;

	t52 = ((x297+(x298==x299))*x300);

	if (t52 != 18446744073709544450LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x301 = INT16_MAX;
	volatile int64_t x302 = 100042709595427116LL;
	static uint8_t x303 = 38U;
	int64_t x304 = -53LL;
	int64_t t53 = 24710876LL;

	t53 = ((x301+(x302==x303))*x304);

	if (t53 != -1736651LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x313 = INT8_MAX;
	uint32_t x314 = 38U;
	static volatile int32_t x315 = 6;
	int8_t x316 = INT8_MIN;

	t54 = ((x313+(x314==x315))*x316);

	if (t54 != -16256) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x317 = 49714666LL;
	static int32_t x318 = -1;
	volatile int8_t x319 = INT8_MAX;
	int16_t x320 = 12080;
	volatile int64_t t55 = 0LL;

	t55 = ((x317+(x318==x319))*x320);

	if (t55 != 600553165280LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x325 = -1LL;
	int64_t x326 = -12119638433991805LL;

	t56 = ((x325+(x326==x327))*x328);

	if (t56 != -67LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x329 = UINT8_MAX;
	static volatile int64_t x331 = 270565LL;
	uint32_t x332 = 78898U;
	uint32_t t57 = 100U;

	t57 = ((x329+(x330==x331))*x332);

	if (t57 != 20118990U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = -1;
	uint64_t x334 = 41862160558LLU;
	static volatile int16_t x335 = INT16_MIN;
	static volatile int16_t x336 = -1420;

	t58 = ((x333+(x334==x335))*x336);

	if (t58 != 1420) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x337 = INT16_MAX;
	int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	uint32_t x340 = 3291U;
	volatile uint32_t t59 = 81U;

	t59 = ((x337+(x338==x339))*x340);

	if (t59 != 107836197U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = INT64_MAX;
	int16_t x344 = -1;
	int64_t t60 = -622086162LL;

	t60 = ((x341+(x342==x343))*x344);

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x345 = 23U;
	static volatile int32_t x346 = -1;
	int32_t x347 = INT32_MIN;
	int8_t x348 = 4;

	t61 = ((x345+(x346==x347))*x348);

	if (t61 != 92) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x355 = -1;
	int32_t x356 = INT32_MIN;
	static volatile uint64_t t62 = 8161982311652394867LLU;

	t62 = ((x353+(x354==x355))*x356);

	if (t62 != 2147483648LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x357 = -1;
	volatile int16_t x358 = 10;
	int64_t x359 = INT64_MIN;
	static uint32_t x360 = UINT32_MAX;
	uint32_t t63 = 209934866U;

	t63 = ((x357+(x358==x359))*x360);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x365 = 3946768U;
	int8_t x366 = 1;
	static uint32_t x368 = 11775U;
	static uint32_t t64 = 2546U;

	t64 = ((x365+(x366==x367))*x368);

	if (t64 != 3523520240U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x370 = -4226573;
	int32_t x371 = -437689;
	uint16_t x372 = 7U;
	int32_t t65 = -42;

	t65 = ((x369+(x370==x371))*x372);

	if (t65 != -229376) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 36U;
	int8_t x376 = INT8_MIN;

	t66 = ((x373+(x374==x375))*x376);

	if (t66 != 16384) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x377 = 3876U;
	uint16_t x378 = 68U;
	int64_t x380 = 1063403787291LL;
	volatile int64_t t67 = 1372729588881513551LL;

	t67 = ((x377+(x378==x379))*x380);

	if (t67 != 4121753079539916LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x381 = 0U;
	volatile int64_t x382 = INT64_MIN;
	uint32_t x383 = 218480759U;
	static int64_t x384 = INT64_MIN;

	t68 = ((x381+(x382==x383))*x384);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x385 = -1;
	volatile uint8_t x386 = 125U;
	int32_t x387 = 53626;
	volatile uint8_t x388 = 20U;

	t69 = ((x385+(x386==x387))*x388);

	if (t69 != -20) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x390 = 21U;
	int64_t x391 = INT64_MIN;
	int64_t x392 = 27520130021297LL;
	uint64_t t70 = 75533LLU;

	t70 = ((x389+(x390==x391))*x392);

	if (t70 != 2969156386885336594LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x393 = -1;
	uint64_t x394 = 85440068LLU;
	uint32_t x395 = 1902052673U;
	uint64_t x396 = 2131LLU;

	t71 = ((x393+(x394==x395))*x396);

	if (t71 != 18446744073709549485LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = -1;
	static uint64_t x399 = 393376LLU;
	uint32_t x400 = 714U;
	static volatile uint32_t t72 = 42680831U;

	t72 = ((x397+(x398==x399))*x400);

	if (t72 != 4294875904U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x405 = UINT8_MAX;
	uint32_t x406 = 2587695U;
	int8_t x407 = INT8_MAX;
	static int32_t t73 = 268734326;

	t73 = ((x405+(x406==x407))*x408);

	if (t73 != 32385) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x413 = 260U;
	int16_t x415 = INT16_MAX;
	int8_t x416 = INT8_MIN;

	t74 = ((x413+(x414==x415))*x416);

	if (t74 != -33280) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x417 = 0U;
	volatile uint32_t x419 = 440796U;
	static int64_t x420 = INT64_MIN;
	volatile int64_t t75 = 9LL;

	t75 = ((x417+(x418==x419))*x420);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x421 = INT64_MIN;
	static volatile uint8_t x423 = UINT8_MAX;
	static uint64_t x424 = 943817LLU;
	uint64_t t76 = 23514168058163691LLU;

	t76 = ((x421+(x422==x423))*x424);

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x425 = 1U;
	int8_t x426 = INT8_MAX;
	uint16_t x427 = 5911U;
	int32_t x428 = -1;
	volatile int32_t t77 = 15044;

	t77 = ((x425+(x426==x427))*x428);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x429 = -1LL;
	volatile int64_t x430 = 11616178206247754LL;
	static int16_t x431 = 1;
	volatile uint16_t x432 = UINT16_MAX;
	int64_t t78 = 6878LL;

	t78 = ((x429+(x430==x431))*x432);

	if (t78 != -65535LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x433 = INT8_MAX;
	volatile uint32_t x434 = 108U;
	int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MIN;

	t79 = ((x433+(x434==x435))*x436);

	if (t79 != -16256) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x438 = UINT8_MAX;
	int64_t t80 = 2944440LL;

	t80 = ((x437+(x438==x439))*x440);

	if (t80 != -1271471LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x445 = UINT16_MAX;
	uint8_t x446 = UINT8_MAX;
	uint64_t x447 = UINT64_MAX;
	volatile uint64_t t81 = 7792485049LLU;

	t81 = ((x445+(x446==x447))*x448);

	if (t81 != 182187300LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x450 = -1LL;
	int8_t x451 = -1;
	volatile int16_t x452 = INT16_MIN;
	uint64_t t82 = 435695883513476LLU;

	t82 = ((x449+(x450==x451))*x452);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x453 = INT16_MIN;
	static int8_t x455 = INT8_MIN;
	int32_t x456 = 777;

	t83 = ((x453+(x454==x455))*x456);

	if (t83 != -25460736) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x457 = UINT8_MAX;
	int16_t x458 = INT16_MAX;
	uint64_t x459 = UINT64_MAX;
	uint32_t x460 = UINT32_MAX;
	uint32_t t84 = 65303980U;

	t84 = ((x457+(x458==x459))*x460);

	if (t84 != 4294967041U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x461 = UINT64_MAX;
	int8_t x462 = INT8_MAX;
	int8_t x463 = INT8_MIN;
	int32_t x464 = -1;

	t85 = ((x461+(x462==x463))*x464);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x465 = 10U;
	int16_t x467 = -4640;
	int32_t t86 = -33;

	t86 = ((x465+(x466==x467))*x468);

	if (t86 != 410) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x469 = -7641LL;
	int64_t x470 = -1LL;
	static uint16_t x472 = 54U;

	t87 = ((x469+(x470==x471))*x472);

	if (t87 != -412614LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x473 = UINT64_MAX;
	volatile int32_t x475 = -1;
	static volatile uint8_t x476 = 78U;
	volatile uint64_t t88 = 4828242LLU;

	t88 = ((x473+(x474==x475))*x476);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = -1;
	int8_t x478 = INT8_MIN;
	int32_t x479 = INT32_MAX;
	volatile int32_t t89 = 11695766;

	t89 = ((x477+(x478==x479))*x480);

	if (t89 != -64) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x481 = -1970732880003LL;
	uint16_t x482 = UINT16_MAX;
	int32_t x483 = -1;
	volatile int8_t x484 = INT8_MIN;
	volatile int64_t t90 = 572LL;

	t90 = ((x481+(x482==x483))*x484);

	if (t90 != 252253808640384LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x485 = INT16_MIN;
	int8_t x487 = INT8_MIN;

	t91 = ((x485+(x486==x487))*x488);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x490 = INT64_MIN;
	int64_t x491 = INT64_MAX;
	static uint16_t x492 = UINT16_MAX;
	int64_t t92 = 5636320LL;

	t92 = ((x489+(x490==x491))*x492);

	if (t92 != -65535LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x494 = INT32_MIN;
	volatile int16_t x496 = -8;
	int32_t t93 = -15;

	t93 = ((x493+(x494==x495))*x496);

	if (t93 != -1016) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x497 = 3U;
	int8_t x498 = INT8_MIN;
	int16_t x499 = INT16_MAX;
	uint32_t x500 = UINT32_MAX;
	uint32_t t94 = 887850714U;

	t94 = ((x497+(x498==x499))*x500);

	if (t94 != 4294967293U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x501 = 0;
	uint32_t x502 = 26979U;
	static volatile uint64_t x503 = UINT64_MAX;
	uint8_t x504 = 19U;
	static int32_t t95 = 55368620;

	t95 = ((x501+(x502==x503))*x504);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MIN;
	uint64_t x508 = 18635983324395LLU;
	static volatile uint64_t t96 = 93763643112086140LLU;

	t96 = ((x505+(x506==x507))*x508);

	if (t96 != 18446725437726227221LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x521 = -1LL;
	int64_t t97 = -330995304214922LL;

	t97 = ((x521+(x522==x523))*x524);

	if (t97 != -127LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x529 = -911LL;
	uint32_t x530 = 30712U;
	static uint64_t x531 = 1449936000292855LLU;
	int8_t x532 = INT8_MIN;
	volatile int64_t t98 = -1LL;

	t98 = ((x529+(x530==x531))*x532);

	if (t98 != 116608LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x537 = UINT32_MAX;
	int8_t x539 = INT8_MIN;

	t99 = ((x537+(x538==x539))*x540);

	if (t99 != 0U) { NG(); } else { ; }
	
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

