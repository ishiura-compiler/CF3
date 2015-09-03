#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 61LL;
int8_t x12 = 13;
volatile uint8_t x14 = 24U;
int8_t x18 = -1;
int8_t x24 = INT8_MIN;
static int8_t x30 = INT8_MIN;
uint32_t x41 = UINT32_MAX;
int32_t x63 = INT32_MAX;
int32_t x73 = 12;
static int8_t x78 = INT8_MIN;
volatile int8_t x98 = -1;
uint32_t x99 = UINT32_MAX;
static volatile uint8_t x107 = 41U;
uint16_t x113 = 5U;
volatile uint64_t t25 = 2527653872084LLU;
static int8_t x138 = INT8_MAX;
int16_t x140 = 9387;
int64_t x146 = 6680400685995LL;
int8_t x150 = -1;
int64_t x153 = INT64_MIN;
static uint8_t x158 = 1U;
int16_t x167 = INT16_MIN;
uint64_t t35 = 34LLU;
uint32_t x172 = 1985352U;
uint32_t x176 = 663U;
static int32_t x187 = -1;
int32_t t40 = 1;
volatile uint8_t x192 = 1U;
uint64_t x194 = UINT64_MAX;
int32_t x195 = INT32_MAX;
volatile uint64_t t43 = 1862LLU;
int32_t x201 = -1;
int8_t x204 = 25;
int16_t x206 = INT16_MAX;
uint64_t t45 = 143143989750231422LLU;
volatile uint64_t t46 = 11461754687LLU;
volatile int32_t t47 = -755;
int8_t x224 = -61;
int64_t t51 = 969740484081014LL;
volatile int16_t x235 = 1619;
uint16_t x247 = 30U;
uint32_t x259 = UINT32_MAX;
int32_t x262 = -1;
volatile int64_t t58 = 0LL;
int8_t x269 = -3;
int32_t x276 = -1;
int32_t x286 = 59701481;
int16_t x292 = -1;
uint64_t x293 = UINT64_MAX;
int64_t x304 = INT64_MIN;
uint8_t x312 = 69U;
uint64_t x323 = 57152143LLU;
static volatile uint64_t t72 = 2036063520239LLU;
int64_t x325 = -1LL;
int32_t x326 = 60;
int64_t t73 = 9757504500485039LL;
int16_t x330 = INT16_MAX;
uint16_t x334 = UINT16_MAX;
int8_t x336 = INT8_MIN;
int16_t x341 = -102;
uint32_t t78 = 427331562U;
uint8_t x360 = UINT8_MAX;
int16_t x363 = 1070;
int64_t x376 = 2002205467LL;
int16_t x384 = -37;
volatile uint8_t x385 = 37U;
int16_t x406 = INT16_MIN;
volatile int32_t x407 = INT32_MIN;
volatile int64_t t88 = 171325380737458547LL;
static volatile uint64_t x411 = 4343056875142978LLU;
uint32_t x423 = 661816873U;
int8_t x431 = -1;
uint16_t x433 = UINT16_MAX;
int16_t x435 = INT16_MIN;
int16_t x436 = 0;
volatile int32_t t95 = -56100;
uint16_t x443 = 50U;
static int32_t x450 = INT32_MIN;
int64_t x452 = INT64_MIN;
volatile uint16_t x453 = UINT16_MAX;
int32_t t99 = 126956;


