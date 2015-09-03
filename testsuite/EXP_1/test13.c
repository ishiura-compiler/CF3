#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MIN;
volatile int16_t x3 = INT16_MIN;
uint32_t t1 = 3867165U;
uint32_t x21 = UINT32_MAX;
volatile uint16_t x48 = UINT16_MAX;
int16_t x55 = -1;
static uint16_t x56 = 0U;
volatile uint16_t x59 = 962U;
volatile int32_t t11 = 3745;
uint32_t x65 = 2834U;
volatile int16_t x71 = 4;
volatile uint32_t t13 = 1U;
uint8_t x73 = UINT8_MAX;
volatile uint64_t t14 = 2734093145LLU;
volatile int64_t t16 = -7861628236514LL;
volatile int64_t x96 = INT64_MAX;
int32_t x106 = INT32_MIN;
uint64_t x110 = UINT64_MAX;
int64_t x111 = -15LL;
static uint8_t x117 = 6U;
static int64_t x119 = 30941769952LL;
int64_t x123 = INT64_MIN;
static int32_t x133 = INT32_MIN;
static int16_t x145 = 1;
uint64_t t30 = 145LLU;
static volatile int16_t x166 = -1;
static uint64_t x174 = 222850LLU;
int16_t x176 = -725;
uint64_t x177 = 5LLU;
volatile int64_t x178 = -56875756LL;
static int64_t x181 = INT64_MAX;
volatile uint8_t x185 = 74U;
static uint16_t x188 = 10U;
volatile int16_t x199 = -40;
volatile uint16_t x205 = 11087U;
static volatile uint64_t t41 = 54LLU;
uint32_t x210 = 1747U;
int32_t x211 = INT32_MIN;
volatile int32_t t43 = -145828078;
volatile int32_t t48 = -268;
int16_t x241 = INT16_MIN;
volatile int32_t x252 = INT32_MAX;
volatile uint64_t t52 = 1832LLU;
int8_t x260 = INT8_MIN;
static int64_t t54 = -94770658716409LL;
volatile int64_t x264 = INT64_MAX;
int8_t x265 = 0;
static uint64_t t56 = 3559636843LLU;
int16_t x272 = INT16_MIN;
volatile uint8_t x275 = UINT8_MAX;
uint8_t x282 = 1U;
uint32_t x284 = 355123U;
int16_t x291 = -548;
int32_t t62 = -99715106;
static uint16_t x300 = UINT16_MAX;
int8_t x301 = 0;
uint32_t x308 = 8U;
int32_t t67 = 15562;
int16_t x326 = INT16_MAX;
uint16_t x329 = UINT16_MAX;
int64_t x331 = 3913882618675315LL;
static uint32_t x333 = 784U;
int8_t x334 = -1;
uint32_t x340 = UINT32_MAX;
volatile int32_t x343 = 11;
int32_t t74 = 90474423;
volatile uint16_t x348 = 398U;
static volatile uint64_t t77 = 5485264LLU;
int8_t x358 = INT8_MIN;
int32_t x362 = -51267;
static int16_t x375 = 38;
volatile int16_t x383 = INT16_MIN;
uint8_t x392 = UINT8_MAX;
static volatile uint32_t x393 = UINT32_MAX;
int8_t x394 = -15;
int8_t x395 = 58;
volatile int64_t t86 = 4581651LL;
static uint64_t t88 = 767554LLU;
static uint32_t x443 = 155021465U;
int16_t x444 = INT16_MAX;
int32_t x447 = -1;
volatile uint64_t t95 = 64912187178232LLU;
int8_t x452 = -1;
int8_t x457 = 1;
volatile int8_t x461 = INT8_MIN;


