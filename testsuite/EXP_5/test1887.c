#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x33 = UINT8_MAX;
volatile int8_t x40 = INT8_MIN;
int16_t x54 = INT16_MIN;
volatile uint64_t x68 = 5875606429725757LLU;
static int8_t x78 = -1;
uint16_t x79 = 0U;
volatile int16_t x82 = INT16_MIN;
int16_t x92 = -1;
volatile int64_t t14 = -26648616989869158LL;
static uint64_t x107 = 1LLU;
int16_t x108 = 68;
int32_t x110 = -1;
volatile uint32_t x111 = UINT32_MAX;
volatile uint64_t t18 = 20LLU;
static int32_t x126 = INT32_MAX;
volatile uint16_t x130 = UINT16_MAX;
volatile uint16_t x131 = UINT16_MAX;
static volatile uint64_t x138 = UINT64_MAX;
static uint32_t x144 = UINT32_MAX;
volatile uint32_t x147 = UINT32_MAX;
volatile int16_t x149 = INT16_MIN;
volatile int32_t x150 = -43;
volatile uint32_t x151 = 124171211U;
uint32_t x156 = UINT32_MAX;
uint32_t x159 = UINT32_MAX;
int32_t x162 = INT32_MAX;
uint64_t x163 = UINT64_MAX;
static volatile int32_t x168 = -44870;
volatile int64_t t30 = -880968LL;
uint16_t x169 = 6U;
uint32_t x174 = UINT32_MAX;
uint64_t x175 = 6LLU;
int16_t x177 = -1;
int64_t x178 = INT64_MAX;
int8_t x180 = -3;
int32_t x181 = INT32_MIN;
volatile int16_t x185 = INT16_MAX;
static int8_t x186 = -14;
static int16_t x187 = -1;
int64_t x206 = INT64_MIN;
static int32_t x207 = INT32_MIN;
int8_t x209 = INT8_MIN;
volatile int16_t x215 = INT16_MIN;
int8_t x216 = 0;
static int64_t x218 = 2535946976903935189LL;
static volatile int32_t x223 = 1863824;
int8_t x224 = INT8_MIN;
uint8_t x231 = UINT8_MAX;
volatile int64_t x241 = 278970279015617446LL;
int64_t x247 = -1LL;
int32_t x248 = -1;
int32_t x249 = INT32_MAX;
static volatile int8_t x251 = -4;
uint32_t x257 = 6427U;
uint64_t t48 = 11983527571LLU;
uint16_t x265 = UINT16_MAX;
volatile uint32_t t49 = 0U;
int64_t x269 = INT64_MAX;
int16_t x271 = INT16_MAX;
int8_t x272 = 42;
uint64_t x275 = 8152888291924LLU;
uint8_t x283 = 1U;
int32_t x292 = 125663076;
int16_t x305 = INT16_MIN;
uint16_t x308 = 21U;
uint64_t t56 = 14LLU;
volatile uint32_t t57 = 770247056U;
static volatile int64_t x316 = 246341915LL;
volatile int64_t x317 = -1LL;
volatile int64_t t59 = -106001LL;
volatile int16_t x321 = INT16_MAX;
int16_t x337 = INT16_MAX;
uint32_t x342 = 6054259U;
volatile int16_t x362 = INT16_MIN;
int32_t x368 = 745442;
volatile int16_t x372 = INT16_MAX;
static volatile int64_t x379 = -1LL;
volatile uint32_t x391 = 592U;
uint64_t x398 = 53914788865550141LLU;
volatile int16_t x403 = INT16_MAX;
uint32_t t78 = 37885U;
volatile int8_t x415 = -17;
uint8_t x426 = UINT8_MAX;
uint16_t x428 = 3204U;
static int64_t x439 = 12808017377145675LL;
int8_t x445 = -1;
int8_t x448 = 0;
int64_t x450 = -14819204LL;
volatile int64_t t86 = -498995544919LL;
int8_t x455 = INT8_MIN;
int16_t x456 = INT16_MIN;
static uint64_t t88 = 427046250263842054LLU;
uint64_t x468 = 136240LLU;
static volatile uint64_t t89 = 1573431LLU;
uint32_t x481 = UINT32_MAX;
static int16_t x484 = -1;
volatile int16_t x486 = INT16_MIN;
static int64_t t93 = 1645224577LL;
static int32_t x493 = INT32_MIN;
volatile int8_t x495 = INT8_MIN;
uint64_t x511 = 7LLU;