void f0(void) {
	int32_t x5 = -42943063;
	uint8_t x6 = 49U;
	static int8_t x7 = INT8_MIN;
	static volatile int64_t x8 = -1LL;

	t0 = (x5+((x6&x7)+x8));

	if (t0 != -42943064LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 377;
	int8_t x10 = INT8_MAX;
	uint8_t x11 = UINT8_MAX;
	int32_t t1 = 43623;

	t1 = (x9+((x10&x11)+x12));

	if (t1 != 517) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MIN;
	static int32_t x15 = INT32_MIN;
	uint16_t x16 = 0U;
	static int32_t t2 = -968405408;

	t2 = (x13+((x14&x15)+x16));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	static int16_t x19 = INT16_MIN;
	volatile uint64_t x20 = UINT64_MAX;
	uint64_t t3 = 2183918793692236LLU;

	t3 = (x17+((x18&x19)+x20));

	if (t3 != 32766LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	int32_t x22 = -1;
	uint64_t x23 = 148198134LLU;
	volatile uint64_t t4 = 306635999374LLU;

	t4 = (x21+((x22&x23)+x24));

	if (t4 != 148198133LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -2;
	int16_t x31 = -7;
	volatile int32_t x32 = -11;
	static volatile int32_t t5 = -492379;

	t5 = (x29+((x30&x31)+x32));

	if (t5 != -141) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = 60890;
	int8_t x34 = INT8_MIN;
	static int32_t x35 = -1522046;
	static int8_t x36 = INT8_MAX;
	static volatile int32_t t6 = 7935605;

	t6 = (x33+((x34&x35)+x36));

	if (t6 != -1461031) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 183835504LLU;
	static int16_t x38 = INT16_MIN;
	uint8_t x39 = 14U;
	volatile uint32_t x40 = 34383U;
	uint64_t t7 = 2LLU;

	t7 = (x37+((x38&x39)+x40));

	if (t7 != 183869887LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = INT8_MIN;
	uint32_t x43 = 0U;
	static uint32_t x44 = 4294162U;
	volatile uint32_t t8 = 1200U;

	t8 = (x41+((x42&x43)+x44));

	if (t8 != 4294161U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = 71;
	static int32_t x50 = -469;
	static uint64_t x51 = 21600468150LLU;
	int64_t x52 = 869LL;
	volatile uint64_t t9 = 972LLU;

	t9 = (x49+((x50&x51)+x52));

	if (t9 != 21600468942LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x53 = 1916112U;
	int32_t x54 = INT32_MIN;
	int16_t x55 = 1;
	static int16_t x56 = INT16_MIN;
	uint32_t t10 = 21061849U;

	t10 = (x53+((x54&x55)+x56));

	if (t10 != 1883344U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = -2443147021370140LL;
	int16_t x58 = 12119;
	static int16_t x59 = 36;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t11 = 246092601276461975LLU;

	t11 = (x57+((x58&x59)+x60));

	if (t11 != 18444300926688181479LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 4179703444LLU;
	int32_t x62 = INT32_MIN;
	volatile int8_t x64 = INT8_MAX;
	volatile uint64_t t12 = 2105796768231994LLU;

	t12 = (x61+((x62&x63)+x64));

	if (t12 != 4179703571LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x65 = UINT32_MAX;
	int64_t x66 = -3360LL;
	int32_t x67 = 2;
	int64_t x68 = INT64_MIN;
	static int64_t t13 = 673726855772785911LL;

	t13 = (x65+((x66&x67)+x68));

	if (t13 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 0;
	static int8_t x70 = -1;
	int8_t x71 = INT8_MIN;
	uint32_t x72 = UINT32_MAX;
	volatile uint32_t t14 = 193774296U;

	t14 = (x69+((x70&x71)+x72));

	if (t14 != 4294967167U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = -1;
	static uint64_t x75 = 19896447LLU;
	int8_t x76 = -1;
	uint64_t t15 = 13848268119019883LLU;

	t15 = (x73+((x74&x75)+x76));

	if (t15 != 19896458LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 1071556931151632653LLU;
	uint64_t t16 = 7LLU;

	t16 = (x77+((x78&x79)+x80));

	if (t16 != 1071556931151632653LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = 8721U;
	int8_t x86 = INT8_MAX;
	volatile int16_t x87 = -35;
	int16_t x88 = INT16_MAX;
	volatile int32_t t17 = -56;

	t17 = (x85+((x86&x87)+x88));

	if (t17 != 41581) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x89 = 262LL;
	int32_t x90 = INT32_MAX;
	uint8_t x91 = 8U;
	int32_t x92 = -31662787;
	volatile int64_t t18 = 1239652524LL;

	t18 = (x89+((x90&x91)+x92));

	if (t18 != -31662517LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = INT32_MIN;
	uint16_t x100 = 21U;
	volatile uint32_t t19 = 115U;

	t19 = (x97+((x98&x99)+x100));

	if (t19 != 2147483668U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = 393618404LLU;
	int8_t x102 = -2;
	int16_t x103 = 0;
	uint32_t x104 = 1839U;
	volatile uint64_t t20 = 5383LLU;

	t20 = (x101+((x102&x103)+x104));

	if (t20 != 393620243LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x105 = 42427283;
	int64_t x106 = -1LL;
	static volatile uint32_t x108 = 16132499U;
	volatile int64_t t21 = -269985731719307LL;

	t21 = (x105+((x106&x107)+x108));

	if (t21 != 58559823LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x114 = INT8_MIN;
	static uint8_t x115 = 0U;
	int32_t x116 = -770220;
	int32_t t22 = -24463081;

	t22 = (x113+((x114&x115)+x116));

	if (t22 != -770215) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x117 = INT32_MIN;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = INT64_MIN;
	uint16_t x120 = UINT16_MAX;
	uint64_t t23 = 10LLU;

	t23 = (x117+((x118&x119)+x120));

	if (t23 != 9223372034707357695LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = -1;
	static volatile int16_t x122 = INT16_MIN;
	uint32_t x123 = 59296466U;
	int32_t x124 = 616921396;
	volatile uint32_t t24 = 91U;

	t24 = (x121+((x122&x123)+x124));

	if (t24 != 676198707U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x125 = INT32_MAX;
	uint32_t x126 = 9U;
	volatile int8_t x127 = INT8_MIN;
	uint64_t x128 = UINT64_MAX;

	t25 = (x125+((x126&x127)+x128));

	if (t25 != 2147483646LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x129 = -1LL;
	static uint32_t x130 = UINT32_MAX;
	volatile int8_t x131 = -17;
	int8_t x132 = INT8_MIN;
	volatile int64_t t26 = -5LL;

	t26 = (x129+((x130&x131)+x132));

	if (t26 != 4294967150LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = -1LL;
	volatile int16_t x134 = INT16_MIN;
	uint64_t x135 = 2034LLU;
	static int32_t x136 = INT32_MAX;
	volatile uint64_t t27 = 325854LLU;

	t27 = (x133+((x134&x135)+x136));

	if (t27 != 2147483646LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x137 = INT32_MIN;
	volatile int64_t x139 = INT64_MAX;
	static int64_t t28 = 22475LL;

	t28 = (x137+((x138&x139)+x140));

	if (t28 != -2147474134LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 53U;
	uint64_t x142 = 90601LLU;
	static int16_t x143 = INT16_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	volatile uint64_t t29 = 1113207954LLU;

	t29 = (x141+((x142&x143)+x144));

	if (t29 != 25117LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 8;
	int64_t x147 = INT64_MIN;
	int64_t x148 = -1LL;
	int64_t t30 = -1171LL;

	t30 = (x145+((x146&x147)+x148));

	if (t30 != 7LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x149 = 71470638LLU;
	static int32_t x151 = -1;
	static int16_t x152 = -1;
	uint64_t t31 = 11311136LLU;

	t31 = (x149+((x150&x151)+x152));

	if (t31 != 71470636LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x154 = 45467256023916LLU;
	int8_t x155 = INT8_MIN;
	int64_t x156 = -1LL;
	volatile uint64_t t32 = 363822213662LLU;

	t32 = (x153+((x154&x155)+x156));

	if (t32 != 9223417504110799615LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x157 = -1;
	int32_t x159 = -188795039;
	int64_t x160 = -249389LL;
	int64_t t33 = 15LL;

	t33 = (x157+((x158&x159)+x160));

	if (t33 != -249389LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -1;
	int32_t x162 = -92;
	int8_t x163 = -1;
	uint16_t x164 = 80U;
	volatile int32_t t34 = -49998457;

	t34 = (x161+((x162&x163)+x164));

	if (t34 != -13) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MIN;
	uint64_t x168 = 795110143989467830LLU;

	t35 = (x165+((x166&x167)+x168));

	if (t35 != 10018482180844210870LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -1;
	volatile int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MAX;
	volatile uint32_t t36 = 1U;

	t36 = (x169+((x170&x171)+x172));

	if (t36 != 1985351U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x174 = UINT64_MAX;
	uint16_t x175 = UINT16_MAX;
	volatile uint64_t t37 = 9821LLU;

	t37 = (x173+((x174&x175)+x176));

	if (t37 != 18446744071562134166LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = 30790;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t38 = 1;

	t38 = (x177+((x178&x179)+x180));

	if (t38 != -32896) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = 2;
	static volatile int16_t x183 = -1;
	uint32_t x184 = 53U;
	static uint32_t t39 = 135543U;

	t39 = (x181+((x182&x183)+x184));

	if (t39 != 4294967223U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = 335;
	volatile int16_t x186 = 1;
	int8_t x188 = INT8_MAX;

	t40 = (x185+((x186&x187)+x188));

	if (t40 != 463) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 358U;
	volatile int32_t x190 = -1;
	volatile int8_t x191 = 0;
	int32_t t41 = -2;

	t41 = (x189+((x190&x191)+x192));

	if (t41 != 359) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = -1;
	uint8_t x196 = 43U;
	volatile uint64_t t42 = 116748965500LLU;

	t42 = (x193+((x194&x195)+x196));

	if (t42 != 2147483689LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = 125U;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = UINT16_MAX;
	volatile uint64_t x200 = 1735567665LLU;

	t43 = (x197+((x198&x199)+x200));

	if (t43 != 1735567790LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x202 = INT8_MIN;
	uint32_t x203 = UINT32_MAX;
	volatile uint32_t t44 = 14556724U;

	t44 = (x201+((x202&x203)+x204));

	if (t44 != 4294967192U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MIN;
	uint64_t x207 = 4148418374055735828LLU;
	static uint32_t x208 = 439983684U;

	t45 = (x205+((x206&x207)+x208));

	if (t45 != 18446744072002064472LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = -1;
	volatile int32_t x210 = INT32_MIN;
	static uint64_t x211 = 32020LLU;
	uint8_t x212 = 13U;

	t46 = (x209+((x210&x211)+x212));

	if (t46 != 12LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x213 = UINT16_MAX;
	volatile uint16_t x214 = 25U;
	static volatile int8_t x215 = -1;
	static int8_t x216 = INT8_MIN;

	t47 = (x213+((x214&x215)+x216));

	if (t47 != 65432) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int64_t x218 = -1LL;
	volatile uint8_t x219 = 3U;
	static int8_t x220 = INT8_MIN;
	int64_t t48 = -1118611LL;

	t48 = (x217+((x218&x219)+x220));

	if (t48 != 65410LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MAX;
	uint8_t x222 = 14U;
	volatile uint8_t x223 = UINT8_MAX;
	volatile int64_t t49 = -5216LL;

	t49 = (x221+((x222&x223)+x224));

	if (t49 != 9223372036854775760LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x225 = -1LL;
	static uint64_t x226 = UINT64_MAX;
	uint8_t x227 = 29U;
	int16_t x228 = INT16_MAX;
	uint64_t t50 = 9LLU;

	t50 = (x225+((x226&x227)+x228));

	if (t50 != 32795LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = INT64_MIN;
	static uint32_t x230 = 14445U;
	int16_t x231 = 12203;
	static int64_t x232 = 536165212838545LL;

	t51 = (x229+((x230&x231)+x232));

	if (t51 != -9222835871641926982LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = -1;
	int16_t x234 = INT16_MIN;
	static uint32_t x236 = UINT32_MAX;
	uint32_t t52 = 11U;

	t52 = (x233+((x234&x235)+x236));

	if (t52 != 4294967294U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x237 = INT16_MAX;
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = 1507288LL;
	int8_t x240 = -1;
	static int64_t t53 = 7342LL;

	t53 = (x237+((x238&x239)+x240));

	if (t53 != 98262LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MAX;
	static int16_t x242 = -1;
	volatile int16_t x243 = 3689;
	int64_t x244 = INT64_MIN;
	int64_t t54 = 1391548LL;

	t54 = (x241+((x242&x243)+x244));

	if (t54 != -9223372036854739352LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x245 = UINT8_MAX;
	int64_t x246 = INT64_MAX;
	uint16_t x248 = 5U;
	volatile int64_t t55 = -291646914LL;

	t55 = (x245+((x246&x247)+x248));

	if (t55 != 290LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MIN;
	volatile int8_t x254 = INT8_MIN;
	uint64_t x255 = 4970360391882LLU;
	int8_t x256 = -1;
	volatile uint64_t t56 = 9266264LLU;

	t56 = (x253+((x254&x255)+x256));

	if (t56 != 4970360359039LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 2LLU;
	static volatile int16_t x258 = INT16_MAX;
	int16_t x260 = INT16_MIN;
	uint64_t t57 = 382LLU;

	t57 = (x257+((x258&x259)+x260));

	if (t57 != 4294967297LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x261 = -1;
	static volatile int8_t x263 = -1;
	volatile int64_t x264 = INT64_MAX;

	t58 = (x261+((x262&x263)+x264));

	if (t58 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x265 = -264297;
	int8_t x266 = INT8_MIN;
	static int8_t x267 = INT8_MAX;
	static volatile int64_t x268 = 7571LL;
	volatile int64_t t59 = 49168643722896LL;

	t59 = (x265+((x266&x267)+x268));

	if (t59 != -256726LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x270 = 13760960LL;
	int8_t x271 = 1;
	int16_t x272 = INT16_MAX;
	volatile int64_t t60 = -58056039120192473LL;

	t60 = (x269+((x270&x271)+x272));

	if (t60 != 32764LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	uint64_t x274 = 1LLU;
	static int64_t x275 = INT64_MIN;
	uint64_t t61 = 4312485404213LLU;

	t61 = (x273+((x274&x275)+x276));

	if (t61 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = 81156879064257737LL;
	int32_t x278 = INT32_MAX;
	int16_t x279 = INT16_MIN;
	volatile int32_t x280 = INT32_MIN;
	volatile int64_t t62 = 227033990547867LL;

	t62 = (x277+((x278&x279)+x280));

	if (t62 != 81156879064224969LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = -1LL;
	static volatile uint16_t x282 = 1U;
	int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MIN;
	int64_t t63 = -38167529844LL;

	t63 = (x281+((x282&x283)+x284));

	if (t63 != -2147483649LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x285 = INT32_MIN;
	int32_t x287 = INT32_MAX;
	volatile uint64_t x288 = 6150395025LLU;
	uint64_t t64 = 4160LLU;

	t64 = (x285+((x286&x287)+x288));

	if (t64 != 4062612858LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = -1;
	int8_t x290 = INT8_MIN;
	static uint16_t x291 = UINT16_MAX;
	static volatile int32_t t65 = 37;

	t65 = (x289+((x290&x291)+x292));

	if (t65 != 65406) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x294 = -1;
	int64_t x295 = -1LL;
	volatile int16_t x296 = -111;
	volatile uint64_t t66 = 2644178641LLU;

	t66 = (x293+((x294&x295)+x296));

	if (t66 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = -26LL;
	static uint64_t x302 = 0LLU;
	int64_t x303 = INT64_MIN;
	uint64_t t67 = 158445731LLU;

	t67 = (x301+((x302&x303)+x304));

	if (t67 != 9223372036854775782LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x305 = -1;
	static uint16_t x306 = 19U;
	int64_t x307 = INT64_MAX;
	int32_t x308 = -1;
	volatile int64_t t68 = 0LL;

	t68 = (x305+((x306&x307)+x308));

	if (t68 != 17LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = 14701;
	static volatile uint8_t x310 = 0U;
	int8_t x311 = INT8_MIN;
	volatile int32_t t69 = 0;

	t69 = (x309+((x310&x311)+x312));

	if (t69 != 14770) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = INT16_MAX;
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = INT16_MAX;
	static uint64_t x316 = 355LLU;
	uint64_t t70 = 138405465371868LLU;

	t70 = (x313+((x314&x315)+x316));

	if (t70 != 65889LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x317 = -162126580309908LL;
	static uint32_t x318 = 54123282U;
	volatile uint8_t x319 = 52U;
	volatile uint32_t x320 = UINT32_MAX;
	int64_t t71 = 5168751LL;

	t71 = (x317+((x318&x319)+x320));

	if (t71 != -162126580309893LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x321 = -1;
	static int64_t x322 = -1LL;
	volatile int8_t x324 = INT8_MIN;

	t72 = (x321+((x322&x323)+x324));

	if (t72 != 57152014LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x327 = UINT32_MAX;
	int64_t x328 = 8076345250LL;

	t73 = (x325+((x326&x327)+x328));

	if (t73 != 8076345309LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	int16_t x331 = -1;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t74 = 2402;

	t74 = (x329+((x330&x331)+x332));

	if (t74 != 65534) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = 129428792478144LLU;
	int64_t x335 = -1LL;
	volatile uint64_t t75 = 13542LLU;

	t75 = (x333+((x334&x335)+x336));

	if (t75 != 129428792543551LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x337 = INT32_MIN;
	volatile int32_t x338 = INT32_MIN;
	uint64_t x339 = 938LLU;
	int64_t x340 = -60155550254LL;
	volatile uint64_t t76 = 70651825649418463LLU;

	t76 = (x337+((x338&x339)+x340));

	if (t76 != 18446744011406517714LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x342 = UINT16_MAX;
	static int8_t x343 = -8;
	int16_t x344 = INT16_MIN;
	int32_t t77 = -805515194;

	t77 = (x341+((x342&x343)+x344));

	if (t77 != 32658) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x345 = UINT32_MAX;
	int8_t x346 = 21;
	uint8_t x347 = 0U;
	int8_t x348 = INT8_MIN;

	t78 = (x345+((x346&x347)+x348));

	if (t78 != 4294967167U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = INT32_MAX;
	int8_t x354 = INT8_MIN;
	volatile int16_t x355 = INT16_MAX;
	uint64_t x356 = 7536072377LLU;
	static volatile uint64_t t79 = 3400988830833270437LLU;

	t79 = (x353+((x354&x355)+x356));

	if (t79 != 9683588664LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x357 = 9214427256728901LLU;
	uint8_t x358 = UINT8_MAX;
	volatile int16_t x359 = -1931;
	static volatile uint64_t t80 = 23668925168499LLU;

	t80 = (x357+((x358&x359)+x360));

	if (t80 != 9214427256729273LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x361 = -1;
	static int64_t x362 = INT64_MIN;
	volatile int32_t x364 = -1;
	int64_t t81 = -411096457982884LL;

	t81 = (x361+((x362&x363)+x364));

	if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x369 = INT32_MIN;
	static volatile uint16_t x370 = UINT16_MAX;
	volatile int64_t x371 = INT64_MAX;
	volatile int32_t x372 = INT32_MAX;
	static volatile int64_t t82 = -61473LL;

	t82 = (x369+((x370&x371)+x372));

	if (t82 != 65534LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x373 = 145U;
	static uint64_t x374 = 2673240059762400LLU;
	volatile uint16_t x375 = 12U;
	uint64_t t83 = 3107LLU;

	t83 = (x373+((x374&x375)+x376));

	if (t83 != 2002205612LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x381 = 19195237766LLU;
	uint32_t x382 = UINT32_MAX;
	volatile uint16_t x383 = UINT16_MAX;
	volatile uint64_t t84 = 381LLU;

	t84 = (x381+((x382&x383)+x384));

	if (t84 != 19195303264LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x386 = -1;
	volatile uint8_t x387 = 15U;
	uint16_t x388 = 18101U;
	static int32_t t85 = -165;

	t85 = (x385+((x386&x387)+x388));

	if (t85 != 18153) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x393 = 804849LLU;
	uint32_t x394 = 60U;
	uint8_t x395 = 8U;
	int16_t x396 = 1970;
	uint64_t t86 = 25LLU;

	t86 = (x393+((x394&x395)+x396));

	if (t86 != 806827LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = -1;
	volatile int32_t x402 = 3;
	int8_t x403 = INT8_MIN;
	int64_t x404 = -301326LL;
	volatile int64_t t87 = -320LL;

	t87 = (x401+((x402&x403)+x404));

	if (t87 != -301327LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x405 = 1903772LL;
	volatile uint16_t x408 = 18277U;

	t88 = (x405+((x406&x407)+x408));

	if (t88 != -2145561599LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x409 = 1U;
	uint32_t x410 = 0U;
	static uint16_t x412 = UINT16_MAX;
	static volatile uint64_t t89 = 22008LLU;

	t89 = (x409+((x410&x411)+x412));

	if (t89 != 65536LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x413 = 54U;
	static int16_t x414 = INT16_MIN;
	int16_t x415 = -1834;
	int16_t x416 = -1;
	int32_t t90 = 3;

	t90 = (x413+((x414&x415)+x416));

	if (t90 != -32715) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = INT16_MIN;
	uint8_t x418 = 108U;
	int64_t x419 = INT64_MIN;
	int8_t x420 = -33;
	volatile int64_t t91 = -14LL;

	t91 = (x417+((x418&x419)+x420));

	if (t91 != -32801LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = 61685252;
	static int8_t x422 = INT8_MIN;
	int16_t x424 = 351;
	static uint32_t t92 = 2645U;

	t92 = (x421+((x422&x423)+x424));

	if (t92 != 723502435U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x429 = -463048859;
	uint32_t x430 = 4U;
	int8_t x432 = INT8_MAX;
	uint32_t t93 = 0U;

	t93 = (x429+((x430&x431)+x432));

	if (t93 != 3831918568U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x434 = -1;
	int32_t t94 = -11654;

	t94 = (x433+((x434&x435)+x436));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x437 = UINT16_MAX;
	volatile int32_t x438 = 626136;
	volatile uint8_t x439 = 75U;
	uint8_t x440 = 15U;

	t95 = (x437+((x438&x439)+x440));

	if (t95 != 65622) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x441 = UINT8_MAX;
	static int16_t x442 = 16;
	volatile uint16_t x444 = 5U;
	volatile int32_t t96 = 3361191;

	t96 = (x441+((x442&x443)+x444));

	if (t96 != 276) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = -1;
	static uint8_t x446 = 0U;
	uint16_t x447 = 108U;
	uint64_t x448 = 24867144LLU;
	volatile uint64_t t97 = 496135727196814LLU;

	t97 = (x445+((x446&x447)+x448));

	if (t97 != 24867143LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x449 = UINT16_MAX;
	int16_t x451 = INT16_MAX;
	static int64_t t98 = -215941695075429451LL;

	t98 = (x449+((x450&x451)+x452));

	if (t98 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x454 = UINT8_MAX;
	static int32_t x455 = INT32_MAX;
	int8_t x456 = -3;

	t99 = (x453+((x454&x455)+x456));

	if (t99 != 65787) { NG(); } else { ; }
	
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

