#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x9 = 3899LLU;
uint64_t t1 = 33476128694LLU;
int32_t x15 = INT32_MIN;
volatile uint16_t x19 = UINT16_MAX;
int32_t x20 = 13804392;
int32_t x23 = 642280830;
int8_t x24 = INT8_MAX;
uint8_t x27 = UINT8_MAX;
int32_t x32 = -408054;
static volatile int32_t x44 = 966117;
volatile uint32_t x52 = 3U;
static volatile uint32_t x60 = 2U;
uint8_t x63 = 2U;
static int32_t x64 = -46138;
volatile uint32_t x74 = 23431U;
int64_t x85 = -9016017LL;
int32_t x89 = -1;
static int32_t x91 = -60006234;
int32_t t19 = 1;
static int64_t x93 = -622LL;
volatile uint32_t x94 = UINT32_MAX;
uint64_t x95 = UINT64_MAX;
volatile uint16_t x99 = 0U;
volatile int64_t t22 = 62438LL;
static int64_t t23 = -1962562987062328368LL;
uint16_t x114 = 3U;
volatile int64_t t24 = 1048706221174978LL;
static int8_t x124 = -1;
int8_t x125 = -1;
volatile int32_t x128 = -5748066;
static int32_t x131 = INT32_MIN;
volatile int8_t x143 = INT8_MIN;
uint32_t x144 = UINT32_MAX;
uint64_t x148 = 329426043LLU;
volatile uint64_t t30 = 42338279845599831LLU;
int64_t x159 = INT64_MIN;
int32_t x161 = 144;
static uint64_t t33 = 1701335745235933402LLU;
int64_t x165 = 5054379144407221LL;
static volatile uint32_t x168 = 1190867U;
uint64_t t35 = 13LLU;
static uint8_t x181 = UINT8_MAX;
int8_t x183 = INT8_MIN;
int16_t x184 = INT16_MIN;
uint32_t x186 = 675U;
volatile int64_t x189 = 12LL;
static uint8_t x191 = UINT8_MAX;
uint16_t x193 = 1867U;
volatile uint32_t x195 = 16U;
uint64_t x196 = 1245394889548LLU;
uint32_t x197 = 545748U;
int16_t x201 = 7;
int32_t t43 = -1;
int32_t x206 = INT32_MIN;
static int16_t x213 = -3962;
volatile uint8_t x220 = UINT8_MAX;
int32_t x229 = INT32_MIN;
int32_t x232 = 30752;
int32_t t50 = 36563443;
static volatile int32_t x242 = INT32_MIN;
volatile uint32_t x246 = 0U;
volatile uint32_t t56 = 58972860U;
volatile uint32_t x266 = 1524U;
int8_t x267 = 3;
int64_t x276 = -1LL;
int32_t x281 = INT32_MIN;
uint64_t x293 = UINT64_MAX;
int32_t t65 = -101;
static int32_t x306 = -724911;
uint16_t x312 = 7U;
int64_t x315 = -51LL;
uint32_t x316 = UINT32_MAX;
int64_t t68 = 31LL;
volatile uint32_t t69 = 92U;
volatile uint16_t x326 = UINT16_MAX;
int16_t x332 = 120;
static uint64_t x334 = 7283160925066353LLU;
int16_t x339 = 8586;
static volatile int32_t t73 = 4162;
static int32_t x350 = INT32_MAX;
int32_t x351 = -1;
int32_t x358 = INT32_MAX;
int32_t x363 = -1;
int8_t x378 = -1;
uint8_t x389 = 18U;
static volatile uint8_t x399 = UINT8_MAX;
static volatile int64_t t83 = -1600977851421809372LL;
uint32_t x406 = UINT32_MAX;
volatile uint64_t t85 = 16562674LLU;
int64_t x413 = INT64_MIN;
int64_t x419 = INT64_MAX;
int32_t x426 = INT32_MAX;
int8_t x427 = -1;
int8_t x429 = INT8_MIN;
uint16_t x432 = UINT16_MAX;
volatile int32_t t89 = -62943426;
uint32_t t90 = 21U;
int32_t x441 = 463625257;
uint64_t x451 = 28039489375352040LLU;
uint64_t x458 = 1149088160229961966LLU;
static int8_t x459 = -39;


