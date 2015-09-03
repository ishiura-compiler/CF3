#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -63;
int16_t x4 = INT16_MIN;
static volatile uint64_t t1 = 13965629LLU;
static volatile uint64_t x9 = 5481317LLU;
volatile int8_t x13 = 9;
int32_t t3 = -1108;
uint64_t x17 = UINT64_MAX;
int64_t x27 = INT64_MIN;
uint64_t x31 = UINT64_MAX;
volatile uint64_t t7 = 1LLU;
static volatile int8_t x36 = INT8_MIN;
int16_t x43 = INT16_MIN;
static uint32_t x48 = 2571U;
volatile int64_t t11 = -1041169413243LL;
static int8_t x54 = -1;
static int16_t x58 = INT16_MAX;
volatile int8_t x68 = INT8_MAX;
static int32_t x71 = -1;
uint16_t x72 = UINT16_MAX;
int32_t t17 = 290;
static int32_t t19 = -3;
uint8_t x88 = 2U;
int8_t x93 = INT8_MAX;
static volatile int64_t t23 = 69832LL;
static volatile int64_t x114 = -1LL;
volatile uint16_t x119 = 1307U;
uint16_t x145 = UINT16_MAX;
int64_t x151 = 277474801686744605LL;
static int32_t x155 = INT32_MIN;
volatile int64_t t31 = 58188LL;
volatile int64_t x166 = -433247490117LL;
uint64_t x172 = 264920369LLU;
uint32_t x175 = 52U;
int32_t x178 = -5552647;
int8_t x179 = -1;
volatile int32_t x184 = 54;
uint16_t x186 = 428U;
uint32_t x187 = 27U;
int16_t x188 = INT16_MIN;
int64_t t39 = -14458588LL;
int8_t x189 = 6;
int8_t x195 = INT8_MAX;
static volatile int8_t x196 = 1;
int64_t t41 = -8523802696LL;
int64_t x197 = INT64_MIN;
int32_t x205 = -1;
int16_t x206 = INT16_MIN;
volatile uint64_t t44 = 72995LLU;
static int64_t x213 = INT64_MIN;
volatile uint32_t x219 = 8393267U;
volatile uint64_t t47 = 16051LLU;
int16_t x225 = INT16_MIN;
static uint64_t x230 = UINT64_MAX;
static uint64_t x231 = UINT64_MAX;
uint16_t x252 = UINT16_MAX;
int32_t x265 = INT32_MIN;
int16_t x273 = INT16_MIN;
uint16_t x276 = 3U;
uint64_t x284 = 245LLU;
uint64_t t59 = 6597145427LLU;
static int8_t x285 = -62;
int8_t x286 = -1;
int64_t x287 = INT64_MAX;
volatile uint64_t t61 = 32157LLU;
volatile int64_t x298 = 1634298LL;
uint32_t x299 = UINT32_MAX;
int32_t x305 = -928545;
int8_t x309 = -17;
static uint32_t x311 = 66508202U;
int16_t x315 = 12667;
uint64_t x317 = 7111767749LLU;
uint64_t t68 = 6703441841855LLU;
uint64_t x331 = 3100495412216LLU;
volatile int8_t x333 = INT8_MIN;
int32_t x334 = -1;
uint8_t x350 = 46U;
static int8_t x353 = INT8_MAX;
uint16_t x354 = 7U;
uint8_t x355 = UINT8_MAX;
int32_t x356 = -4062;
volatile uint64_t x366 = UINT64_MAX;
uint16_t x375 = 25U;
volatile int64_t t81 = -146987701104LL;
int8_t x381 = -6;
volatile int32_t t82 = 3755;
uint32_t x386 = 9287845U;
int32_t x389 = -1;
uint32_t x401 = 81U;
int32_t x404 = -1;
uint64_t x405 = 64977918LLU;
int32_t x407 = INT32_MIN;
int8_t x411 = INT8_MIN;
volatile int64_t t89 = -1529812556LL;
int8_t x414 = INT8_MIN;
int32_t x416 = -158;
int16_t x422 = INT16_MIN;
int32_t x426 = 293;
static int16_t x431 = -1;
volatile int64_t x436 = -3148073305297942548LL;
volatile uint64_t t94 = 3138971LLU;
uint64_t x438 = 2168035442LLU;
volatile uint64_t t95 = 4543LLU;
int16_t x445 = INT16_MIN;
uint64_t x446 = UINT64_MAX;
int8_t x447 = INT8_MAX;
int8_t x453 = INT8_MAX;
static volatile int16_t x462 = INT16_MIN;


