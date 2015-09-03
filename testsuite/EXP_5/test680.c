#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
uint32_t x9 = 1U;
int8_t x10 = -1;
uint64_t x13 = UINT64_MAX;
int32_t x19 = -1;
volatile uint16_t x20 = UINT16_MAX;
static uint32_t x24 = UINT32_MAX;
volatile int64_t x26 = INT64_MAX;
static int16_t x28 = -25;
uint32_t x31 = UINT32_MAX;
int16_t x33 = INT16_MAX;
static uint8_t x34 = UINT8_MAX;
int64_t t8 = -2169703038665LL;
uint32_t x41 = UINT32_MAX;
uint64_t x43 = UINT64_MAX;
volatile int16_t x50 = -1;
int64_t x53 = -1LL;
volatile int32_t x54 = INT32_MIN;
uint64_t x59 = 10LLU;
uint32_t x60 = 80U;
int64_t x65 = 1109LL;
int16_t x66 = 1;
static volatile int64_t t13 = 4180005036081664LL;
volatile int64_t t14 = -75503005338197LL;
uint8_t x85 = UINT8_MAX;
static int64_t t17 = -61955458023313252LL;
volatile uint16_t x90 = 1422U;
uint8_t x92 = UINT8_MAX;
uint64_t x94 = UINT64_MAX;
static uint8_t x104 = 77U;
int64_t t24 = 5748028681LL;
int32_t x120 = INT32_MAX;
int64_t x122 = INT64_MIN;
uint64_t x123 = 3662050385970028679LLU;
static volatile int16_t x127 = INT16_MAX;
static int32_t t27 = 13371281;
uint16_t x129 = UINT16_MAX;
volatile int32_t t28 = -2901228;
int16_t x140 = INT16_MIN;
static volatile uint64_t t31 = 34228955034LLU;
volatile uint64_t x147 = 3136LLU;
static uint64_t t32 = 2321182618769990LLU;
volatile int64_t x153 = -1401197844LL;
int16_t x156 = INT16_MIN;
volatile int16_t x157 = INT16_MAX;
int32_t x159 = INT32_MIN;
uint8_t x160 = 3U;
volatile int32_t t35 = 898010353;
uint32_t x161 = 1285064U;
int16_t x163 = -186;
uint16_t x168 = 170U;
uint8_t x175 = 1U;
uint32_t x185 = UINT32_MAX;
int16_t x186 = -33;
int32_t x209 = INT32_MAX;
volatile uint64_t t47 = 204LLU;
int16_t x221 = -1;
volatile int64_t t50 = -15786034076LL;
int32_t x230 = INT32_MIN;
volatile uint64_t t52 = 43748078807995366LLU;
int64_t x242 = -1LL;
int64_t x243 = 181LL;
int8_t x245 = INT8_MIN;
volatile int64_t t55 = -1480LL;
int32_t x251 = -766;
volatile int8_t x259 = -1;
volatile int8_t x260 = -1;
uint16_t x263 = 24755U;
int8_t x268 = 10;
int8_t x269 = INT8_MIN;
int64_t t60 = 10757701LL;
int8_t x273 = -37;
int32_t x279 = INT32_MIN;
uint16_t x280 = 3U;
static uint64_t x293 = 408LLU;
static int32_t x298 = 14;
int64_t x307 = -1LL;
int64_t x310 = INT64_MIN;
int64_t t69 = 0LL;
int8_t x313 = INT8_MAX;
int16_t x315 = INT16_MAX;
volatile uint32_t t71 = 1934U;
static int32_t x323 = INT32_MIN;
uint64_t x327 = UINT64_MAX;
int32_t x329 = -2898;
int8_t x330 = INT8_MAX;
static uint32_t x331 = 153U;
int16_t x333 = INT16_MIN;
int16_t x334 = INT16_MIN;
volatile int64_t t75 = -15397879509633646LL;
volatile int64_t x344 = INT64_MIN;
volatile int64_t t77 = 1621593223188LL;
int8_t x351 = 16;
int64_t x352 = 271116572502LL;
int32_t x365 = INT32_MIN;
static volatile uint64_t x378 = UINT64_MAX;
volatile uint64_t t86 = 2155952661684117059LLU;
int8_t x387 = INT8_MIN;
int8_t x388 = INT8_MIN;
static uint32_t x390 = 5U;
uint32_t x391 = UINT32_MAX;
uint8_t x392 = UINT8_MAX;
uint16_t x393 = 145U;
static volatile int16_t x394 = INT16_MIN;
volatile int16_t x398 = -1;
volatile int64_t x402 = INT64_MAX;
uint64_t x403 = 1LLU;
int64_t x412 = -1LL;
static uint32_t x420 = UINT32_MAX;
static volatile int64_t x422 = -1LL;
int8_t x429 = INT8_MIN;
static int32_t t98 = -315;
int64_t t99 = 7991LL;