void f0(void) {
	uint32_t x5 = 4881U;
	volatile int8_t x6 = -1;
	volatile int64_t x7 = INT64_MIN;
	volatile uint8_t x8 = UINT8_MAX;
	int64_t t0 = -73LL;

	t0 = (x5*(x6^(x7%x8)));

	if (t0 != 619887LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = -30;
	volatile uint32_t x11 = 81719U;
	int32_t x12 = INT32_MIN;

	t1 = (x9*(x10^(x11%x12)));

	if (t1 != 16745758911511LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x13 = INT16_MIN;
	int32_t x14 = -1;
	int32_t x16 = INT32_MIN;
	int32_t t2 = -213;

	t2 = (x13*(x14^(x15%x16)));

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = -3;
	int16_t x18 = INT16_MIN;
	volatile int32_t t3 = 5;

	t3 = (x17*(x18^(x19%x20)));

	if (t3 != 98307) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	int32_t x22 = -1;
	volatile int32_t t4 = 1;

	t4 = (x21*(x22^(x23%x24)));

	if (t4 != -1572816) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	static int64_t x28 = INT64_MIN;
	static volatile uint64_t t5 = 530974027296927LLU;

	t5 = (x25*(x26^(x27%x28)));

	if (t5 != 256LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = 959LL;
	uint64_t x31 = 4662251166810630224LLU;
	uint64_t t6 = 645991959LLU;

	t6 = (x29*(x30^(x31%x32)));

	if (t6 != 1810087826244504465LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x37 = 2U;
	int8_t x38 = INT8_MAX;
	int16_t x39 = -1834;
	int32_t x40 = INT32_MIN;
	volatile int32_t t7 = 287301;

	t7 = (x37*(x38^(x39%x40)));

	if (t7 != -3758) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x41 = 39U;
	int8_t x42 = -1;
	volatile uint8_t x43 = 17U;
	int32_t t8 = 0;

	t8 = (x41*(x42^(x43%x44)));

	if (t8 != -702) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x45 = 10U;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	volatile uint16_t x48 = 12U;
	volatile int32_t t9 = 808997013;

	t9 = (x45*(x46^(x47%x48)));

	if (t9 != 1200) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = -1;
	int8_t x50 = 0;
	static int16_t x51 = -1;
	uint32_t t10 = 5U;

	t10 = (x49*(x50^(x51%x52)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 39112360750720LLU;
	volatile uint8_t x54 = 44U;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MAX;
	uint64_t t11 = 7388970358160507LLU;

	t11 = (x53*(x54^(x55%x56)));

	if (t11 != 17166831180502990336LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 0U;
	uint64_t x58 = 3682LLU;
	uint64_t x59 = 246804557912859LLU;
	uint64_t t12 = 37LLU;

	t12 = (x57*(x58^(x59%x60)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x61 = 1256U;
	volatile int32_t x62 = -1;
	volatile int32_t t13 = 1598;

	t13 = (x61*(x62^(x63%x64)));

	if (t13 != -3768) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	static volatile int32_t x66 = INT32_MAX;
	static uint64_t x67 = 347LLU;
	int8_t x68 = INT8_MAX;
	uint64_t t14 = 239808001812LLU;

	t14 = (x65*(x66^(x67%x68)));

	if (t14 != 70366593613918LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x73 = -1;
	int8_t x75 = -1;
	int8_t x76 = INT8_MAX;
	volatile uint32_t t15 = 284U;

	t15 = (x73*(x74^(x75%x76)));

	if (t15 != 23432U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	uint64_t x78 = 15121222703836LLU;
	static int32_t x79 = 256981;
	int64_t x80 = INT64_MAX;
	uint64_t t16 = 87649607LLU;

	t16 = (x77*(x78^(x79%x80)));

	if (t16 != 18446728952487055095LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = -1LL;
	volatile int64_t x82 = INT64_MAX;
	int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MIN;
	volatile int64_t t17 = -11121248466225LL;

	t17 = (x81*(x82^(x83%x84)));

	if (t17 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x86 = -1;
	int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MAX;
	volatile int64_t t18 = 1974186841LL;

	t18 = (x85*(x86^(x87%x88)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = INT16_MIN;
	int8_t x92 = -1;

	t19 = (x89*(x90^(x91%x92)));

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x96 = -186743;
	volatile uint64_t t20 = 3714LLU;

	t20 = (x93*(x94^(x95%x96)));

	if (t20 != 18446741402356047650LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = UINT8_MAX;
	uint32_t x98 = 1U;
	static int16_t x100 = INT16_MIN;
	static volatile uint32_t t21 = 1U;

	t21 = (x97*(x98^(x99%x100)));

	if (t21 != 255U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	volatile int8_t x102 = -1;
	static int32_t x103 = INT32_MIN;
	volatile int64_t x104 = -1LL;

	t22 = (x101*(x102^(x103%x104)));

	if (t22 != 128LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MAX;
	int8_t x106 = 1;
	int32_t x107 = 3532454;
	int64_t x108 = -1LL;

	t23 = (x105*(x106^(x107%x108)));

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -1;
	static uint8_t x115 = UINT8_MAX;
	int64_t x116 = -48433LL;

	t24 = (x113*(x114^(x115%x116)));

	if (t24 != -252LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = UINT16_MAX;
	uint32_t x122 = 28U;
	int8_t x123 = 5;
	uint32_t t25 = 495278150U;

	t25 = (x121*(x122^(x123%x124)));

	if (t25 != 1834980U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x126 = 428678800U;
	int32_t x127 = -3;
	uint32_t t26 = 115592859U;

	t26 = (x125*(x126^(x127%x128)));

	if (t26 != 428678803U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = -19;
	static uint64_t x130 = 60LLU;
	uint16_t x132 = 164U;
	uint64_t t27 = 711055857441455LLU;

	t27 = (x129*(x130^(x131%x132)));

	if (t27 != 2204LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MAX;
	int16_t x134 = -1;
	static int64_t x135 = INT64_MAX;
	int16_t x136 = -1;
	static volatile int64_t t28 = 52LL;

	t28 = (x133*(x134^(x135%x136)));

	if (t28 != -127LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = -1LL;
	int8_t x142 = -1;
	int64_t t29 = -1460371726LL;

	t29 = (x141*(x142^(x143%x144)));

	if (t29 != -127LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = INT8_MAX;
	int16_t x146 = 0;
	int16_t x147 = INT16_MIN;

	t30 = (x145*(x146^(x147%x148)));

	if (t30 != 4010275190LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x149 = 1;
	uint32_t x150 = 117643092U;
	int32_t x151 = 1;
	volatile uint64_t x152 = UINT64_MAX;
	static uint64_t t31 = 5576183632223LLU;

	t31 = (x149*(x150^(x151%x152)));

	if (t31 != 117643093LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = 229;
	static int16_t x158 = -1;
	int64_t x160 = INT64_MIN;
	volatile int64_t t32 = -33027841976304112LL;

	t32 = (x157*(x158^(x159%x160)));

	if (t32 != -229LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x162 = 54LLU;
	uint16_t x163 = UINT16_MAX;
	volatile int64_t x164 = 648388813507948946LL;

	t33 = (x161*(x162^(x163%x164)));

	if (t33 != 9429264LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x166 = 106399230052399654LLU;
	static int8_t x167 = 3;
	uint64_t t34 = 449793638183472LLU;

	t34 = (x165*(x166^(x167%x168)));

	if (t34 != 10424145927911957545LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x169 = 391LLU;
	volatile int32_t x170 = -39478;
	uint8_t x171 = 87U;
	int64_t x172 = INT64_MIN;

	t35 = (x169*(x170^(x171%x172)));

	if (t35 != 18446744073694098123LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x173 = 11U;
	uint32_t x174 = 29924U;
	int8_t x175 = INT8_MAX;
	int16_t x176 = INT16_MIN;
	volatile uint32_t t36 = 242U;

	t36 = (x173*(x174^(x175%x176)));

	if (t36 != 328361U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MIN;
	static uint32_t x178 = UINT32_MAX;
	int8_t x179 = 0;
	volatile int8_t x180 = -1;
	static uint32_t t37 = 7218U;

	t37 = (x177*(x178^(x179%x180)));

	if (t37 != 128U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x182 = 84125LL;
	static volatile int64_t t38 = -2627988LL;

	t38 = (x181*(x182^(x183%x184)));

	if (t38 != -21469725LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x185 = 51U;
	int32_t x187 = 387;
	int32_t x188 = INT32_MIN;
	volatile uint32_t t39 = 1063U;

	t39 = (x185*(x186^(x187%x188)));

	if (t39 != 40800U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x190 = 250LL;
	int64_t x192 = INT64_MIN;
	volatile int64_t t40 = -37943281LL;

	t40 = (x189*(x190^(x191%x192)));

	if (t40 != 60LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x194 = -97006961426417LL;
	static volatile uint64_t t41 = 3327101336LLU;

	t41 = (x193*(x194^(x195%x196)));

	if (t41 != 18265632076726460949LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x198 = -1;
	static volatile int8_t x199 = INT8_MAX;
	volatile uint8_t x200 = 2U;
	static uint32_t t42 = 5532687U;

	t42 = (x197*(x198^(x199%x200)));

	if (t42 != 4293875800U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x202 = -1;
	int32_t x203 = INT32_MIN;
	volatile int8_t x204 = INT8_MIN;

	t43 = (x201*(x202^(x203%x204)));

	if (t43 != -7) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t44 = 171070732LLU;

	t44 = (x205*(x206^(x207%x208)));

	if (t44 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = 2140380901515361LLU;
	static int8_t x211 = -1;
	int8_t x212 = INT8_MAX;
	volatile uint64_t t45 = 61545LLU;

	t45 = (x209*(x210^(x211%x212)));

	if (t45 != 2425417308210987008LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x214 = UINT64_MAX;
	volatile uint64_t x215 = 210541227LLU;
	volatile int8_t x216 = INT8_MIN;
	static uint64_t t46 = 0LLU;

	t46 = (x213*(x214^(x215%x216)));

	if (t46 != 834164345336LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x217 = 19U;
	volatile uint8_t x218 = 19U;
	int32_t x219 = INT32_MIN;
	int32_t t47 = 62239;

	t47 = (x217*(x218^(x219%x220)));

	if (t47 != -2071) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x221 = INT8_MAX;
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = -112990325422LL;
	volatile uint64_t x224 = 549942978014634LLU;
	volatile uint64_t t48 = 2794449LLU;

	t48 = (x221*(x222^(x223%x224)));

	if (t48 != 844847098437933LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x225 = -1LL;
	static int64_t x226 = INT64_MIN;
	int16_t x227 = INT16_MAX;
	int32_t x228 = INT32_MAX;
	int64_t t49 = -741LL;

	t49 = (x225*(x226^(x227%x228)));

	if (t49 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x230 = 7U;
	int8_t x231 = 7;

	t50 = (x229*(x230^(x231%x232)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = 6173;
	volatile int32_t x235 = 15775485;
	static uint8_t x236 = UINT8_MAX;
	volatile int32_t t51 = -3;

	t51 = (x233*(x234^(x235%x236)));

	if (t51 != -809984) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x237 = 56057LLU;
	volatile int16_t x238 = INT16_MIN;
	int8_t x239 = 5;
	volatile uint32_t x240 = 3923744U;
	volatile uint64_t t52 = 3244064344331878092LLU;

	t52 = (x237*(x238^(x239%x240)));

	if (t52 != 240761145116381LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x241 = INT32_MAX;
	int16_t x243 = INT16_MAX;
	volatile uint64_t x244 = 379LLU;
	volatile uint64_t t53 = 6769574908191392LLU;

	t53 = (x241*(x242^(x243%x244)));

	if (t53 != 13835058428944318291LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = 103U;
	static volatile int16_t x247 = INT16_MIN;
	static int16_t x248 = -1;
	uint32_t t54 = 957930U;

	t54 = (x245*(x246^(x247%x248)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x249 = 1U;
	int8_t x250 = INT8_MIN;
	static int32_t x251 = INT32_MAX;
	int32_t x252 = -1;
	volatile int32_t t55 = 108805;

	t55 = (x249*(x250^(x251%x252)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = -1;
	volatile uint32_t x254 = 22485U;
	uint8_t x255 = 0U;
	int32_t x256 = -2901;

	t56 = (x253*(x254^(x255%x256)));

	if (t56 != 4294944811U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x257 = -1LL;
	uint32_t x258 = 1U;
	static int8_t x259 = INT8_MIN;
	static uint64_t x260 = 32LLU;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x257*(x258^(x259%x260)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = INT32_MIN;
	int8_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	uint64_t x264 = 105506077714761602LLU;
	uint64_t t58 = 7278379LLU;

	t58 = (x261*(x262^(x263%x264)));

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = -42;
	uint16_t x268 = UINT16_MAX;
	volatile uint32_t t59 = 13U;

	t59 = (x265*(x266^(x267%x268)));

	if (t59 != 4294903162U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 1188543747676LLU;
	int8_t x270 = 2;
	static uint8_t x271 = 0U;
	int8_t x272 = -1;
	uint64_t t60 = 11LLU;

	t60 = (x269*(x270^(x271%x272)));

	if (t60 != 2377087495352LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = 190LLU;
	static int16_t x274 = 0;
	int64_t x275 = -1LL;
	volatile uint64_t t61 = 114941556089110LLU;

	t61 = (x273*(x274^(x275%x276)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MAX;
	int32_t x284 = INT32_MIN;
	volatile int32_t t62 = -3;

	t62 = (x281*(x282^(x283%x284)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = UINT64_MAX;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = 32;
	int8_t x288 = INT8_MIN;
	volatile uint64_t t63 = 508LLU;

	t63 = (x285*(x286^(x287%x288)));

	if (t63 != 18446744073709551393LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x294 = INT32_MIN;
	static volatile uint16_t x295 = 2U;
	static int8_t x296 = -1;
	volatile uint64_t t64 = 8LLU;

	t64 = (x293*(x294^(x295%x296)));

	if (t64 != 2147483648LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x297 = INT8_MAX;
	uint16_t x298 = 805U;
	int8_t x299 = 1;
	int32_t x300 = -1;

	t65 = (x297*(x298^(x299%x300)));

	if (t65 != 102235) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MAX;
	volatile int64_t x307 = INT64_MIN;
	uint8_t x308 = 89U;
	int64_t t66 = 611667357LL;

	t66 = (x305*(x306^(x307%x308)));

	if (t66 != 23754862621LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = -1LL;
	uint16_t x310 = UINT16_MAX;
	uint32_t x311 = 2002U;
	volatile int64_t t67 = -792408214LL;

	t67 = (x309*(x310^(x311%x312)));

	if (t67 != -65535LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = -1;
	int16_t x314 = INT16_MIN;

	t68 = (x313*(x314^(x315%x316)));

	if (t68 != -32717LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x317 = 31;
	static uint32_t x318 = UINT32_MAX;
	uint16_t x319 = 62U;
	uint8_t x320 = 13U;

	t69 = (x317*(x318^(x319%x320)));

	if (t69 != 4294966955U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x325 = INT16_MAX;
	int32_t x327 = INT32_MIN;
	int32_t x328 = -1;
	int32_t t70 = 53;

	t70 = (x325*(x326^(x327%x328)));

	if (t70 != 2147385345) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x329 = UINT32_MAX;
	static int64_t x330 = 145419LL;
	int32_t x331 = INT32_MAX;
	int64_t t71 = -1983692876587225941LL;

	t71 = (x329*(x330^(x331%x332)));

	if (t71 != 624574144038900LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = INT64_MIN;
	int16_t x335 = -14900;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t72 = 156379969642LLU;

	t72 = (x333*(x334^(x335%x336)));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x337 = -1;
	int8_t x338 = -1;
	int16_t x340 = INT16_MIN;

	t73 = (x337*(x338^(x339%x340)));

	if (t73 != 8587) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = 7LLU;
	int32_t x352 = INT32_MIN;
	static volatile uint64_t t74 = 2052261LLU;

	t74 = (x349*(x350^(x351%x352)));

	if (t74 != 18446744058677166080LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x357 = INT64_MAX;
	volatile uint16_t x359 = 0U;
	static uint64_t x360 = 372924452LLU;
	uint64_t t75 = 31694848093704300LLU;

	t75 = (x357*(x358^(x359%x360)));

	if (t75 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x361 = UINT8_MAX;
	int32_t x362 = -6;
	static uint8_t x364 = UINT8_MAX;
	volatile int32_t t76 = -884802;

	t76 = (x361*(x362^(x363%x364)));

	if (t76 != 1275) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x365 = 64116484U;
	uint16_t x366 = 119U;
	int8_t x367 = INT8_MIN;
	int32_t x368 = INT32_MAX;
	uint32_t t77 = 229935U;

	t77 = (x365*(x366^(x367%x368)));

	if (t77 != 3717918940U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x377 = -7;
	int64_t x379 = -1LL;
	uint32_t x380 = 4734943U;
	volatile int64_t t78 = 1814782405364920LL;

	t78 = (x377*(x378^(x379%x380)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x381 = 0U;
	volatile int16_t x382 = -1;
	int64_t x383 = -36387291868834447LL;
	int16_t x384 = -1;
	int64_t t79 = 1584703622057LL;

	t79 = (x381*(x382^(x383%x384)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x390 = UINT32_MAX;
	int32_t x391 = -1;
	int16_t x392 = INT16_MIN;
	static volatile uint32_t t80 = 15731U;

	t80 = (x389*(x390^(x391%x392)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x393 = -1LL;
	int8_t x394 = -1;
	int8_t x395 = INT8_MIN;
	static volatile uint16_t x396 = UINT16_MAX;
	int64_t t81 = 2363075319821936LL;

	t81 = (x393*(x394^(x395%x396)));

	if (t81 != -127LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x397 = 7220;
	static int16_t x398 = INT16_MIN;
	volatile int8_t x400 = INT8_MAX;
	int32_t t82 = -750;

	t82 = (x397*(x398^(x399%x400)));

	if (t82 != -236577740) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x401 = INT8_MIN;
	static int16_t x402 = 833;
	int64_t x403 = 18491731266LL;
	int64_t x404 = INT64_MAX;

	t83 = (x401*(x402^(x403%x404)));

	if (t83 != -2366941626752LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x405 = UINT64_MAX;
	uint64_t x407 = UINT64_MAX;
	uint16_t x408 = 14U;
	volatile uint64_t t84 = 1019272192LLU;

	t84 = (x405*(x406^(x407%x408)));

	if (t84 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = -59;
	uint64_t x411 = UINT64_MAX;
	uint16_t x412 = 23U;

	t85 = (x409*(x410^(x411%x412)));

	if (t85 != 2097152LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x414 = UINT64_MAX;
	int16_t x415 = INT16_MIN;
	int32_t x416 = INT32_MIN;
	uint64_t t86 = 3972653580982369525LLU;

	t86 = (x413*(x414^(x415%x416)));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x417 = 0U;
	int8_t x418 = INT8_MIN;
	volatile int16_t x420 = INT16_MIN;
	static volatile int64_t t87 = -65LL;

	t87 = (x417*(x418^(x419%x420)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x425 = 1;
	volatile uint64_t x428 = 198LLU;
	uint64_t t88 = 1576881481495LLU;

	t88 = (x425*(x426^(x427%x428)));

	if (t88 != 2147483632LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x430 = 1;
	uint8_t x431 = UINT8_MAX;

	t89 = (x429*(x430^(x431%x432)));

	if (t89 != -32512) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x433 = INT32_MIN;
	uint32_t x434 = UINT32_MAX;
	static int8_t x435 = -1;
	static int16_t x436 = INT16_MAX;

	t90 = (x433*(x434^(x435%x436)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x437 = -1;
	int8_t x438 = -1;
	uint64_t x439 = 330880362158666LLU;
	volatile int32_t x440 = INT32_MIN;
	static uint64_t t91 = 923317567LLU;

	t91 = (x437*(x438^(x439%x440)));

	if (t91 != 330880362158667LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x442 = -1;
	static int64_t x443 = INT64_MIN;
	int32_t x444 = INT32_MIN;
	static volatile int64_t t92 = 1657235694222168314LL;

	t92 = (x441*(x442^(x443%x444)));

	if (t92 != -463625257LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x445 = -1;
	volatile int16_t x446 = -1;
	volatile uint8_t x447 = UINT8_MAX;
	uint16_t x448 = 2U;
	volatile int32_t t93 = 1;

	t93 = (x445*(x446^(x447%x448)));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = INT16_MIN;
	static uint16_t x450 = 79U;
	uint32_t x452 = UINT32_MAX;
	volatile uint64_t t94 = 122988005338718905LLU;

	t94 = (x449*(x450^(x451%x452)));

	if (t94 != 18446693336565579776LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x453 = INT32_MIN;
	volatile int32_t x454 = -8007504;
	uint16_t x455 = 0U;
	int64_t x456 = INT64_MAX;
	static int64_t t95 = 885877407159715710LL;

	t95 = (x453*(x454^(x455%x456)));

	if (t95 != 17195983901294592LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = INT8_MIN;
	static int16_t x460 = -3;
	uint64_t t96 = 407485LLU;

	t96 = (x457*(x458^(x459%x460)));

	if (t96 != 490668080241281280LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x461 = INT64_MIN;
	int32_t x462 = -1;
	uint64_t x463 = 2958LLU;
	int8_t x464 = INT8_MAX;
	static volatile uint64_t t97 = 12098594LLU;

	t97 = (x461*(x462^(x463%x464)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x465 = 45051LLU;
	static int64_t x466 = INT64_MIN;
	static volatile int8_t x467 = INT8_MIN;
	int32_t x468 = INT32_MAX;
	volatile uint64_t t98 = 683LLU;

	t98 = (x465*(x466^(x467%x468)));

	if (t98 != 9223372036849009280LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x469 = INT8_MIN;
	int32_t x470 = 27347;
	int8_t x471 = INT8_MIN;
	static volatile uint16_t x472 = 46U;
	volatile int32_t t99 = 30866765;

	t99 = (x469*(x470^(x471%x472)));

	if (t99 != 3504256) { NG(); } else { ; }
	
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