void f0(void) {
	volatile int16_t x1 = -1;
	int32_t x2 = -1584;
	int32_t t0 = 32343;

	t0 = (x1&(x2/(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile uint8_t x6 = 9U;
	volatile uint64_t x7 = 1140215219186LLU;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5&(x6/(x7+x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MAX;
	uint16_t x12 = 3U;
	volatile uint64_t t2 = 60723662432266868LLU;

	t2 = (x9&(x10/(x11+x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = 842960852;
	int8_t x15 = 0;
	int16_t x16 = 2507;

	t3 = (x13&(x14/(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -2514;
	uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 2757U;
	uint64_t t4 = 2LLU;

	t4 = (x17&(x18/(x19+x20)));

	if (t4 != 62891LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 20708647622236LL;
	uint32_t x22 = 24U;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = 1;
	volatile int64_t t5 = 2437183774LL;

	t5 = (x21&(x22/(x23+x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 8585LL;
	volatile int16_t x26 = 0;
	uint8_t x28 = UINT8_MAX;
	int64_t t6 = 1614LL;

	t6 = (x25&(x26/(x27+x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -3421731692347LL;
	uint16_t x30 = 7U;
	int16_t x32 = -1;

	t7 = (x29&(x30/(x31+x32)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile uint8_t x34 = 31U;
	static uint32_t x35 = UINT32_MAX;
	uint32_t t8 = 27971U;

	t8 = (x33&(x34/(x35+x36)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 1;
	static uint8_t x38 = 3U;
	int32_t x39 = 187434341;
	int16_t x40 = 1892;
	volatile int32_t t9 = -562;

	t9 = (x37&(x38/(x39+x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	uint32_t x42 = 2U;
	volatile int8_t x44 = -11;
	uint32_t t10 = 20827U;

	t10 = (x41&(x42/(x43+x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	uint32_t x46 = 3U;
	int16_t x47 = INT16_MIN;

	t11 = (x45&(x46/(x47+x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MAX;
	volatile int64_t t12 = 1821929LL;

	t12 = (x49&(x50/(x51+x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x55 = -1LL;
	uint8_t x56 = 6U;
	volatile int64_t t13 = -8785983184893444LL;

	t13 = (x53&(x54/(x55+x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint8_t x59 = 1U;
	volatile int16_t x60 = INT16_MIN;
	static int32_t t14 = -56902190;

	t14 = (x57&(x58/(x59+x60)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 16101U;
	int64_t x62 = 719866422779194LL;
	int32_t x63 = INT32_MIN;
	static int32_t x64 = 2106;
	static volatile int64_t t15 = -20LL;

	t15 = (x61&(x62/(x63+x64)));

	if (t15 != 8832LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	int32_t x66 = INT32_MAX;
	int32_t x67 = INT32_MIN;
	volatile int32_t t16 = 24661681;

	t16 = (x65&(x66/(x67+x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 999;
	static int16_t x70 = 0;

	t17 = (x69&(x70/(x71+x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 13298266LL;
	uint32_t x74 = 340838739U;
	static uint16_t x75 = 223U;
	volatile int64_t x76 = 10685188812LL;
	static int64_t t18 = -72158668850062078LL;

	t18 = (x73&(x74/(x75+x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 107U;
	volatile int16_t x82 = INT16_MIN;
	int16_t x83 = 14;
	uint8_t x84 = 34U;

	t19 = (x81&(x82/(x83+x84)));

	if (t19 != 66) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	static int16_t x86 = -1;
	static uint8_t x87 = UINT8_MAX;
	volatile int64_t t20 = 32LL;

	t20 = (x85&(x86/(x87+x88)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x94 = -5518;
	uint32_t x95 = 413586280U;
	volatile int32_t x96 = INT32_MIN;
	volatile uint32_t t21 = 126U;

	t21 = (x93&(x94/(x95+x96)));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x101 = UINT64_MAX;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = -1;
	int64_t x104 = 11121919424986LL;
	volatile uint64_t t22 = 6976687383084134LLU;

	t22 = (x101&(x102/(x103+x104)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x105 = 3;
	int32_t x106 = 16829363;
	volatile int64_t x107 = -726661935423252861LL;
	int8_t x108 = INT8_MIN;

	t23 = (x105&(x106/(x107+x108)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 9309761044LLU;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = UINT64_MAX;
	uint64_t t24 = 6246LLU;

	t24 = (x113&(x114/(x115+x116)));

	if (t24 != 8589934592LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = 1U;
	int32_t x118 = -1;
	static int64_t x120 = -561062711443LL;
	int64_t t25 = 3414305679465401LL;

	t25 = (x117&(x118/(x119+x120)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -5;
	int64_t x122 = INT64_MIN;
	int64_t x123 = 878653LL;
	int32_t x124 = INT32_MAX;
	volatile int64_t t26 = -50072989926908LL;

	t26 = (x121&(x122/(x123+x124)));

	if (t26 != -4293210710LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MIN;
	uint32_t x126 = 2031538817U;
	uint64_t x127 = UINT64_MAX;
	volatile int8_t x128 = -1;
	uint64_t t27 = 31LLU;

	t27 = (x125&(x126/(x127+x128)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	volatile int64_t x134 = -1LL;
	volatile uint32_t x135 = 751U;
	int8_t x136 = 1;
	volatile int64_t t28 = -303120LL;

	t28 = (x133&(x134/(x135+x136)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = -502920354686959758LL;
	static uint8_t x148 = UINT8_MAX;
	int64_t t29 = -36543654886LL;

	t29 = (x145&(x146/(x147+x148)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = 242935624113290503LL;
	static int64_t x150 = INT64_MAX;
	volatile int64_t x152 = -10592866007792478LL;
	static volatile int64_t t30 = 476338111LL;

	t30 = (x149&(x150/(x151+x152)));

	if (t30 != 2LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = -1LL;
	int16_t x154 = 824;
	int8_t x156 = INT8_MAX;

	t31 = (x153&(x154/(x155+x156)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = -3805398779429LL;
	int32_t x158 = INT32_MIN;
	int8_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	int64_t t32 = -12983503588LL;

	t32 = (x157&(x158/(x159+x160)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = 1246587982359263921LLU;
	volatile int8_t x162 = INT8_MAX;
	int64_t x163 = -1LL;
	int32_t x164 = INT32_MIN;
	volatile uint64_t t33 = 256792409156325126LLU;

	t33 = (x161&(x162/(x163+x164)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x165 = INT16_MAX;
	uint16_t x167 = 14664U;
	int16_t x168 = INT16_MIN;
	int64_t t34 = 17364LL;

	t34 = (x165&(x166/(x167+x168)));

	if (t34 != 10396LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x169 = 5387705;
	static volatile int32_t x170 = INT32_MAX;
	uint32_t x171 = UINT32_MAX;
	uint64_t t35 = 4612379089LLU;

	t35 = (x169&(x170/(x171+x172)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x173 = -1LL;
	static uint8_t x174 = 28U;
	int8_t x176 = -1;
	int64_t t36 = -106463637LL;

	t36 = (x173&(x174/(x175+x176)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = -676LL;
	static int16_t x180 = -96;
	volatile int64_t t37 = -170629681386669LL;

	t37 = (x177&(x178/(x179+x180)));

	if (t37 != 56600LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -1;
	volatile uint32_t x182 = UINT32_MAX;
	static int16_t x183 = INT16_MAX;
	volatile uint32_t t38 = 49223361U;

	t38 = (x181&(x182/(x183+x184)));

	if (t38 != 130860U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = -1LL;

	t39 = (x185&(x186/(x187+x188)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x190 = INT64_MIN;
	uint8_t x191 = 6U;
	int8_t x192 = INT8_MIN;
	int64_t t40 = -1238428724035LL;

	t40 = (x189&(x190/(x191+x192)));

	if (t40 != 4LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = INT64_MIN;
	uint32_t x194 = 1909U;

	t41 = (x193&(x194/(x195+x196)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x198 = -1;
	volatile int16_t x199 = INT16_MIN;
	volatile uint32_t x200 = 60831461U;
	int64_t t42 = -57636797669LL;

	t42 = (x197&(x198/(x199+x200)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MIN;
	volatile int64_t x202 = 110LL;
	static int16_t x203 = INT16_MIN;
	volatile int8_t x204 = INT8_MIN;
	int64_t t43 = 97718549259LL;

	t43 = (x201&(x202/(x203+x204)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x207 = 930233546401LLU;
	int32_t x208 = -1424482;

	t44 = (x205&(x206/(x207+x208)));

	if (t44 != 19830259LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 7833881601365LLU;
	uint32_t x216 = 648150U;
	volatile uint64_t t45 = 1685373LLU;

	t45 = (x213&(x214/(x215+x216)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = INT16_MAX;
	static int32_t x218 = -458628;
	int32_t x220 = -41486;
	static volatile uint32_t t46 = 13078024U;

	t46 = (x217&(x218/(x219+x220)));

	if (t46 != 514U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = INT8_MIN;
	volatile uint64_t x222 = 1041430472475653LLU;
	static uint16_t x223 = 8U;
	volatile int8_t x224 = -11;

	t47 = (x221&(x222/(x223+x224)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x226 = INT16_MIN;
	uint16_t x227 = 1U;
	uint64_t x228 = 40108LLU;
	static volatile uint64_t t48 = 356620831497191LLU;

	t48 = (x225&(x226/(x227+x228)));

	if (t48 != 459915332550656LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	int8_t x232 = -1;
	static uint64_t t49 = 228628827151LLU;

	t49 = (x229&(x230/(x231+x232)));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = INT64_MIN;
	static uint8_t x234 = UINT8_MAX;
	int32_t x235 = INT32_MIN;
	int8_t x236 = 3;
	int64_t t50 = -34480LL;

	t50 = (x233&(x234/(x235+x236)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x237 = 115;
	volatile uint32_t x238 = 7630998U;
	int8_t x239 = 0;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t51 = -60191937659092LL;

	t51 = (x237&(x238/(x239+x240)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x245 = INT64_MIN;
	volatile int8_t x246 = INT8_MAX;
	volatile uint64_t x247 = 221824LLU;
	uint32_t x248 = 1308U;
	volatile uint64_t t52 = 1LLU;

	t52 = (x245&(x246/(x247+x248)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x249 = 0U;
	uint32_t x250 = 19U;
	uint64_t x251 = 55300807951776674LLU;
	static volatile uint64_t t53 = 5310330484LLU;

	t53 = (x249&(x250/(x251+x252)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = 13777;
	int64_t x258 = -547486584261395LL;
	int64_t x259 = -1LL;
	volatile uint64_t x260 = 2603723752905027624LLU;
	volatile uint64_t t54 = 4090949401188925LLU;

	t54 = (x257&(x258/(x259+x260)));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x261 = 0;
	int32_t x262 = INT32_MAX;
	int32_t x263 = 12553;
	int32_t x264 = INT32_MIN;
	int32_t t55 = -3;

	t55 = (x261&(x262/(x263+x264)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x266 = 10868U;
	uint64_t x267 = 12909LLU;
	uint8_t x268 = 25U;
	volatile uint64_t t56 = 0LLU;

	t56 = (x265&(x266/(x267+x268)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = -594047682LL;
	uint8_t x270 = UINT8_MAX;
	int16_t x271 = 6215;
	int64_t x272 = -1LL;
	static int64_t t57 = -489LL;

	t57 = (x269&(x270/(x271+x272)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x274 = -1;
	int16_t x275 = INT16_MIN;
	static volatile int32_t t58 = 1886;

	t58 = (x273&(x274/(x275+x276)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = -1;
	int64_t x283 = 126LL;

	t59 = (x281&(x282/(x283+x284)));

	if (t59 != 49721682139378816LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x288 = 63496270LLU;
	uint64_t t60 = 538LLU;

	t60 = (x285&(x286/(x287+x288)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = -1;
	static uint8_t x294 = UINT8_MAX;
	static int32_t x295 = INT32_MIN;
	static uint64_t x296 = 0LLU;

	t61 = (x293&(x294/(x295+x296)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = INT32_MIN;
	volatile int32_t x300 = INT32_MIN;
	int64_t t62 = -17825739215995062LL;

	t62 = (x297&(x298/(x299+x300)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x301 = -1LL;
	uint32_t x302 = 24903U;
	uint16_t x303 = UINT16_MAX;
	static uint32_t x304 = 3U;
	volatile int64_t t63 = 126500200LL;

	t63 = (x301&(x302/(x303+x304)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x306 = 11;
	int16_t x307 = INT16_MAX;
	static int8_t x308 = -1;
	volatile int32_t t64 = -27;

	t64 = (x305&(x306/(x307+x308)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x310 = 3794;
	volatile int32_t x312 = INT32_MIN;
	volatile uint32_t t65 = 15991724U;

	t65 = (x309&(x310/(x311+x312)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x313 = 51;
	static int32_t x314 = -71269;
	uint32_t x316 = 127792468U;
	volatile uint32_t t66 = 1395416U;

	t66 = (x313&(x314/(x315+x316)));

	if (t66 != 33U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x318 = -8609184LL;
	int8_t x319 = INT8_MAX;
	int64_t x320 = -1LL;
	uint64_t t67 = 3501890LLU;

	t67 = (x317&(x318/(x319+x320)));

	if (t67 != 7111767040LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x321 = 1887468517869LLU;
	int32_t x322 = 21320;
	int64_t x323 = INT64_MIN;
	volatile uint8_t x324 = 0U;

	t68 = (x321&(x322/(x323+x324)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = 1;
	volatile uint64_t x326 = UINT64_MAX;
	int64_t x327 = 280846497LL;
	static volatile uint16_t x328 = UINT16_MAX;
	volatile uint64_t t69 = 244845412979LLU;

	t69 = (x325&(x326/(x327+x328)));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x329 = 26248524869889LL;
	int8_t x330 = 6;
	volatile uint32_t x332 = UINT32_MAX;
	static volatile uint64_t t70 = 8067569247LLU;

	t70 = (x329&(x330/(x331+x332)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x335 = UINT32_MAX;
	volatile int32_t x336 = -17414;
	volatile uint32_t t71 = 7894567U;

	t71 = (x333&(x334/(x335+x336)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = 66316335983904LL;
	uint16_t x338 = 0U;
	int16_t x339 = INT16_MAX;
	volatile uint32_t x340 = 6591504U;
	volatile int64_t t72 = -8000LL;

	t72 = (x337&(x338/(x339+x340)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x341 = INT8_MIN;
	uint16_t x342 = 1U;
	uint8_t x343 = UINT8_MAX;
	int32_t x344 = INT32_MIN;
	int32_t t73 = -22727728;

	t73 = (x341&(x342/(x343+x344)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x345 = 0;
	uint8_t x346 = 1U;
	volatile uint64_t x347 = 235008375295918LLU;
	volatile int8_t x348 = -5;
	static volatile uint64_t t74 = 241337589986634351LLU;

	t74 = (x345&(x346/(x347+x348)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x349 = -1;
	int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t75 = 7220;

	t75 = (x349&(x350/(x351+x352)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t t76 = -1653;

	t76 = (x353&(x354/(x355+x356)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x358 = 1U;
	static uint64_t x359 = 552203175648849126LLU;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t77 = 3369322331198032791LLU;

	t77 = (x357&(x358/(x359+x360)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = -115LL;
	uint64_t x362 = 1795885187587LLU;
	uint64_t x363 = 27900758LLU;
	volatile int32_t x364 = INT32_MAX;
	uint64_t t78 = 2786830438375510499LLU;

	t78 = (x361&(x362/(x363+x364)));

	if (t78 != 777LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x365 = 55U;
	int8_t x367 = INT8_MAX;
	static int16_t x368 = INT16_MIN;
	volatile uint64_t t79 = 625721644345770911LLU;

	t79 = (x365&(x366/(x367+x368)));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = INT32_MIN;
	static volatile int64_t x370 = INT64_MIN;
	volatile uint8_t x371 = 19U;
	uint16_t x372 = UINT16_MAX;
	int64_t t80 = 52202LL;

	t80 = (x369&(x370/(x371+x372)));

	if (t80 != -140700981133312LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = UINT16_MAX;
	static uint32_t x374 = 1188655U;
	int64_t x376 = INT64_MIN;

	t81 = (x373&(x374/(x375+x376)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x382 = INT8_MAX;
	uint8_t x383 = 0U;
	int8_t x384 = 10;

	t82 = (x381&(x382/(x383+x384)));

	if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x385 = INT64_MAX;
	volatile uint16_t x387 = 781U;
	static int32_t x388 = INT32_MIN;
	volatile int64_t t83 = -140264854557160LL;

	t83 = (x385&(x386/(x387+x388)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x390 = 1;
	uint32_t x391 = 0U;
	uint16_t x392 = 3988U;
	static volatile uint32_t t84 = 5U;

	t84 = (x389&(x390/(x391+x392)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = INT64_MAX;
	volatile int64_t x394 = -1LL;
	uint8_t x395 = UINT8_MAX;
	static int16_t x396 = -1;
	static int64_t t85 = 21999730883325LL;

	t85 = (x393&(x394/(x395+x396)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x397 = INT16_MAX;
	static int16_t x398 = -1;
	volatile uint32_t x399 = 398347U;
	int64_t x400 = 491645098368112659LL;
	volatile int64_t t86 = 1863196229323LL;

	t86 = (x397&(x398/(x399+x400)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MAX;
	volatile uint32_t t87 = 165345205U;

	t87 = (x401&(x402/(x403+x404)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x406 = 4LLU;
	uint32_t x408 = 26931865U;
	volatile uint64_t t88 = 3084LLU;

	t88 = (x405&(x406/(x407+x408)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x409 = INT64_MIN;
	volatile uint32_t x410 = UINT32_MAX;
	volatile uint8_t x412 = 6U;

	t89 = (x409&(x410/(x411+x412)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = INT64_MIN;
	uint8_t x415 = UINT8_MAX;
	static volatile int64_t t90 = INT64_MIN;

	t90 = (x413&(x414/(x415+x416)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = -1LL;
	uint16_t x423 = 7U;
	volatile int8_t x424 = INT8_MAX;
	static volatile int64_t t91 = -26452302LL;

	t91 = (x421&(x422/(x423+x424)));

	if (t91 != -244LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x425 = 2146934655U;
	int16_t x427 = INT16_MIN;
	static uint16_t x428 = 7U;
	static volatile uint32_t t92 = 1025305U;

	t92 = (x425&(x426/(x427+x428)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = INT16_MAX;
	int64_t x430 = INT64_MAX;
	static uint32_t x432 = 7022335U;
	static volatile int64_t t93 = 134343705829LL;

	t93 = (x429&(x430/(x431+x432)));

	if (t93 != 27725LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x433 = 200LLU;
	uint32_t x434 = 319U;
	int32_t x435 = INT32_MIN;

	t94 = (x433&(x434/(x435+x436)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x437 = 2U;
	uint8_t x439 = 15U;
	uint64_t x440 = 256LLU;

	t95 = (x437&(x438/(x439+x440)));

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x448 = 1U;
	volatile uint64_t t96 = 6130145LLU;

	t96 = (x445&(x446/(x447+x448)));

	if (t96 != 144115188075823104LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x454 = 1U;
	int64_t x455 = -27597792725381603LL;
	int16_t x456 = INT16_MIN;
	volatile int64_t t97 = 42710616LL;

	t97 = (x453&(x454/(x455+x456)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x457 = 3;
	int8_t x458 = INT8_MIN;
	static int32_t x459 = -1;
	uint32_t x460 = UINT32_MAX;
	static volatile uint32_t t98 = 19U;

	t98 = (x457&(x458/(x459+x460)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = 3581474LLU;
	static int32_t x463 = -1;
	int64_t x464 = -15170140LL;
	uint64_t t99 = 460419637584LLU;

	t99 = (x461&(x462/(x463+x464)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