void f0(void) {
	int64_t x6 = -457280466LL;
	static int32_t x7 = INT32_MIN;
	int32_t x8 = INT32_MAX;
	int64_t t0 = -1323567799LL;

	t0 = (x5/((x6%x7)+x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x11 = INT16_MIN;
	static uint16_t x12 = 7U;
	volatile uint32_t t1 = 47U;

	t1 = (x9/((x10%x11)+x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x14 = INT16_MAX;
	static int32_t x15 = -1;
	volatile uint32_t x16 = 53970182U;
	volatile uint64_t t2 = 131410354513897LLU;

	t2 = (x13/((x14%x15)+x16));

	if (t2 != 341795105929LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 1633848666271LLU;
	volatile int32_t x18 = INT32_MAX;
	static uint64_t t3 = 4938LLU;

	t3 = (x17/((x18%x19)+x20));

	if (t3 != 24930932LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int8_t x22 = -41;
	int32_t x23 = INT32_MIN;
	uint32_t t4 = 0U;

	t4 = (x21/((x22%x23)+x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int8_t x27 = INT8_MAX;
	int64_t t5 = 4335500826LL;

	t5 = (x25/((x26%x27)+x28));

	if (t5 != 5LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = 9;
	uint16_t x30 = UINT16_MAX;
	int8_t x32 = 1;
	static uint32_t t6 = 1073187949U;

	t6 = (x29/((x30%x31)+x32));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x35 = -1;
	volatile uint32_t x36 = UINT32_MAX;
	volatile uint32_t t7 = 14U;

	t7 = (x33/((x34%x35)+x36));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 36;
	static uint32_t x38 = 1029311162U;
	static int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;

	t8 = (x37/((x38%x39)+x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MAX;
	int32_t x44 = INT32_MIN;
	volatile uint64_t t9 = 3517636445256LLU;

	t9 = (x41/((x42%x43)+x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -5;
	int8_t x51 = INT8_MIN;
	uint16_t x52 = 882U;
	volatile int32_t t10 = 0;

	t10 = (x49/((x50%x51)+x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x55 = INT16_MAX;
	int16_t x56 = 293;
	volatile int64_t t11 = 3617010LL;

	t11 = (x53/((x54%x55)+x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = -1LL;
	int16_t x58 = -1;
	volatile uint64_t t12 = 2020LLU;

	t12 = (x57/((x58%x59)+x60));

	if (t12 != 217020518514230019LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x67 = UINT32_MAX;
	int32_t x68 = INT32_MAX;

	t13 = (x65/((x66%x67)+x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MAX;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = INT64_MAX;
	int16_t x72 = -1;

	t14 = (x69/((x70%x71)+x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = UINT64_MAX;
	int32_t x74 = -1;
	static int8_t x75 = -1;
	volatile int64_t x76 = -1LL;
	volatile uint64_t t15 = 27991870246840LLU;

	t15 = (x73/((x74%x75)+x76));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x77 = -1LL;
	static uint32_t x78 = 1045U;
	int32_t x79 = INT32_MIN;
	volatile int32_t x80 = -52;
	volatile int64_t t16 = -261LL;

	t16 = (x77/((x78%x79)+x80));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x86 = 262U;
	int64_t x87 = INT64_MIN;
	volatile int32_t x88 = 1046;

	t17 = (x85/((x86%x87)+x88));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x89 = 20797112LL;
	static int64_t x91 = INT64_MAX;
	volatile int64_t t18 = -8553287427LL;

	t18 = (x89/((x90%x91)+x92));

	if (t18 != 12401LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	int32_t x95 = 31;
	static uint64_t x96 = 17795316726181560LLU;
	volatile uint64_t t19 = 10665291LLU;

	t19 = (x93/((x94%x95)+x96));

	if (t19 != 1036LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x97 = 5923655U;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 67U;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t20 = 27LLU;

	t20 = (x97/((x98%x99)+x100));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = UINT32_MAX;
	volatile int16_t x102 = -9;
	int64_t x103 = INT64_MIN;
	static volatile int64_t t21 = -11LL;

	t21 = (x101/((x102%x103)+x104));

	if (t21 != 63161283LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = 7627;
	uint64_t x106 = 1527717LLU;
	static volatile uint32_t x107 = 6U;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t22 = 16102LLU;

	t22 = (x105/((x106%x107)+x108));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -1594177092341211381LL;
	volatile int8_t x110 = INT8_MAX;
	int16_t x111 = INT16_MIN;
	static int16_t x112 = INT16_MAX;
	int64_t t23 = -4812614478085LL;

	t23 = (x109/((x110%x111)+x112));

	if (t23 != -48464069202322LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x113 = -15;
	volatile uint32_t x114 = 1023539149U;
	int64_t x115 = INT64_MAX;
	int32_t x116 = INT32_MIN;

	t24 = (x113/((x114%x115)+x116));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x118 = UINT16_MAX;
	uint64_t x119 = UINT64_MAX;
	uint64_t t25 = 17232618649416736LLU;

	t25 = (x117/((x118%x119)+x120));

	if (t25 != 8589672463LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -2321;
	volatile int32_t x124 = -1;
	volatile uint64_t t26 = 29657105LLU;

	t26 = (x121/((x122%x123)+x124));

	if (t26 != 9LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = 372U;
	uint8_t x126 = UINT8_MAX;
	int8_t x128 = INT8_MIN;

	t27 = (x125/((x126%x127)+x128));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x130 = -1;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = 897210;

	t28 = (x129/((x130%x131)+x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = INT64_MIN;
	volatile int64_t x134 = -1LL;
	int32_t x135 = INT32_MIN;
	static uint64_t x136 = 537961765616067390LLU;
	volatile uint64_t t29 = 785030790184745394LLU;

	t29 = (x133/((x134%x135)+x136));

	if (t29 != 17LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MAX;
	volatile int8_t x138 = INT8_MIN;
	static int64_t x139 = INT64_MIN;
	static int64_t t30 = 200293561551780762LL;

	t30 = (x137/((x138%x139)+x140));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MAX;
	uint64_t x143 = 481LLU;
	static uint32_t x144 = 26129U;

	t31 = (x141/((x142%x143)+x144));

	if (t31 != 161501LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x145 = INT64_MIN;
	int8_t x146 = -40;
	uint32_t x148 = UINT32_MAX;

	t32 = (x145/((x146%x147)+x148));

	if (t32 != 2147482932LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x150 = 64448U;
	static uint16_t x151 = UINT16_MAX;
	uint32_t x152 = 243U;
	volatile int64_t t33 = 194567997049LL;

	t33 = (x149/((x150%x151)+x152));

	if (t33 != -142575814825165LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x154 = -1;
	uint8_t x155 = 11U;
	volatile int64_t t34 = 402969789LL;

	t34 = (x153/((x154%x155)+x156));

	if (t34 != 42759LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x158 = -1;

	t35 = (x157/((x158%x159)+x160));

	if (t35 != 16383) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x162 = -117;
	int64_t x164 = INT64_MAX;
	volatile int64_t t36 = -21142240414536643LL;

	t36 = (x161/((x162%x163)+x164));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -1;
	uint8_t x166 = 19U;
	int8_t x167 = -1;
	volatile int32_t t37 = -52898;

	t37 = (x165/((x166%x167)+x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MAX;
	int8_t x176 = -1;
	static int32_t t38 = 2448315;

	t38 = (x173/((x174%x175)+x176));

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = UINT16_MAX;
	volatile uint64_t x183 = UINT64_MAX;
	int32_t x184 = -1447992;
	uint64_t t39 = 4111673005558LLU;

	t39 = (x181/((x182%x183)+x184));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x187 = UINT64_MAX;
	uint64_t x188 = 1379629LLU;
	volatile uint64_t t40 = 533534277LLU;

	t40 = (x185/((x186%x187)+x188));

	if (t40 != 3113LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x189 = 15995390556504320LL;
	int64_t x190 = -2815LL;
	static uint64_t x191 = 412010LLU;
	static int16_t x192 = INT16_MIN;
	volatile uint64_t t41 = 1225830233LLU;

	t41 = (x189/((x190%x191)+x192));

	if (t41 != 182235887533LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = -729822211;
	int64_t x194 = -1LL;
	int64_t x195 = INT64_MIN;
	static volatile int16_t x196 = INT16_MAX;
	volatile int64_t t42 = -133349803LL;

	t42 = (x193/((x194%x195)+x196));

	if (t42 != -22273LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = 547;
	volatile int16_t x198 = INT16_MIN;
	static int16_t x199 = 1806;
	int8_t x200 = -1;
	int32_t t43 = -52901;

	t43 = (x197/((x198%x199)+x200));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = 1U;
	int32_t x202 = 474476;
	int16_t x203 = INT16_MIN;
	static uint16_t x204 = 26U;
	uint32_t t44 = 4730U;

	t44 = (x201/((x202%x203)+x204));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = 21;
	static uint32_t x206 = UINT32_MAX;
	static int64_t x207 = -1LL;
	int32_t x208 = INT32_MAX;
	volatile int64_t t45 = -346LL;

	t45 = (x205/((x206%x207)+x208));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x210 = 61;
	int8_t x211 = INT8_MIN;
	int8_t x212 = 1;
	int32_t t46 = 112;

	t46 = (x209/((x210%x211)+x212));

	if (t46 != 34636833) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x213 = UINT64_MAX;
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = INT64_MAX;
	int8_t x216 = 55;

	t47 = (x213/((x214%x215)+x216));

	if (t47 != 281243239422313LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = -3;
	int8_t x218 = INT8_MIN;
	uint32_t x219 = 95U;
	static volatile uint64_t x220 = UINT64_MAX;
	static uint64_t t48 = 929871854LLU;

	t48 = (x217/((x218%x219)+x220));

	if (t48 != 275324538413575397LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x222 = 5;
	int32_t x223 = INT32_MIN;
	static int16_t x224 = INT16_MAX;
	int32_t t49 = 188289009;

	t49 = (x221/((x222%x223)+x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x225 = -1LL;
	static uint8_t x226 = UINT8_MAX;
	volatile int8_t x227 = INT8_MIN;
	static int8_t x228 = 1;

	t50 = (x225/((x226%x227)+x228));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x229 = INT64_MAX;
	int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MIN;
	volatile int64_t t51 = 73575577LL;

	t51 = (x229/((x230%x231)+x232));

	if (t51 != -4294967295LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = -1LL;
	uint16_t x234 = 141U;
	uint64_t x235 = UINT64_MAX;
	volatile int32_t x236 = -53258;

	t52 = (x233/((x234%x235)+x236));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x237 = 2U;
	static int32_t x238 = INT32_MAX;
	int8_t x239 = INT8_MIN;
	int32_t x240 = -1;
	int32_t t53 = 1;

	t53 = (x237/((x238%x239)+x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x241 = 512155857U;
	volatile int64_t x244 = INT64_MAX;
	volatile int64_t t54 = -825633264952LL;

	t54 = (x241/((x242%x243)+x244));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x246 = INT64_MIN;
	static uint32_t x247 = 142874993U;
	static int64_t x248 = INT64_MAX;

	t55 = (x245/((x246%x247)+x248));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = -1;
	int64_t x250 = 30285759659666LL;
	static volatile uint32_t x252 = 18168U;
	volatile int64_t t56 = -199005273671LL;

	t56 = (x249/((x250%x251)+x252));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x257 = 28U;
	volatile int8_t x258 = INT8_MIN;
	int32_t t57 = -960;

	t57 = (x257/((x258%x259)+x260));

	if (t57 != -28) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = -107;
	static uint64_t x264 = 3802488479013158LLU;
	static uint64_t t58 = 1LLU;

	t58 = (x261/((x262%x263)+x264));

	if (t58 != 2425LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x265 = 9113U;
	static uint8_t x266 = 83U;
	int16_t x267 = INT16_MIN;
	uint32_t t59 = 369928U;

	t59 = (x265/((x266%x267)+x268));

	if (t59 != 97U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x270 = INT64_MIN;
	int32_t x271 = -5;
	uint16_t x272 = 2U;

	t60 = (x269/((x270%x271)+x272));

	if (t60 != 128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x274 = -1;
	static int64_t x275 = INT64_MIN;
	int8_t x276 = -1;
	int64_t t61 = -1LL;

	t61 = (x273/((x274%x275)+x276));

	if (t61 != 18LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x277 = 960185LLU;
	uint64_t x278 = 1056106247LLU;
	uint64_t t62 = 2318695078LLU;

	t62 = (x277/((x278%x279)+x280));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x281 = -1;
	int16_t x282 = INT16_MIN;
	static uint8_t x283 = UINT8_MAX;
	int16_t x284 = 178;
	volatile int32_t t63 = 1;

	t63 = (x281/((x282%x283)+x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = -175218843LL;
	static int64_t x290 = -1922373786LL;
	static uint16_t x291 = UINT16_MAX;
	uint32_t x292 = UINT32_MAX;
	int64_t t64 = -190235523LL;

	t64 = (x289/((x290%x291)+x292));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x294 = INT64_MIN;
	uint32_t x295 = 1U;
	volatile uint8_t x296 = 1U;
	volatile uint64_t t65 = 9848075637205566LLU;

	t65 = (x293/((x294%x295)+x296));

	if (t65 != 408LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = -1;
	int16_t x299 = 450;
	int64_t x300 = -1LL;
	int64_t t66 = -9913LL;

	t66 = (x297/((x298%x299)+x300));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x301 = INT8_MIN;
	int32_t x302 = 3860996;
	int16_t x303 = 1498;
	int16_t x304 = 576;
	static int32_t t67 = -1;

	t67 = (x301/((x302%x303)+x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = -20;
	int32_t x306 = INT32_MIN;
	static int64_t x308 = INT64_MIN;
	static int64_t t68 = -34684149051LL;

	t68 = (x305/((x306%x307)+x308));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MAX;
	uint16_t x311 = UINT16_MAX;
	static int32_t x312 = -11240;

	t69 = (x309/((x310%x311)+x312));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x314 = INT64_MIN;
	volatile int16_t x316 = 749;
	int64_t t70 = 30184898605LL;

	t70 = (x313/((x314%x315)+x316));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x317 = 22091U;
	uint8_t x318 = 63U;
	uint32_t x319 = UINT32_MAX;
	volatile int32_t x320 = -12085;

	t71 = (x317/((x318%x319)+x320));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MAX;
	volatile int64_t x324 = INT64_MIN;
	static int64_t t72 = 8LL;

	t72 = (x321/((x322%x323)+x324));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = -1;
	volatile int8_t x326 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	uint64_t t73 = 275428LLU;

	t73 = (x325/((x326%x327)+x328));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x332 = -32366546;
	uint32_t t74 = 478182305U;

	t74 = (x329/((x330%x331)+x332));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x335 = INT64_MAX;
	volatile int32_t x336 = INT32_MAX;

	t75 = (x333/((x334%x335)+x336));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = INT32_MIN;
	static volatile int32_t x339 = INT32_MAX;
	int64_t x340 = 464559627108LL;
	static volatile int64_t t76 = 500189111967294171LL;

	t76 = (x337/((x338%x339)+x340));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x341 = -9476;
	static uint32_t x342 = 40U;
	uint32_t x343 = 40U;

	t77 = (x341/((x342%x343)+x344));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x345 = 21U;
	uint16_t x346 = UINT16_MAX;
	int8_t x347 = INT8_MAX;
	uint64_t x348 = 227337430818LLU;
	static uint64_t t78 = 11264LLU;

	t78 = (x345/((x346%x347)+x348));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x349 = 47U;
	int64_t x350 = -1LL;
	int64_t t79 = 12179115116096LL;

	t79 = (x349/((x350%x351)+x352));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x353 = 2U;
	int32_t x354 = INT32_MIN;
	volatile uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	volatile uint32_t t80 = 427274U;

	t80 = (x353/((x354%x355)+x356));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MAX;
	volatile int32_t x358 = INT32_MIN;
	volatile int16_t x359 = -309;
	uint16_t x360 = UINT16_MAX;
	int32_t t81 = 288;

	t81 = (x357/((x358%x359)+x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x361 = INT16_MIN;
	static int32_t x362 = 176707;
	static volatile int16_t x363 = 1797;
	static volatile int32_t x364 = 467503985;
	volatile int32_t t82 = 20180;

	t82 = (x361/((x362%x363)+x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x366 = 1U;
	static volatile int64_t x367 = INT64_MAX;
	uint32_t x368 = UINT32_MAX;
	volatile int64_t t83 = 911580946LL;

	t83 = (x365/((x366%x367)+x368));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = INT8_MIN;
	static volatile int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t84 = -989083944;

	t84 = (x369/((x370%x371)+x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	uint32_t x375 = 238889061U;
	int16_t x376 = 15;
	volatile uint32_t t85 = 101003090U;

	t85 = (x373/((x374%x375)+x376));

	if (t85 != 9U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x377 = 10U;
	int8_t x379 = -1;
	int64_t x380 = -1LL;

	t86 = (x377/((x378%x379)+x380));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = 1;
	int8_t x383 = 51;
	static volatile int64_t x384 = 7665279228849890LL;
	int64_t t87 = -1LL;

	t87 = (x381/((x382%x383)+x384));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = 2576438U;
	volatile uint32_t t88 = 131810U;

	t88 = (x385/((x386%x387)+x388));

	if (t88 != 1667U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = -34106383LL;
	static int64_t t89 = 59918350288724272LL;

	t89 = (x389/((x390%x391)+x392));

	if (t89 != -131178LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x395 = INT16_MIN;
	int32_t x396 = -1;
	int32_t t90 = -152;

	t90 = (x393/((x394%x395)+x396));

	if (t90 != -145) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = -1;
	volatile int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;
	volatile int32_t t91 = 116;

	t91 = (x397/((x398%x399)+x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = 8150LL;
	static volatile int32_t x404 = -1;
	volatile uint64_t t92 = 6935LLU;

	t92 = (x401/((x402%x403)+x404));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = INT8_MAX;
	static int32_t x406 = -3;
	int16_t x407 = -1;
	int8_t x408 = 6;
	volatile int32_t t93 = 15011729;

	t93 = (x405/((x406%x407)+x408));

	if (t93 != 21) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x409 = 50;
	int32_t x410 = -1;
	int32_t x411 = INT32_MAX;
	volatile int64_t t94 = -54279001588LL;

	t94 = (x409/((x410%x411)+x412));

	if (t94 != -25LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = -1LL;
	static volatile uint16_t x418 = UINT16_MAX;
	int64_t x419 = 477521451401791LL;
	volatile int64_t t95 = 121449LL;

	t95 = (x417/((x418%x419)+x420));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x421 = -1;
	int64_t x423 = INT64_MIN;
	uint64_t x424 = 236484630LLU;
	uint64_t t96 = 927LLU;

	t96 = (x421/((x422%x423)+x424));

	if (t96 != 78003987623LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x425 = INT32_MAX;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = 22092809209639LLU;
	int16_t x428 = 182;
	volatile uint64_t t97 = 192216223LLU;

	t97 = (x425/((x426%x427)+x428));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x430 = 13085U;
	volatile int32_t x431 = 12482505;
	int16_t x432 = INT16_MIN;

	t98 = (x429/((x430%x431)+x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x433 = INT16_MIN;
	int64_t x434 = INT64_MIN;
	volatile int16_t x435 = 16;
	volatile uint8_t x436 = 1U;

	t99 = (x433/((x434%x435)+x436));

	if (t99 != -32768LL) { NG(); } else { ; }
	
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