void f0(void) {
	volatile uint64_t x1 = 150420738209LLU;
	int16_t x2 = 1;
	uint32_t x3 = 202366889U;
	int16_t x4 = -1;
	uint64_t t0 = 3579029910764LLU;

	t0 = (x1-((x2|x3)*x4));

	if (t0 != 146328137802LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MIN;
	uint32_t x14 = 27U;
	static uint32_t x15 = 102546050U;
	static int32_t x16 = INT32_MIN;
	uint32_t t1 = 108082U;

	t1 = (x13-((x14|x15)*x16));

	if (t1 != 2147483520U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	volatile int64_t x18 = -20LL;
	static int64_t x19 = INT64_MIN;
	volatile int16_t x20 = 1;
	int64_t t2 = -2160LL;

	t2 = (x17-((x18|x19)*x20));

	if (t2 != -2147483628LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	uint16_t x22 = 0U;
	static uint32_t x23 = 36733U;
	static uint64_t x24 = 5LLU;
	uint64_t t3 = 1513727050056231597LLU;

	t3 = (x21-((x22|x23)*x24));

	if (t3 != 18446744073709367950LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x34 = 10899096U;
	int16_t x35 = INT16_MAX;
	int32_t x36 = INT32_MIN;
	volatile uint32_t t4 = 186195U;

	t4 = (x33-((x34|x35)*x36));

	if (t4 != 2147483903U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MIN;
	uint8_t x38 = 8U;
	volatile uint8_t x39 = 1U;
	static int32_t t5 = -120906;

	t5 = (x37-((x38|x39)*x40));

	if (t5 != -31616) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x41 = -1;
	int32_t x42 = -1;
	int64_t x43 = INT64_MIN;
	static uint16_t x44 = 1U;
	int64_t t6 = 280059455813780281LL;

	t6 = (x41-((x42|x43)*x44));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x53 = INT64_MIN;
	int8_t x55 = 1;
	uint16_t x56 = 13U;
	volatile int64_t t7 = 0LL;

	t7 = (x53-((x54|x55)*x56));

	if (t7 != -9223372036854349837LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MAX;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = INT32_MIN;
	volatile uint32_t t8 = 183491860U;

	t8 = (x61-((x62|x63)*x64));

	if (t8 != 2147549183U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x65 = 116851633995LLU;
	static int16_t x66 = INT16_MAX;
	int32_t x67 = 239;
	volatile uint64_t t9 = 1245523256147155LLU;

	t9 = (x65-((x66|x67)*x68));

	if (t9 != 10388189044832822152LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x73 = -53;
	int8_t x74 = 2;
	int16_t x75 = 2;
	volatile int64_t x76 = -3620564522LL;
	volatile int64_t t10 = 10023314LL;

	t10 = (x73-((x74|x75)*x76));

	if (t10 != 7241128991LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x77 = 5U;
	static int16_t x80 = INT16_MIN;
	int32_t t11 = 800;

	t11 = (x77-((x78|x79)*x80));

	if (t11 != -32763) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x81 = INT8_MAX;
	int8_t x83 = INT8_MAX;
	static int16_t x84 = INT16_MAX;
	int32_t t12 = 769;

	t12 = (x81-((x82|x83)*x84));

	if (t12 != 1069547774) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = -1;
	uint64_t x86 = 316724175890335LLU;
	uint32_t x87 = 1U;
	int8_t x88 = INT8_MIN;
	uint64_t t13 = 4091LLU;

	t13 = (x85-((x86|x87)*x88));

	if (t13 != 40540694513962879LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = -1;
	uint32_t x90 = 16339116U;
	static volatile int64_t x91 = INT64_MIN;

	t14 = (x89-((x90|x91)*x92));

	if (t14 != -9223372036838436693LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = -1;
	static uint64_t x94 = 340562036774LLU;
	uint64_t x95 = 1726LLU;
	volatile int64_t x96 = 130LL;
	uint64_t t15 = 78LLU;

	t15 = (x93-((x94|x95)*x96));

	if (t15 != 18446699800644551555LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = 4279;
	int64_t x106 = INT64_MIN;
	static uint64_t t16 = 5939593307397698LLU;

	t16 = (x105-((x106|x107)*x108));

	if (t16 != 4211LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x109 = INT16_MIN;
	volatile uint16_t x112 = 152U;
	uint32_t t17 = 1653979095U;

	t17 = (x109-((x110|x111)*x112));

	if (t17 != 4294934680U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = -60LL;
	int16_t x114 = INT16_MIN;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = 155874058374666LLU;

	t18 = (x113-((x114|x115)*x116));

	if (t18 != 19951879471957188LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = -1;
	int16_t x118 = 27;
	uint16_t x119 = UINT16_MAX;
	int16_t x120 = 0;
	int32_t t19 = 38092592;

	t19 = (x117-((x118|x119)*x120));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x121 = 3;
	static volatile uint16_t x122 = 1U;
	int8_t x123 = INT8_MIN;
	static int64_t x124 = -1LL;
	volatile int64_t t20 = 349040029257LL;

	t20 = (x121-((x122|x123)*x124));

	if (t20 != -124LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x125 = INT8_MIN;
	static int16_t x127 = INT16_MIN;
	int8_t x128 = 0;
	volatile int32_t t21 = -117265218;

	t21 = (x125-((x126|x127)*x128));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x129 = 1843116U;
	uint64_t x132 = 0LLU;
	static uint64_t t22 = 35710507399058LLU;

	t22 = (x129-((x130|x131)*x132));

	if (t22 != 1843116LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x137 = INT32_MAX;
	static int64_t x139 = 89610485LL;
	uint32_t x140 = UINT32_MAX;
	uint64_t t23 = 507066539LLU;

	t23 = (x137-((x138|x139)*x140));

	if (t23 != 6442450942LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MAX;
	uint32_t x143 = 199394939U;
	volatile uint32_t t24 = 54129U;

	t24 = (x141-((x142|x143)*x144));

	if (t24 != 199393279U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x145 = 1104326277920948760LLU;
	volatile int64_t x146 = -26330864974843103LL;
	static int8_t x148 = INT8_MIN;
	volatile uint64_t t25 = 27973243175LLU;

	t25 = (x145-((x146|x147)*x148));

	if (t25 != 16180719766822683032LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x152 = -1LL;
	volatile int64_t t26 = -49LL;

	t26 = (x149-((x150|x151)*x152));

	if (t26 != 4294934495LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x153 = 95;
	static uint64_t x154 = UINT64_MAX;
	int16_t x155 = 0;
	volatile uint64_t t27 = 11322730LLU;

	t27 = (x153-((x154|x155)*x156));

	if (t27 != 4294967390LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x157 = UINT8_MAX;
	uint32_t x158 = 30303847U;
	int16_t x160 = INT16_MIN;
	static uint32_t t28 = 90655359U;

	t28 = (x157-((x158|x159)*x160));

	if (t28 != 4294934783U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x161 = UINT8_MAX;
	volatile int32_t x164 = INT32_MIN;
	volatile uint64_t t29 = 51302250735LLU;

	t29 = (x161-((x162|x163)*x164));

	if (t29 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x165 = 8;
	int64_t x166 = INT64_MIN;
	static int8_t x167 = -1;

	t30 = (x165-((x166|x167)*x168));

	if (t30 != -44862LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x170 = -1LL;
	volatile int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MAX;
	volatile int64_t t31 = -1LL;

	t31 = (x169-((x170|x171)*x172));

	if (t31 != 133LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x173 = 6318754LLU;
	uint32_t x176 = UINT32_MAX;
	volatile uint64_t t32 = 1997410LLU;

	t32 = (x173-((x174|x175)*x176));

	if (t32 != 8596253345LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x179 = -1;
	static volatile int64_t t33 = -11002LL;

	t33 = (x177-((x178|x179)*x180));

	if (t33 != -4LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x182 = INT16_MIN;
	volatile int64_t x183 = 2439356027LL;
	int64_t x184 = -1LL;
	volatile int64_t t34 = 16099033442LL;

	t34 = (x181-((x182|x183)*x184));

	if (t34 != -2147508613LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x188 = UINT16_MAX;
	int32_t t35 = 0;

	t35 = (x185-((x186|x187)*x188));

	if (t35 != 98302) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x189 = INT8_MIN;
	volatile uint64_t x190 = UINT64_MAX;
	int64_t x191 = 33996249641362526LL;
	int64_t x192 = INT64_MIN;
	volatile uint64_t t36 = 1006988500231995515LLU;

	t36 = (x189-((x190|x191)*x192));

	if (t36 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x193 = -495101;
	int64_t x194 = 18LL;
	uint16_t x195 = 0U;
	int8_t x196 = 1;
	volatile int64_t t37 = 15555LL;

	t37 = (x193-((x194|x195)*x196));

	if (t37 != -495119LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x205 = 800;
	uint16_t x208 = UINT16_MAX;
	volatile int64_t t38 = 2342LL;

	t38 = (x205-((x206|x207)*x208));

	if (t38 != 140735340872480LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x210 = 16218717902LL;
	int16_t x211 = INT16_MIN;
	volatile int16_t x212 = -1;
	volatile int64_t t39 = -1942493399875857LL;

	t39 = (x209-((x210|x211)*x212));

	if (t39 != -434LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = -1;
	int8_t x214 = 0;
	volatile int32_t t40 = -5638;

	t40 = (x213-((x214|x215)*x216));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x217 = 96LL;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = 1038U;
	static int64_t t41 = 29796740594834508LL;

	t41 = (x217-((x218|x219)*x220));

	if (t41 != 44730LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x221 = UINT32_MAX;
	uint16_t x222 = 1094U;
	uint32_t t42 = 1120426U;

	t42 = (x221-((x222|x223)*x224));

	if (t42 != 238709503U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = INT16_MIN;
	volatile int64_t x226 = INT64_MIN;
	static int16_t x227 = -1;
	static uint64_t x228 = 116496160934LLU;
	uint64_t t43 = 427864789936LLU;

	t43 = (x225-((x226|x227)*x228));

	if (t43 != 116496128166LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x229 = INT8_MIN;
	static int8_t x230 = 6;
	volatile int16_t x232 = INT16_MAX;
	volatile int32_t t44 = 7;

	t44 = (x229-((x230|x231)*x232));

	if (t44 != -8355713) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x242 = INT32_MIN;
	uint8_t x243 = 105U;
	int8_t x244 = -1;
	volatile int64_t t45 = 38420480437499LL;

	t45 = (x241-((x242|x243)*x244));

	if (t45 != 278970276868133903LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x245 = -1;
	static volatile uint16_t x246 = 1U;
	int64_t t46 = -321293822784229274LL;

	t46 = (x245-((x246|x247)*x248));

	if (t46 != -2LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x250 = UINT16_MAX;
	static int64_t x252 = -1LL;
	int64_t t47 = 134951776740759LL;

	t47 = (x249-((x250|x251)*x252));

	if (t47 != 2147483646LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x258 = UINT64_MAX;
	volatile uint32_t x259 = 34385U;
	int64_t x260 = -331223LL;

	t48 = (x257-((x258|x259)*x260));

	if (t48 != 18446744073709226820LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x266 = 5U;
	int8_t x267 = -11;
	volatile uint16_t x268 = UINT16_MAX;

	t49 = (x265-((x266|x267)*x268));

	if (t49 != 786420U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x270 = 61712978LLU;
	uint64_t t50 = 323030030045017LLU;

	t50 = (x269-((x270|x271)*x272));

	if (t50 != 9223372034261909545LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x273 = INT64_MIN;
	static uint16_t x274 = 10096U;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t51 = 56090321053LLU;

	t51 = (x273-((x274|x275)*x276));

	if (t51 != 9224415606556310016LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x277 = -28;
	static int32_t x278 = 2;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = 4734LLU;
	static uint64_t t52 = 23922796662153335LLU;

	t52 = (x277-((x278|x279)*x280));

	if (t52 != 4706LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = -4130;
	int8_t x282 = INT8_MAX;
	int8_t x284 = INT8_MAX;
	volatile int32_t t53 = -117422682;

	t53 = (x281-((x282|x283)*x284));

	if (t53 != -20259) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x289 = 5U;
	uint64_t x290 = UINT64_MAX;
	int16_t x291 = INT16_MAX;
	volatile uint64_t t54 = 4423037LLU;

	t54 = (x289-((x290|x291)*x292));

	if (t54 != 125663081LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x293 = 6204LL;
	int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	volatile int16_t x296 = 2949;
	volatile int64_t t55 = -347LL;

	t55 = (x293-((x294|x295)*x296));

	if (t55 != 9153LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x306 = 60214LLU;
	int32_t x307 = INT32_MAX;

	t56 = (x305-((x306|x307)*x308));

	if (t56 != 18446744028612362261LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x309 = 1U;
	uint32_t x310 = UINT32_MAX;
	static volatile int16_t x311 = -1;
	volatile int8_t x312 = -1;

	t57 = (x309-((x310|x311)*x312));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x313 = INT32_MAX;
	uint64_t x314 = 7181804065696828LLU;
	volatile uint8_t x315 = 2U;
	volatile uint64_t t58 = 7767264139485861066LLU;

	t58 = (x313-((x314|x315)*x316));

	if (t58 != 10963922794912241525LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x318 = INT16_MAX;
	static int8_t x319 = INT8_MIN;
	int8_t x320 = -1;

	t59 = (x317-((x318|x319)*x320));

	if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x322 = 319925796LLU;
	volatile int16_t x323 = INT16_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t60 = 81869984666333LLU;

	t60 = (x321-((x322|x323)*x324));

	if (t60 != 11811LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x325 = -332356254995646477LL;
	int8_t x326 = -1;
	int8_t x327 = -1;
	static volatile int8_t x328 = INT8_MIN;
	int64_t t61 = -881068740305LL;

	t61 = (x325-((x326|x327)*x328));

	if (t61 != -332356254995646605LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x329 = 27U;
	volatile uint64_t x330 = 3695834LLU;
	uint64_t x331 = 49646004491LLU;
	uint32_t x332 = UINT32_MAX;
	volatile uint64_t t62 = 85LLU;

	t62 = (x329-((x330|x331)*x332));

	if (t62 != 8126202577407307254LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x333 = 2559091U;
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = INT8_MIN;
	int64_t x336 = -4407159512871934016LL;
	volatile int64_t t63 = 19LL;

	t63 = (x333-((x334|x335)*x336));

	if (t63 != -4407159512869374925LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x338 = INT64_MAX;
	volatile int32_t x339 = -5;
	uint8_t x340 = 6U;
	static volatile int64_t t64 = 58475508LL;

	t64 = (x337-((x338|x339)*x340));

	if (t64 != 32773LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x341 = UINT32_MAX;
	static int16_t x343 = INT16_MIN;
	uint16_t x344 = UINT16_MAX;
	uint32_t t65 = 3624482U;

	t65 = (x341-((x342|x343)*x344));

	if (t65 != 512549234U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x353 = UINT64_MAX;
	uint16_t x354 = 23396U;
	uint64_t x355 = UINT64_MAX;
	uint16_t x356 = 7105U;
	volatile uint64_t t66 = 1232655809LLU;

	t66 = (x353-((x354|x355)*x356));

	if (t66 != 7104LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x357 = -1;
	uint16_t x358 = 12947U;
	uint32_t x359 = 118U;
	static uint32_t x360 = 1980775U;
	static uint32_t t67 = 94335U;

	t67 = (x357-((x358|x359)*x360));

	if (t67 != 4221599646U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x361 = 1U;
	int64_t x363 = -1LL;
	int8_t x364 = 53;
	static volatile int64_t t68 = -3217459551231LL;

	t68 = (x361-((x362|x363)*x364));

	if (t68 != 54LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x365 = UINT64_MAX;
	int64_t x366 = -1LL;
	static volatile int8_t x367 = 1;
	volatile uint64_t t69 = 435961LLU;

	t69 = (x365-((x366|x367)*x368));

	if (t69 != 745441LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x369 = -1LL;
	static uint16_t x370 = 28U;
	int16_t x371 = -1;
	volatile int64_t t70 = 1LL;

	t70 = (x369-((x370|x371)*x372));

	if (t70 != 32766LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x373 = -1LL;
	uint64_t x374 = UINT64_MAX;
	volatile uint64_t x375 = 30701202068136LLU;
	int16_t x376 = -1;
	volatile uint64_t t71 = 63622441LLU;

	t71 = (x373-((x374|x375)*x376));

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x377 = 3U;
	static int64_t x378 = INT64_MIN;
	volatile int32_t x380 = -1533;
	volatile int64_t t72 = -3912LL;

	t72 = (x377-((x378|x379)*x380));

	if (t72 != -1530LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x381 = 0U;
	uint32_t x382 = 173517238U;
	uint16_t x383 = 6690U;
	int32_t x384 = -1;
	uint32_t t73 = 29707U;

	t73 = (x381-((x382|x383)*x384));

	if (t73 != 173521846U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x385 = 4;
	volatile uint8_t x386 = 3U;
	volatile int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t74 = 29587551;

	t74 = (x385-((x386|x387)*x388));

	if (t74 != -4193916) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x389 = INT16_MIN;
	int64_t x390 = 25LL;
	int16_t x392 = 22;
	int64_t t75 = 6161971811807636LL;

	t75 = (x389-((x390|x391)*x392));

	if (t75 != -45990LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x393 = INT16_MAX;
	uint32_t x394 = 388655945U;
	int32_t x395 = INT32_MIN;
	int8_t x396 = 1;
	static volatile uint32_t t76 = 318U;

	t76 = (x393-((x394|x395)*x396));

	if (t76 != 1758860470U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x397 = 4U;
	int16_t x399 = INT16_MAX;
	uint64_t x400 = 7418365009732LLU;
	volatile uint64_t t77 = 671387972777057047LLU;

	t77 = (x397-((x398|x399)*x400));

	if (t77 != 16968497446149611336LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x401 = UINT32_MAX;
	int32_t x402 = 952;
	int8_t x404 = 1;

	t78 = (x401-((x402|x403)*x404));

	if (t78 != 4294934528U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x413 = -1;
	static uint8_t x414 = UINT8_MAX;
	static uint32_t x416 = 329255U;
	uint32_t t79 = 22U;

	t79 = (x413-((x414|x415)*x416));

	if (t79 != 329254U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x417 = 3;
	static volatile uint64_t x418 = 53256817905263362LLU;
	uint32_t x419 = 379101U;
	uint64_t x420 = UINT64_MAX;
	uint64_t t80 = 22992284953591708LLU;

	t80 = (x417-((x418|x419)*x420));

	if (t80 != 53256817905363938LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x425 = INT8_MIN;
	uint8_t x427 = UINT8_MAX;
	volatile int32_t t81 = -8737003;

	t81 = (x425-((x426|x427)*x428));

	if (t81 != -817148) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x429 = 4U;
	volatile int8_t x430 = INT8_MIN;
	uint32_t x431 = UINT32_MAX;
	volatile uint64_t x432 = 3199LLU;
	volatile uint64_t t82 = 960976851335LLU;

	t82 = (x429-((x430|x431)*x432));

	if (t82 != 18446730334109174915LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x433 = 9U;
	int8_t x434 = -15;
	static uint8_t x435 = UINT8_MAX;
	volatile int64_t x436 = 649391LL;
	volatile int64_t t83 = 154891016LL;

	t83 = (x433-((x434|x435)*x436));

	if (t83 != 649400LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x437 = -14;
	int16_t x438 = -1;
	static int8_t x440 = INT8_MAX;
	static volatile int64_t t84 = 3397708LL;

	t84 = (x437-((x438|x439)*x440));

	if (t84 != 113LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x446 = UINT8_MAX;
	int64_t x447 = INT64_MIN;
	volatile int64_t t85 = 30845LL;

	t85 = (x445-((x446|x447)*x448));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x449 = INT16_MIN;
	volatile int16_t x451 = 12453;
	int16_t x452 = 27;

	t86 = (x449-((x450|x451)*x452));

	if (t86 != 399971665LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x453 = INT16_MIN;
	static volatile uint32_t x454 = 24499U;
	uint32_t t87 = 404520424U;

	t87 = (x453-((x454|x455)*x456));

	if (t87 != 4292411392U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x461 = INT64_MAX;
	static volatile int64_t x462 = -202429141482079LL;
	uint32_t x463 = UINT32_MAX;
	uint64_t x464 = UINT64_MAX;

	t88 = (x461-((x462|x463)*x464));

	if (t88 != 9223169610751148030LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x465 = -21;
	volatile uint16_t x466 = 156U;
	uint32_t x467 = 533422083U;

	t89 = (x465-((x466|x467)*x468));

	if (t89 != 18446671400263710235LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x469 = -6;
	int8_t x470 = INT8_MAX;
	int8_t x471 = 55;
	uint16_t x472 = UINT16_MAX;
	int32_t t90 = 6981742;

	t90 = (x469-((x470|x471)*x472));

	if (t90 != -8322951) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x473 = INT32_MIN;
	uint8_t x474 = 85U;
	uint64_t x475 = 4LLU;
	uint64_t x476 = 9493LLU;
	uint64_t t91 = 8923647LLU;

	t91 = (x473-((x474|x475)*x476));

	if (t91 != 18446744071561261063LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x482 = UINT16_MAX;
	volatile int8_t x483 = INT8_MAX;
	uint32_t t92 = 19730U;

	t92 = (x481-((x482|x483)*x484));

	if (t92 != 65534U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x485 = 6154241U;
	volatile int64_t x487 = -32097070675305087LL;
	int32_t x488 = INT32_MAX;

	t93 = (x485-((x486|x487)*x488));

	if (t93 != 18964434240898LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x489 = INT8_MIN;
	int64_t x490 = -1074546333843706LL;
	volatile int8_t x491 = INT8_MIN;
	static uint16_t x492 = 14028U;
	int64_t t94 = -3114710LL;

	t94 = (x489-((x490|x491)*x492));

	if (t94 != 1711288LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x494 = 9U;
	int32_t x496 = -1;
	volatile uint32_t t95 = 1470645U;

	t95 = (x493-((x494|x495)*x496));

	if (t95 != 2147483529U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x497 = -1;
	int16_t x498 = INT16_MIN;
	volatile int8_t x499 = INT8_MIN;
	static volatile uint16_t x500 = 13415U;
	int32_t t96 = 147;

	t96 = (x497-((x498|x499)*x500));

	if (t96 != 1717119) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x505 = 2847U;
	uint64_t x506 = 7819761702260LLU;
	int32_t x507 = 96606;
	int8_t x508 = INT8_MIN;
	uint64_t t97 = 921818469582066498LLU;

	t97 = (x505-((x506|x507)*x508));

	if (t97 != 1000929507592735LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x509 = UINT8_MAX;
	static volatile int64_t x510 = -3133LL;
	static uint64_t x512 = 1355797597130626414LLU;
	uint64_t t98 = 8003599521LLU;

	t98 = (x509-((x510|x511)*x512));

	if (t98 != 17986288542242729597LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x513 = INT64_MIN;
	uint16_t x514 = UINT16_MAX;
	static volatile uint32_t x515 = 5816U;
	static int64_t x516 = -1LL;
	volatile int64_t t99 = 201329LL;

	t99 = (x513-((x514|x515)*x516));

	if (t99 != -9223372036854710273LL) { NG(); } else { ; }
	
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