void f0(void) {
	static int64_t x2 = -17735218LL;
	volatile int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -7850988534LL;

	t0 = (((x1+x2)+x3)^x4);

	if (t0 != 9223372036837007694LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -77;
	uint32_t x10 = UINT32_MAX;
	uint8_t x11 = 9U;
	uint8_t x12 = UINT8_MAX;

	t1 = (((x9+x10)+x11)^x12);

	if (t1 != 4294967108U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -1171479;
	int16_t x14 = INT16_MAX;
	int8_t x15 = -1;
	static int16_t x16 = -1;
	volatile int32_t t2 = 4;

	t2 = (((x13+x14)+x15)^x16);

	if (t2 != 1138712) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MAX;
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 5252189LLU;
	int64_t x20 = INT64_MAX;
	static volatile uint64_t t3 = 444828031583LLU;

	t3 = (((x17+x18)+x19)^x20);

	if (t3 != 9223372036849490979LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x22 = 3U;
	int8_t x23 = INT8_MIN;
	int64_t x24 = -1LL;
	int64_t t4 = -1008612LL;

	t4 = (((x21+x22)+x23)^x24);

	if (t4 != -4294967171LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MAX;
	int16_t x30 = INT16_MIN;
	uint32_t x31 = 2049U;
	volatile int64_t x32 = -60499387483163LL;
	static volatile int64_t t5 = 129208433530243LL;

	t5 = (((x29+x30)+x31)^x32);

	if (t5 != -60499387485211LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 3153485LL;
	int16_t x38 = INT16_MIN;
	static int32_t x39 = -1;
	int32_t x40 = INT32_MAX;
	int64_t t6 = 4LL;

	t6 = (((x37+x38)+x39)^x40);

	if (t6 != 2144362931LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = UINT64_MAX;
	static int8_t x42 = INT8_MIN;
	uint16_t x43 = 21193U;
	uint8_t x44 = 21U;
	uint64_t t7 = 2647028177771LLU;

	t7 = (((x41+x42)+x43)^x44);

	if (t7 != 21085LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = INT64_MIN;
	static volatile int64_t x46 = INT64_MAX;
	uint64_t x47 = 184020LLU;
	volatile uint64_t t8 = 1330950225LLU;

	t8 = (((x45+x46)+x47)^x48);

	if (t8 != 143660LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = -1;
	static volatile int8_t x51 = INT8_MAX;
	static int16_t x52 = INT16_MAX;
	int32_t t9 = -30889776;

	t9 = (((x49+x50)+x51)^x52);

	if (t9 != 98178) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -12017828;
	static uint16_t x54 = 10133U;
	int32_t t10 = 430;

	t10 = (((x53+x54)+x55)^x56);

	if (t10 != -12007696) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int8_t x58 = -2;
	int16_t x60 = -15695;

	t11 = (((x57+x58)+x59)^x60);

	if (t11 != -14834) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x66 = 0;
	volatile int64_t x67 = 70338816288LL;
	uint64_t x68 = 4914LLU;
	volatile uint64_t t12 = 6374085124081936LLU;

	t12 = (((x65+x66)+x67)^x68);

	if (t12 != 70338815744LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 13955U;
	volatile int32_t x70 = INT32_MIN;
	uint8_t x72 = 3U;

	t13 = (((x69+x70)+x71)^x72);

	if (t13 != 2147497604U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x74 = 1LLU;
	volatile int8_t x75 = -1;
	int32_t x76 = -1;

	t14 = (((x73+x74)+x75)^x76);

	if (t14 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x81 = 12;
	volatile uint16_t x82 = 7532U;
	static int32_t x83 = -1;
	uint64_t x84 = 2LLU;
	uint64_t t15 = 7705287357919LLU;

	t15 = (((x81+x82)+x83)^x84);

	if (t15 != 7541LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x85 = UINT16_MAX;
	uint32_t x86 = 249816U;
	int64_t x87 = INT64_MIN;
	int8_t x88 = -1;

	t16 = (((x85+x86)+x87)^x88);

	if (t16 != 9223372036854460456LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = INT8_MIN;
	int32_t x94 = -9772540;
	uint16_t x95 = UINT16_MAX;
	int64_t t17 = 1149325627408LL;

	t17 = (((x93+x94)+x95)^x96);

	if (t17 != -9223372036845068676LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x97 = -1;
	volatile int32_t x98 = INT32_MAX;
	int32_t x99 = -1;
	int8_t x100 = -6;
	volatile int32_t t18 = -32477902;

	t18 = (((x97+x98)+x99)^x100);

	if (t18 != -2147483641) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 1388U;
	int8_t x102 = INT8_MIN;
	static int16_t x103 = INT16_MIN;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t19 = 0;

	t19 = (((x101+x102)+x103)^x104);

	if (t19 != 2147452140) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x105 = -51LL;
	int8_t x107 = 7;
	int16_t x108 = 1;
	int64_t t20 = -86949790874940LL;

	t20 = (((x105+x106)+x107)^x108);

	if (t20 != -2147483691LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = -1;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t21 = 78685529763879525LLU;

	t21 = (((x109+x110)+x111)^x112);

	if (t21 != 16LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = 1;
	uint32_t x114 = UINT32_MAX;
	static int64_t x115 = INT64_MIN;
	static volatile int8_t x116 = INT8_MIN;
	static volatile int64_t t22 = 4094715001LL;

	t22 = (((x113+x114)+x115)^x116);

	if (t22 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x118 = INT16_MIN;
	int16_t x120 = INT16_MIN;
	volatile int64_t t23 = -1LL;

	t23 = (((x117+x118)+x119)^x120);

	if (t23 != -30941712154LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x121 = 2942796LLU;
	int16_t x122 = 31;
	int64_t x124 = INT64_MIN;
	uint64_t t24 = 73990320020363LLU;

	t24 = (((x121+x122)+x123)^x124);

	if (t24 != 2942827LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = -1;
	int16_t x127 = 2;
	int64_t x128 = INT64_MIN;
	int64_t t25 = 339528923074LL;

	t25 = (((x125+x126)+x127)^x128);

	if (t25 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x134 = INT16_MAX;
	uint64_t x135 = UINT64_MAX;
	static int16_t x136 = INT16_MAX;
	uint64_t t26 = 1449581261581LLU;

	t26 = (((x133+x134)+x135)^x136);

	if (t26 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x137 = INT32_MIN;
	static uint8_t x138 = 4U;
	int8_t x139 = -1;
	int16_t x140 = -1;
	int32_t t27 = -129407;

	t27 = (((x137+x138)+x139)^x140);

	if (t27 != 2147483644) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x141 = -1LL;
	static uint32_t x142 = 24U;
	int64_t x143 = INT64_MIN;
	static volatile int32_t x144 = -1;
	volatile int64_t t28 = 783LL;

	t28 = (((x141+x142)+x143)^x144);

	if (t28 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x146 = 228755U;
	volatile int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MIN;
	volatile uint32_t t29 = 16666099U;

	t29 = (((x145+x146)+x147)^x148);

	if (t29 != 4294705683U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x153 = 842670777359LL;
	volatile uint64_t x154 = 1LLU;
	int32_t x155 = -1;
	uint32_t x156 = 23U;

	t30 = (((x153+x154)+x155)^x156);

	if (t30 != 842670777368LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x165 = UINT32_MAX;
	int8_t x167 = -43;
	static int8_t x168 = INT8_MIN;
	uint32_t t31 = 52165U;

	t31 = (((x165+x166)+x167)^x168);

	if (t31 != 83U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x169 = 377;
	int32_t x170 = INT32_MIN;
	uint64_t x171 = 0LLU;
	int64_t x172 = INT64_MAX;
	static uint64_t t32 = 12LLU;

	t32 = (((x169+x170)+x171)^x172);

	if (t32 != 9223372039002259078LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x173 = 3418779891LLU;
	volatile int64_t x175 = INT64_MIN;
	uint64_t t33 = 18LLU;

	t33 = (((x173+x174)+x175)^x176);

	if (t33 != 9223372033435773534LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	uint64_t t34 = 4000391314730101LLU;

	t34 = (((x177+x178)+x179)^x180);

	if (t34 != 4238091545LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x182 = UINT64_MAX;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = -1;
	uint64_t t35 = 1877344769713118LLU;

	t35 = (((x181+x182)+x183)^x184);

	if (t35 != 9223372032559808514LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x186 = 24;
	int64_t x187 = -1LL;
	int64_t t36 = -302586LL;

	t36 = (((x185+x186)+x187)^x188);

	if (t36 != 107LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = INT16_MIN;
	volatile uint32_t x190 = 553731U;
	volatile int16_t x191 = INT16_MAX;
	int64_t x192 = INT64_MIN;
	volatile int64_t t37 = -17278182715356LL;

	t37 = (((x189+x190)+x191)^x192);

	if (t37 != -9223372036854222078LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = 26;
	int32_t x194 = INT32_MIN;
	volatile int32_t x195 = 11;
	uint64_t x196 = 35184696524497607LLU;
	uint64_t t38 = 3LLU;

	t38 = (((x193+x194)+x195)^x196);

	if (t38 != 18411559375368839906LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x197 = 475025LLU;
	int16_t x198 = -3;
	uint16_t x200 = 11342U;
	uint64_t t39 = 24530141299050398LLU;

	t39 = (((x197+x198)+x199)^x200);

	if (t39 != 463656LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int32_t x202 = INT32_MAX;
	volatile int16_t x203 = INT16_MAX;
	int16_t x204 = INT16_MIN;
	uint64_t t40 = 41721622692924283LLU;

	t40 = (((x201+x202)+x203)^x204);

	if (t40 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x206 = INT64_MIN;
	uint64_t x207 = 3393076237222172086LLU;
	int32_t x208 = -1;

	t41 = (((x205+x206)+x207)^x208);

	if (t41 != 5830295799632592634LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = INT16_MIN;
	int32_t x212 = 850209858;
	volatile uint32_t t42 = 27826632U;

	t42 = (((x209+x210)+x211)^x212);

	if (t42 != 1297263249U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x213 = UINT16_MAX;
	volatile uint16_t x214 = 40U;
	volatile uint8_t x215 = UINT8_MAX;
	uint16_t x216 = 5U;

	t43 = (((x213+x214)+x215)^x216);

	if (t43 != 65827) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = 1;
	int64_t x218 = -2340747LL;
	uint8_t x219 = 41U;
	int64_t x220 = -884LL;
	volatile int64_t t44 = 22294458228LL;

	t44 = (((x217+x218)+x219)^x220);

	if (t44 != 2339859LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x221 = -1;
	static uint32_t x222 = UINT32_MAX;
	int64_t x223 = -1LL;
	volatile uint32_t x224 = 1U;
	int64_t t45 = 4264560898207989LL;

	t45 = (((x221+x222)+x223)^x224);

	if (t45 != 4294967292LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MAX;
	uint8_t x227 = UINT8_MAX;
	uint16_t x228 = 3517U;
	volatile int32_t t46 = 158635;

	t46 = (((x225+x226)+x227)^x228);

	if (t46 != 36291) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x229 = INT8_MAX;
	int64_t x230 = 485301871763LL;
	int32_t x231 = -1;
	int16_t x232 = INT16_MIN;
	static volatile int64_t t47 = 2077979560LL;

	t47 = (((x229+x230)+x231)^x232);

	if (t47 != -485301852911LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = 176646658;
	uint16_t x235 = 12U;
	uint8_t x236 = 1U;

	t48 = (((x233+x234)+x235)^x236);

	if (t48 != 176613903) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x237 = -1533;
	int8_t x238 = -1;
	int32_t x239 = 1;
	volatile int8_t x240 = -1;
	static int32_t t49 = 33;

	t49 = (((x237+x238)+x239)^x240);

	if (t49 != 1532) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MIN;
	int8_t x244 = -61;
	int64_t t50 = -327686LL;

	t50 = (((x241+x242)+x243)^x244);

	if (t50 != -9223372034707259332LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = INT16_MIN;
	volatile int16_t x246 = 2;
	int32_t x247 = -24;
	volatile int64_t x248 = INT64_MIN;
	int64_t t51 = -429267590086LL;

	t51 = (((x245+x246)+x247)^x248);

	if (t51 != 9223372036854743018LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x249 = INT8_MAX;
	int8_t x250 = INT8_MIN;
	uint64_t x251 = UINT64_MAX;

	t52 = (((x249+x250)+x251)^x252);

	if (t52 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x253 = 4129U;
	static uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MAX;
	volatile uint32_t x256 = 620U;
	volatile uint32_t t53 = 20U;

	t53 = (((x253+x254)+x255)^x256);

	if (t53 != 5107U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = -1;
	volatile int16_t x258 = -1;
	int64_t x259 = -95012259773020LL;

	t54 = (((x257+x258)+x259)^x260);

	if (t54 != 95012259772962LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x261 = INT64_MAX;
	volatile int32_t x262 = -976;
	int8_t x263 = 1;
	int64_t t55 = -11731714LL;

	t55 = (((x261+x262)+x263)^x264);

	if (t55 != 975LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x266 = INT8_MIN;
	static volatile uint64_t x267 = 1099LLU;
	static int8_t x268 = -1;

	t56 = (((x265+x266)+x267)^x268);

	if (t56 != 18446744073709550644LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x269 = 534999363LLU;
	int16_t x270 = INT16_MIN;
	static volatile uint64_t x271 = UINT64_MAX;
	volatile uint64_t t57 = 36937LLU;

	t57 = (((x269+x270)+x271)^x272);

	if (t57 != 18446744073174610242LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x273 = 4894;
	volatile int8_t x274 = INT8_MAX;
	int64_t x276 = INT64_MAX;
	int64_t t58 = -1LL;

	t58 = (((x273+x274)+x275)^x276);

	if (t58 != 9223372036854770531LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = 2287452557563866031LL;
	int64_t x278 = 29754179LL;
	uint32_t x279 = UINT32_MAX;
	static int16_t x280 = INT16_MIN;
	volatile int64_t t59 = 1LL;

	t59 = (((x277+x278)+x279)^x280);

	if (t59 != -2287452561888596239LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x281 = INT64_MIN;
	int8_t x283 = INT8_MAX;
	volatile int64_t t60 = -964607435508LL;

	t60 = (((x281+x282)+x283)^x284);

	if (t60 != -9223372036854420557LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x285 = 37U;
	volatile int64_t x286 = 205396LL;
	int64_t x287 = -1LL;
	int16_t x288 = 6;
	int64_t t61 = -6672278626606333LL;

	t61 = (((x285+x286)+x287)^x288);

	if (t61 != 205438LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x289 = INT32_MAX;
	int32_t x290 = -2294337;
	int16_t x292 = INT16_MAX;

	t62 = (((x289+x290)+x291)^x292);

	if (t62 != 2145158245) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = 1;
	uint64_t x295 = UINT64_MAX;
	static uint16_t x296 = 5U;
	static volatile uint64_t t63 = 1740013633LLU;

	t63 = (((x293+x294)+x295)^x296);

	if (t63 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x297 = 12U;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = UINT32_MAX;
	volatile uint32_t t64 = 655U;

	t64 = (((x297+x298)+x299)^x300);

	if (t64 != 2147549172U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x302 = 119U;
	volatile int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MAX;
	int64_t t65 = -12301760375091LL;

	t65 = (((x301+x302)+x303)^x304);

	if (t65 != -9223372034707292280LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x305 = 1753164594399LLU;
	int8_t x306 = INT8_MIN;
	uint16_t x307 = UINT16_MAX;
	uint64_t t66 = 388269LLU;

	t66 = (((x305+x306)+x307)^x308);

	if (t66 != 1753164659798LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = 1;
	int32_t x315 = -1;
	static uint16_t x316 = UINT16_MAX;

	t67 = (((x313+x314)+x315)^x316);

	if (t67 != -2147418113) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MIN;
	volatile int32_t x318 = 21111429;
	uint8_t x319 = 7U;
	static uint16_t x320 = 9174U;
	volatile int32_t t68 = 211511095;

	t68 = (((x317+x318)+x319)^x320);

	if (t68 != 21103066) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x321 = 0U;
	int32_t x322 = INT32_MIN;
	uint64_t x323 = 4LLU;
	uint32_t x324 = 79757U;
	uint64_t t69 = 10562660524LLU;

	t69 = (((x321+x322)+x323)^x324);

	if (t69 != 18446744071562147721LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = INT8_MIN;
	volatile uint8_t x327 = UINT8_MAX;
	int8_t x328 = INT8_MAX;
	int32_t t70 = -9600903;

	t70 = (((x325+x326)+x327)^x328);

	if (t70 != 32769) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x330 = 966791;
	volatile int16_t x332 = 22;
	volatile int64_t t71 = 720LL;

	t71 = (((x329+x330)+x331)^x332);

	if (t71 != 3913882619707631LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x335 = 0U;
	static uint16_t x336 = 16865U;
	uint32_t t72 = 856511171U;

	t72 = (((x333+x334)+x335)^x336);

	if (t72 != 17134U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x337 = 0U;
	uint64_t x338 = 90959570777473LLU;
	int8_t x339 = 47;
	volatile uint64_t t73 = 502921LLU;

	t73 = (((x337+x338)+x339)^x340);

	if (t73 != 90962358979151LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x341 = 25U;
	volatile int16_t x342 = INT16_MIN;
	uint16_t x344 = 1221U;

	t74 = (((x341+x342)+x343)^x344);

	if (t74 != -31519) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x345 = 1239U;
	uint16_t x346 = 88U;
	uint16_t x347 = 123U;
	static volatile uint32_t t75 = 275588376U;

	t75 = (((x345+x346)+x347)^x348);

	if (t75 != 1060U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x349 = INT32_MIN;
	static uint32_t x350 = 15U;
	uint16_t x351 = UINT16_MAX;
	static int32_t x352 = INT32_MIN;
	volatile uint32_t t76 = 150361798U;

	t76 = (((x349+x350)+x351)^x352);

	if (t76 != 65550U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x353 = INT16_MAX;
	volatile uint32_t x354 = 1237801917U;
	uint64_t x355 = 3799764429LLU;
	int16_t x356 = INT16_MAX;

	t77 = (((x353+x354)+x355)^x356);

	if (t77 != 5037610614LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x357 = 19LL;
	int16_t x359 = 22;
	int16_t x360 = 0;
	volatile int64_t t78 = 47363511479972965LL;

	t78 = (((x357+x358)+x359)^x360);

	if (t78 != -87LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = INT16_MIN;
	static uint64_t x363 = 1557424996859596789LLU;
	int32_t x364 = -1;
	static uint64_t t79 = 192007861146LLU;

	t79 = (((x361+x362)+x363)^x364);

	if (t79 != 16889319076850038861LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x365 = INT64_MIN;
	uint32_t x366 = 13984255U;
	int8_t x367 = INT8_MAX;
	volatile int16_t x368 = INT16_MAX;
	int64_t t80 = 63353970997796LL;

	t80 = (((x365+x366)+x367)^x368);

	if (t80 != -9223372036840809087LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x369 = -1;
	static int16_t x370 = -5587;
	volatile int8_t x371 = -8;
	int8_t x372 = INT8_MIN;
	static int32_t t81 = -7;

	t81 = (((x369+x370)+x371)^x372);

	if (t81 != 5540) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = 0;
	volatile uint32_t x374 = 20360U;
	int8_t x376 = -1;
	volatile uint32_t t82 = 2251772U;

	t82 = (((x373+x374)+x375)^x376);

	if (t82 != 4294946897U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = INT16_MIN;
	volatile uint32_t x382 = 1U;
	static volatile int64_t x384 = INT64_MIN;
	volatile int64_t t83 = 1LL;

	t83 = (((x381+x382)+x383)^x384);

	if (t83 != -9223372032559874047LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = -7494885;
	static volatile uint16_t x386 = 4856U;
	static int64_t x387 = -4557414960076669895LL;
	uint32_t x388 = 218232032U;
	volatile int64_t t84 = 28413920193579LL;

	t84 = (((x385+x386)+x387)^x388);

	if (t84 != -4557414959866181972LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x389 = 3U;
	int8_t x390 = INT8_MAX;
	int8_t x391 = 0;
	int32_t t85 = 15330;

	t85 = (((x389+x390)+x391)^x392);

	if (t85 != 125) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x396 = -91454474552809990LL;

	t86 = (((x393+x394)+x395)^x396);

	if (t86 != -91454474552810032LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = -2;
	uint8_t x399 = UINT8_MAX;
	static volatile int64_t x400 = INT64_MIN;
	volatile int64_t t87 = -98200754LL;

	t87 = (((x397+x398)+x399)^x400);

	if (t87 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = -10;
	static int16_t x402 = INT16_MIN;
	uint64_t x403 = 3LLU;
	volatile uint16_t x404 = UINT16_MAX;

	t88 = (((x401+x402)+x403)^x404);

	if (t88 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x409 = UINT8_MAX;
	uint8_t x410 = 4U;
	uint8_t x411 = 6U;
	volatile int16_t x412 = -1;
	int32_t t89 = -9582;

	t89 = (((x409+x410)+x411)^x412);

	if (t89 != -266) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x417 = 4150U;
	int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = 393LLU;
	volatile uint64_t t90 = 483LLU;

	t90 = (((x417+x418)+x419)^x420);

	if (t90 != 18446744073709522495LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x425 = -69919;
	int16_t x426 = INT16_MAX;
	volatile uint8_t x427 = 33U;
	volatile uint64_t x428 = 870936189073422LLU;
	uint64_t t91 = 68992LLU;

	t91 = (((x425+x426)+x427)^x428);

	if (t91 != 18445873137520514831LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x429 = UINT8_MAX;
	static int32_t x430 = -111528;
	int16_t x431 = INT16_MIN;
	volatile int32_t x432 = INT32_MAX;
	int32_t t92 = 267213228;

	t92 = (((x429+x430)+x431)^x432);

	if (t92 != -2147339608) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = -1LL;
	int32_t x434 = 131712209;
	static int64_t x435 = INT64_MIN;
	uint16_t x436 = 2U;
	int64_t t93 = 7994019394266LL;

	t93 = (((x433+x434)+x435)^x436);

	if (t93 != -9223372036723063598LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x441 = 154LLU;
	static uint8_t x442 = 3U;
	volatile uint64_t t94 = 46504561257699LLU;

	t94 = (((x441+x442)+x443)^x444);

	if (t94 != 154996425LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x445 = 51333382698985290LLU;
	volatile uint16_t x446 = 11719U;
	static int16_t x448 = -1;

	t95 = (((x445+x446)+x447)^x448);

	if (t95 != 18395410691010554607LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x449 = 2786U;
	int64_t x450 = INT64_MIN;
	int16_t x451 = INT16_MAX;
	int64_t t96 = -29160305219LL;

	t96 = (((x449+x450)+x451)^x452);

	if (t96 != 9223372036854740254LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = INT8_MIN;
	int32_t x454 = -687;
	uint32_t x455 = 5442632U;
	int8_t x456 = INT8_MIN;
	volatile uint32_t t97 = 322U;

	t97 = (((x453+x454)+x455)^x456);

	if (t97 != 4289525401U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x458 = -112398LL;
	uint32_t x459 = UINT32_MAX;
	int32_t x460 = INT32_MIN;
	volatile int64_t t98 = 90LL;

	t98 = (((x457+x458)+x459)^x460);

	if (t98 != -2147596046LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x462 = 3661;
	int16_t x463 = 3;
	static uint16_t x464 = 26U;
	volatile int32_t t99 = -10122970;

	t99 = (((x461+x462)+x463)^x464);

	if (t99 != 3530) { NG(); } else { ; }
	
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

