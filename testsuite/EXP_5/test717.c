#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
int16_t x5 = INT16_MAX;
int32_t x9 = 49;
int32_t x14 = 24162;
uint64_t t4 = 9LLU;
int32_t x32 = INT32_MAX;
uint64_t x33 = UINT64_MAX;
volatile int32_t x41 = 1280991;
int64_t x44 = -1LL;
int32_t x56 = -1;
int16_t x62 = INT16_MAX;
int32_t t14 = 20124;
int64_t x67 = -1LL;
uint16_t x68 = 1036U;
static volatile uint64_t t15 = UINT64_MAX;
volatile uint32_t x72 = 298726599U;
uint64_t x78 = 1265672LLU;
static int32_t x79 = INT32_MIN;
static int8_t x81 = -1;
int64_t t19 = -121448LL;
volatile uint64_t x88 = 26613065819LLU;
int8_t x89 = 0;
volatile int32_t t22 = 1;
int16_t x101 = INT16_MIN;
volatile int64_t t23 = 470410380LL;
static volatile uint32_t x105 = UINT32_MAX;
uint8_t x109 = 3U;
static int64_t x112 = -1LL;
int64_t t25 = 8LL;
int32_t x113 = -1;
static volatile uint64_t x114 = UINT64_MAX;
uint64_t x117 = 1866LLU;
int16_t x121 = INT16_MIN;
static uint16_t x123 = 44U;
uint32_t x125 = UINT32_MAX;
static int32_t x130 = INT32_MAX;
uint32_t t32 = 5009U;
uint64_t t33 = 3LLU;
uint64_t x155 = UINT64_MAX;
volatile int16_t x158 = -1;
uint8_t x164 = UINT8_MAX;
uint16_t x166 = UINT16_MAX;
int32_t x168 = INT32_MIN;
uint16_t x171 = 3571U;
static int16_t x183 = -1;
int64_t t43 = 54LL;
int16_t x185 = INT16_MIN;
volatile uint32_t x188 = UINT32_MAX;
int8_t x196 = INT8_MIN;
int16_t x199 = INT16_MAX;
int64_t x201 = INT64_MIN;
static volatile int16_t x203 = -578;
uint8_t x204 = 3U;
int16_t x206 = 1;
int16_t x208 = INT16_MAX;
uint8_t x215 = UINT8_MAX;
volatile int32_t x216 = INT32_MIN;
volatile int64_t t49 = -105376141036325LL;
static int8_t x221 = -1;
volatile int8_t x225 = 26;
static volatile int32_t x235 = 7899;
volatile uint8_t x236 = 1U;
volatile uint64_t t53 = 82940LLU;
int16_t x242 = INT16_MIN;
int32_t t54 = INT32_MIN;
static uint8_t x248 = UINT8_MAX;
int16_t x256 = INT16_MIN;
int64_t x268 = INT64_MIN;
int64_t t60 = -645423LL;
static volatile uint32_t x270 = 3U;
int8_t x272 = INT8_MIN;
uint8_t x275 = 67U;
int64_t x276 = 4172949536510575819LL;
int16_t x293 = INT16_MIN;
uint8_t x294 = UINT8_MAX;
uint16_t x296 = 53U;
volatile int32_t t66 = 62;
int64_t x300 = -1LL;
int64_t x307 = INT64_MAX;
int64_t x310 = -17LL;
int64_t x311 = 1008941660984855LL;
volatile int64_t t70 = -1015422076LL;
int8_t x313 = INT8_MIN;
volatile uint32_t t72 = 2739U;
int8_t x321 = INT8_MIN;
uint16_t x322 = 1U;
uint32_t x332 = UINT32_MAX;
static volatile uint32_t x334 = UINT32_MAX;
volatile int32_t x345 = -189;
int8_t x347 = -1;
int32_t x348 = INT32_MAX;
volatile int32_t x350 = -453;
volatile int64_t x352 = INT64_MIN;
int8_t x355 = INT8_MIN;
int64_t x356 = INT64_MIN;
volatile int64_t t80 = -2067551LL;
volatile uint64_t t81 = 1LLU;
int16_t x380 = INT16_MIN;
volatile int32_t t85 = -8;
int8_t x388 = INT8_MIN;
static volatile int32_t t86 = INT32_MIN;
volatile int64_t x393 = -1LL;
static uint16_t x394 = UINT16_MAX;
uint64_t x395 = 313LLU;
int16_t x399 = -1;
static int8_t x405 = INT8_MIN;
int8_t x407 = INT8_MIN;
int32_t x424 = 15;
volatile int64_t t96 = INT64_MAX;
int8_t x440 = INT8_MAX;


void f0(void) {
	volatile int16_t x2 = -699;
	volatile int64_t x3 = -1LL;
	int16_t x4 = 1;
	volatile int64_t t0 = 6354324475869LL;

	t0 = (x1-((x2%x3)/x4));

	if (t0 != 65535LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = INT64_MIN;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = INT16_MIN;
	uint64_t t1 = 4033976LLU;

	t1 = (x5-((x6%x7)/x8));

	if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x10 = 2U;
	uint64_t x11 = 16257LLU;
	uint8_t x12 = 5U;
	volatile uint64_t t2 = 171234036475663117LLU;

	t2 = (x9-((x10%x11)/x12));

	if (t2 != 49LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x15 = -1;
	uint64_t x16 = 4LLU;
	volatile uint64_t t3 = 347LLU;

	t3 = (x13-((x14%x15)/x16));

	if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	uint64_t x22 = 1022LLU;
	volatile int16_t x23 = INT16_MIN;
	volatile uint16_t x24 = 219U;

	t4 = (x21-((x22%x23)/x24));

	if (t4 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x25 = 15U;
	static uint32_t x26 = UINT32_MAX;
	static int8_t x27 = INT8_MAX;
	int32_t x28 = -1;
	uint32_t t5 = 12U;

	t5 = (x25-((x26%x27)/x28));

	if (t5 != 15U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MAX;
	int64_t t6 = -12201758571578773LL;

	t6 = (x29-((x30%x31)/x32));

	if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x34 = 1135673449LL;
	int8_t x35 = INT8_MIN;
	static int32_t x36 = INT32_MIN;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x33-((x34%x35)/x36));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = -964533;
	int64_t x39 = -865546LL;
	uint32_t x40 = 866U;
	int64_t t8 = 85975LL;

	t8 = (x37-((x38%x39)/x40));

	if (t8 != -32654LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x42 = INT32_MIN;
	uint8_t x43 = 28U;
	int64_t t9 = 113773201054LL;

	t9 = (x41-((x42%x43)/x44));

	if (t9 != 1280975LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 98U;
	uint64_t x46 = 3497845646LLU;
	uint32_t x47 = 493892U;
	int64_t x48 = -9311937969690808LL;
	volatile uint64_t t10 = 2993754632441LLU;

	t10 = (x45-((x46%x47)/x48));

	if (t10 != 98LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int16_t x50 = INT16_MIN;
	static int8_t x51 = 22;
	int32_t x52 = -1;
	uint32_t t11 = 3404189U;

	t11 = (x49-((x50%x51)/x52));

	if (t11 != 4294967285U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MAX;
	volatile int64_t x54 = -1LL;
	static int16_t x55 = INT16_MAX;
	int64_t t12 = -16488036075LL;

	t12 = (x53-((x54%x55)/x56));

	if (t12 != 2147483646LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	static int32_t x58 = -17865267;
	int16_t x59 = INT16_MAX;
	static uint64_t x60 = 310LLU;
	uint64_t t13 = 24182806LLU;

	t13 = (x57-((x58%x59)/x60));

	if (t13 != 18387238447665294512LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	static int16_t x63 = INT16_MIN;
	uint8_t x64 = 3U;

	t14 = (x61-((x62%x63)/x64));

	if (t14 != -11050) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = -1;
	uint64_t x66 = 6LLU;

	t15 = (x65-((x66%x67)/x68));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -13;
	int8_t x70 = INT8_MIN;
	int16_t x71 = 176;
	volatile uint32_t t16 = 3U;

	t16 = (x69-((x70%x71)/x72));

	if (t16 != 4294967269U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -13296;
	uint32_t x74 = 2006U;
	int32_t x75 = 1;
	int16_t x76 = -1;
	volatile uint32_t t17 = 4341021U;

	t17 = (x73-((x74%x75)/x76));

	if (t17 != 4294954000U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 1030663LLU;
	uint32_t x80 = 24714703U;
	uint64_t t18 = 895LLU;

	t18 = (x77-((x78%x79)/x80));

	if (t18 != 1030663LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = -146448;
	static int32_t x83 = -734;
	int64_t x84 = INT64_MIN;

	t19 = (x81-((x82%x83)/x84));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = -12;
	uint32_t x86 = 89277U;
	static volatile int8_t x87 = INT8_MIN;
	uint64_t t20 = 677200607LLU;

	t20 = (x85-((x86%x87)/x88));

	if (t20 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = INT32_MAX;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MAX;
	static int64_t t21 = -214315254922838032LL;

	t21 = (x89-((x90%x91)/x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 387303;
	int16_t x94 = 0;
	int16_t x95 = -1;
	int32_t x96 = -1;

	t22 = (x93-((x94%x95)/x96));

	if (t22 != 387303) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x102 = 75U;
	volatile int64_t x103 = 1479LL;
	int16_t x104 = 3;

	t23 = (x101-((x102%x103)/x104));

	if (t23 != -32793LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x106 = -1;
	static int8_t x107 = 1;
	static int8_t x108 = INT8_MIN;
	uint32_t t24 = UINT32_MAX;

	t24 = (x105-((x106%x107)/x108));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x110 = 0;
	int64_t x111 = -1LL;

	t25 = (x109-((x110%x111)/x112));

	if (t25 != 3LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x115 = -534;
	int32_t x116 = INT32_MIN;
	static uint64_t t26 = UINT64_MAX;

	t26 = (x113-((x114%x115)/x116));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = 1;
	volatile int64_t x119 = 1356994250LL;
	volatile uint16_t x120 = 6U;
	volatile uint64_t t27 = 28674LLU;

	t27 = (x117-((x118%x119)/x120));

	if (t27 != 1866LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x122 = -1;
	uint64_t x124 = 368754200LLU;
	volatile uint64_t t28 = 39600LLU;

	t28 = (x121-((x122%x123)/x124));

	if (t28 != 18446744023685019945LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x126 = INT16_MIN;
	int8_t x127 = 1;
	volatile uint64_t x128 = UINT64_MAX;
	volatile uint64_t t29 = 6753082151941533024LLU;

	t29 = (x125-((x126%x127)/x128));

	if (t29 != 4294967295LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x129 = 7U;
	static int64_t x131 = 17426447348762032LL;
	uint16_t x132 = 1088U;
	volatile int64_t t30 = 638847204LL;

	t30 = (x129-((x130%x131)/x132));

	if (t30 != -1973783LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 53U;
	int32_t x134 = INT32_MAX;
	int64_t x135 = INT64_MIN;
	int16_t x136 = -1;
	static volatile int64_t t31 = 377206LL;

	t31 = (x133-((x134%x135)/x136));

	if (t31 != 2147483700LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x137 = 0U;
	static uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = 39787U;

	t32 = (x137-((x138%x139)/x140));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 515560LLU;
	volatile int8_t x143 = INT8_MIN;
	int8_t x144 = 16;

	t33 = (x141-((x142%x143)/x144));

	if (t33 != 18446744073709486626LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	int64_t x146 = 22263594284957LL;
	static int32_t x147 = INT32_MIN;
	int8_t x148 = -2;
	int64_t t34 = 343032134646089792LL;

	t34 = (x145-((x146%x147)/x148));

	if (t34 != 4610620365LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	volatile uint8_t x150 = 0U;
	volatile uint32_t x151 = 836447U;
	uint32_t x152 = 421979U;
	static volatile uint32_t t35 = 69U;

	t35 = (x149-((x150%x151)/x152));

	if (t35 != 4294934528U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = -4401614409684817767LL;
	int8_t x154 = 1;
	static int64_t x156 = -1LL;
	volatile uint64_t t36 = 396344849403LLU;

	t36 = (x153-((x154%x155)/x156));

	if (t36 != 14045129664024733849LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -1LL;
	int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	static int64_t t37 = -2819LL;

	t37 = (x157-((x158%x159)/x160));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 6359LLU;
	static uint64_t x162 = 2243420632583576850LLU;
	int8_t x163 = 33;
	volatile uint64_t t38 = 303227308017598LLU;

	t38 = (x161-((x162%x163)/x164));

	if (t38 != 6359LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 1453;
	int16_t x167 = -1;
	volatile int32_t t39 = 1490;

	t39 = (x165-((x166%x167)/x168));

	if (t39 != 1453) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x169 = 19746U;
	volatile int16_t x170 = -126;
	int16_t x172 = INT16_MAX;
	volatile int32_t t40 = 1060;

	t40 = (x169-((x170%x171)/x172));

	if (t40 != 19746) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x173 = -38488272LL;
	volatile uint64_t x174 = UINT64_MAX;
	uint8_t x175 = UINT8_MAX;
	uint64_t x176 = UINT64_MAX;
	uint64_t t41 = 429708114672LLU;

	t41 = (x173-((x174%x175)/x176));

	if (t41 != 18446744073671063344LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x177 = 0U;
	static int32_t x178 = INT32_MAX;
	volatile int32_t x179 = INT32_MIN;
	uint16_t x180 = 15504U;
	static volatile int32_t t42 = -360717515;

	t42 = (x177-((x178%x179)/x180));

	if (t42 != -138511) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -1;
	int32_t x182 = INT32_MIN;
	volatile int64_t x184 = -432310900728437022LL;

	t43 = (x181-((x182%x183)/x184));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x186 = 105U;
	static uint64_t x187 = 7635205037936229294LLU;
	volatile uint64_t t44 = 987967571989847LLU;

	t44 = (x185-((x186%x187)/x188));

	if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = UINT16_MAX;
	static volatile int8_t x194 = -1;
	int16_t x195 = INT16_MIN;
	int32_t t45 = 3080;

	t45 = (x193-((x194%x195)/x196));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x197 = 29U;
	uint16_t x198 = 53U;
	uint32_t x200 = UINT32_MAX;
	uint32_t t46 = 198848U;

	t46 = (x197-((x198%x199)/x200));

	if (t46 != 29U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x202 = INT64_MIN;
	int64_t t47 = -269396039007530LL;

	t47 = (x201-((x202%x203)/x204));

	if (t47 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = INT16_MAX;
	int64_t x207 = INT64_MAX;
	volatile int64_t t48 = 4721284121921LL;

	t48 = (x205-((x206%x207)/x208));

	if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -14900687LL;
	int64_t x214 = -1LL;

	t49 = (x213-((x214%x215)/x216));

	if (t49 != -14900687LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MIN;
	static volatile int16_t x219 = 1;
	static int64_t x220 = INT64_MIN;
	uint64_t t50 = UINT64_MAX;

	t50 = (x217-((x218%x219)/x220));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x222 = 1627;
	static uint32_t x223 = 48892U;
	int32_t x224 = INT32_MIN;
	static volatile uint32_t t51 = UINT32_MAX;

	t51 = (x221-((x222%x223)/x224));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x226 = 15464U;
	volatile uint64_t x227 = 595541LLU;
	volatile int64_t x228 = INT64_MIN;
	static volatile uint64_t t52 = 2966985430408533378LLU;

	t52 = (x225-((x226%x227)/x228));

	if (t52 != 26LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x233 = 123750979908669LLU;
	uint8_t x234 = UINT8_MAX;

	t53 = (x233-((x234%x235)/x236));

	if (t53 != 123750979908414LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x241 = INT32_MIN;
	int8_t x243 = INT8_MAX;
	int16_t x244 = INT16_MIN;

	t54 = (x241-((x242%x243)/x244));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x245 = 8640420859LLU;
	int64_t x246 = -1LL;
	volatile int8_t x247 = INT8_MAX;
	uint64_t t55 = 1823029071LLU;

	t55 = (x245-((x246%x247)/x248));

	if (t55 != 8640420859LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x249 = UINT8_MAX;
	static int16_t x250 = -1508;
	int8_t x251 = -1;
	uint8_t x252 = 2U;
	volatile int32_t t56 = -41173;

	t56 = (x249-((x250%x251)/x252));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x253 = UINT64_MAX;
	static int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	uint64_t t57 = 6100982LLU;

	t57 = (x253-((x254%x255)/x256));

	if (t57 != 65534LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = INT32_MAX;
	int64_t x258 = INT64_MAX;
	int32_t x259 = INT32_MIN;
	int64_t x260 = -254544336LL;
	volatile int64_t t58 = -668978353LL;

	t58 = (x257-((x258%x259)/x260));

	if (t58 != 2147483655LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = 28270U;
	int16_t x262 = INT16_MIN;
	int32_t x263 = -22;
	uint32_t x264 = 7990U;
	volatile uint32_t t59 = 1070711U;

	t59 = (x261-((x262%x263)/x264));

	if (t59 != 4294458024U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x265 = INT8_MIN;
	static int32_t x266 = -14;
	int32_t x267 = -560960;

	t60 = (x265-((x266%x267)/x268));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x269 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	static uint32_t t61 = 76U;

	t61 = (x269-((x270%x271)/x272));

	if (t61 != 4294934528U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = 1962993668397LLU;
	int16_t x274 = -3066;
	static uint64_t t62 = 14LLU;

	t62 = (x273-((x274%x275)/x276));

	if (t62 != 1962993668397LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x281 = 1U;
	int16_t x282 = INT16_MIN;
	static int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MIN;
	static int64_t t63 = -120257LL;

	t63 = (x281-((x282%x283)/x284));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x285 = 5U;
	int8_t x286 = -2;
	uint8_t x287 = 36U;
	volatile int8_t x288 = -3;
	volatile int32_t t64 = -3;

	t64 = (x285-((x286%x287)/x288));

	if (t64 != 5) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x289 = 2U;
	volatile uint32_t x290 = UINT32_MAX;
	volatile uint16_t x291 = 1825U;
	static uint16_t x292 = 116U;
	volatile uint32_t t65 = 6U;

	t65 = (x289-((x290%x291)/x292));

	if (t65 != 4294967287U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x295 = 113694;

	t66 = (x293-((x294%x295)/x296));

	if (t66 != -32772) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x297 = -51272080;
	static int8_t x298 = -1;
	int32_t x299 = INT32_MIN;
	volatile int64_t t67 = 3LL;

	t67 = (x297-((x298%x299)/x300));

	if (t67 != -51272081LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x301 = INT32_MAX;
	uint8_t x302 = 0U;
	static int32_t x303 = 1261;
	int64_t x304 = 2220LL;
	volatile int64_t t68 = 4138751869176LL;

	t68 = (x301-((x302%x303)/x304));

	if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x305 = INT8_MAX;
	int32_t x306 = -10402270;
	int16_t x308 = INT16_MIN;
	volatile int64_t t69 = 6371767736LL;

	t69 = (x305-((x306%x307)/x308));

	if (t69 != -190LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MIN;
	int64_t x312 = INT64_MAX;

	t70 = (x309-((x310%x311)/x312));

	if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x314 = INT8_MIN;
	volatile int16_t x315 = -41;
	int8_t x316 = 22;
	int32_t t71 = 41672;

	t71 = (x313-((x314%x315)/x316));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = INT32_MIN;
	volatile int16_t x318 = 170;
	int16_t x319 = 3;
	static uint32_t x320 = 2U;

	t72 = (x317-((x318%x319)/x320));

	if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x323 = INT8_MAX;
	uint32_t x324 = UINT32_MAX;
	uint32_t t73 = 2U;

	t73 = (x321-((x322%x323)/x324));

	if (t73 != 4294967168U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = 1LL;
	static volatile int8_t x326 = INT8_MAX;
	volatile int64_t x327 = 111046LL;
	volatile int64_t x328 = -84603167503426803LL;
	int64_t t74 = 14978690708LL;

	t74 = (x325-((x326%x327)/x328));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x329 = -755;
	static uint16_t x330 = 10959U;
	int64_t x331 = INT64_MIN;
	int64_t t75 = 50922599876249LL;

	t75 = (x329-((x330%x331)/x332));

	if (t75 != -755LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x333 = INT32_MIN;
	static int64_t x335 = -21LL;
	static int32_t x336 = INT32_MAX;
	static volatile int64_t t76 = 1186195LL;

	t76 = (x333-((x334%x335)/x336));

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x337 = 0U;
	uint64_t x338 = 3417393769786451465LLU;
	int32_t x339 = 24675;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t77 = 792161769LLU;

	t77 = (x337-((x338%x339)/x340));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x346 = UINT32_MAX;
	volatile uint32_t t78 = 31U;

	t78 = (x345-((x346%x347)/x348));

	if (t78 != 4294967107U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;
	static uint64_t t79 = 520569809690996544LLU;

	t79 = (x349-((x350%x351)/x352));

	if (t79 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = INT8_MIN;
	volatile int16_t x354 = INT16_MIN;

	t80 = (x353-((x354%x355)/x356));

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x357 = -1;
	uint64_t x358 = 15975219463273LLU;
	static volatile uint16_t x359 = 19U;
	static int8_t x360 = 3;

	t81 = (x357-((x358%x359)/x360));

	if (t81 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x365 = -612695095578283LL;
	int64_t x366 = -1LL;
	uint32_t x367 = 191U;
	int64_t x368 = -1LL;
	static volatile int64_t t82 = -266214814749LL;

	t82 = (x365-((x366%x367)/x368));

	if (t82 != -612695095578284LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = INT64_MAX;
	int8_t x374 = -4;
	volatile int16_t x375 = -1;
	static volatile int8_t x376 = INT8_MAX;
	int64_t t83 = INT64_MAX;

	t83 = (x373-((x374%x375)/x376));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x377 = UINT64_MAX;
	uint8_t x378 = UINT8_MAX;
	volatile int64_t x379 = -9LL;
	uint64_t t84 = UINT64_MAX;

	t84 = (x377-((x378%x379)/x380));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x381 = 53U;
	uint8_t x382 = UINT8_MAX;
	volatile int8_t x383 = INT8_MIN;
	int16_t x384 = INT16_MAX;

	t85 = (x381-((x382%x383)/x384));

	if (t85 != 53) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MAX;
	static volatile int32_t x387 = INT32_MAX;

	t86 = (x385-((x386%x387)/x388));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x389 = 14U;
	int16_t x390 = INT16_MIN;
	static int32_t x391 = 19;
	uint8_t x392 = 1U;
	int32_t t87 = 14;

	t87 = (x389-((x390%x391)/x392));

	if (t87 != 26) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x396 = 119047813551LL;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x393-((x394%x395)/x396));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x397 = 136064234198970966LLU;
	static volatile uint32_t x398 = UINT32_MAX;
	uint32_t x400 = 408930U;
	uint64_t t89 = 245453423150LLU;

	t89 = (x397-((x398%x399)/x400));

	if (t89 != 136064234198970966LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = INT8_MIN;
	uint8_t x402 = 0U;
	int64_t x403 = INT64_MAX;
	int8_t x404 = INT8_MAX;
	int64_t t90 = 13930LL;

	t90 = (x401-((x402%x403)/x404));

	if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x406 = 10875512742LLU;
	int32_t x408 = INT32_MAX;
	uint64_t t91 = 8227668LLU;

	t91 = (x405-((x406%x407)/x408));

	if (t91 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x409 = INT32_MIN;
	static uint16_t x410 = 12U;
	static int32_t x411 = -56;
	static int64_t x412 = INT64_MAX;
	static int64_t t92 = 2176246858038LL;

	t92 = (x409-((x410%x411)/x412));

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x413 = -1LL;
	volatile uint8_t x414 = UINT8_MAX;
	volatile int16_t x415 = -11632;
	int8_t x416 = 12;
	int64_t t93 = 508233LL;

	t93 = (x413-((x414%x415)/x416));

	if (t93 != -22LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x417 = -1;
	volatile uint16_t x418 = UINT16_MAX;
	volatile int8_t x419 = INT8_MAX;
	int8_t x420 = -1;
	int32_t t94 = -98635676;

	t94 = (x417-((x418%x419)/x420));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = 0;
	uint8_t x422 = 115U;
	volatile int32_t x423 = 38;
	volatile int32_t t95 = -2128;

	t95 = (x421-((x422%x423)/x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x425 = INT64_MAX;
	int16_t x426 = 0;
	volatile int16_t x427 = INT16_MAX;
	volatile int64_t x428 = -1LL;

	t96 = (x425-((x426%x427)/x428));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = -1;
	volatile int64_t x430 = 26439032957369LL;
	volatile uint8_t x431 = 3U;
	static uint8_t x432 = 20U;
	int64_t t97 = -225LL;

	t97 = (x429-((x430%x431)/x432));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x433 = 45440U;
	static int32_t x434 = INT32_MAX;
	int8_t x435 = 2;
	int64_t x436 = 11435510LL;
	static int64_t t98 = -164279734LL;

	t98 = (x433-((x434%x435)/x436));

	if (t98 != 45440LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x437 = INT16_MAX;
	uint32_t x438 = 57510388U;
	volatile int8_t x439 = INT8_MAX;
	volatile uint32_t t99 = 1164576577U;

	t99 = (x437-((x438%x439)/x440));

	if (t99 != 32767U) { NG(); } else { ; }
	
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

