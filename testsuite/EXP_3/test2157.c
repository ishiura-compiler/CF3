#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
volatile int8_t x9 = INT8_MIN;
static int64_t t2 = 20321LL;
uint8_t x17 = 0U;
int32_t x19 = 430654641;
static volatile uint8_t x26 = 15U;
uint64_t x43 = UINT64_MAX;
uint8_t x50 = 0U;
uint8_t x51 = 12U;
volatile int32_t t12 = 1901262;
int32_t x55 = -176;
uint32_t x56 = 1279773U;
int16_t x57 = INT16_MIN;
uint64_t x60 = 35576756427418668LLU;
int32_t x64 = -332561210;
uint64_t x66 = UINT64_MAX;
volatile uint8_t x71 = 1U;
int32_t x73 = -647;
int16_t x74 = INT16_MAX;
static uint64_t x76 = 1450500915785192LLU;
uint64_t t18 = 6102791677332LLU;
int64_t x77 = INT64_MAX;
int32_t x81 = INT32_MAX;
static int64_t x85 = INT64_MAX;
int32_t x89 = INT32_MIN;
static uint32_t x90 = 25674U;
int32_t t23 = 30284;
uint16_t x100 = UINT16_MAX;
volatile int64_t x101 = INT64_MIN;
int64_t x106 = 5963142LL;
uint32_t x109 = 33143929U;
volatile int64_t t27 = 41232787LL;
volatile uint8_t x113 = 9U;
static int8_t x119 = INT8_MIN;
int64_t t30 = 5328329LL;
uint64_t x125 = 137196077527444LLU;
volatile int64_t t31 = -5837152013048105LL;
static int16_t x129 = -1;
volatile int64_t x131 = -1LL;
volatile int64_t t32 = -636585LL;
static int32_t x135 = 98930737;
int32_t x136 = INT32_MAX;
int64_t x139 = 127564182384915LL;
static volatile int64_t t34 = 29781274406269LL;
static int8_t x148 = 41;
uint32_t x159 = 13269068U;
uint8_t x171 = 27U;
int64_t x174 = INT64_MIN;
static int8_t x186 = INT8_MIN;
volatile int16_t x192 = -56;
volatile int32_t x201 = -1;
volatile int8_t x204 = 1;
int32_t x207 = -198;
int64_t x213 = INT64_MAX;
int16_t x222 = 4502;
int32_t t58 = 1;
uint64_t t59 = 31424LLU;
uint32_t t60 = UINT32_MAX;
uint8_t x248 = 52U;
volatile int32_t t61 = -9;
int64_t x262 = 226061LL;
uint8_t x263 = 40U;
static int8_t x266 = -1;
int16_t x269 = INT16_MIN;
int64_t x270 = INT64_MIN;
int64_t x272 = -1LL;
volatile int64_t t67 = -77157829547357LL;
volatile int64_t x279 = -1LL;
static int64_t x280 = -1LL;
int8_t x283 = -1;
int32_t x286 = -11;
int64_t x293 = INT64_MIN;
static volatile int16_t x302 = 0;
volatile uint16_t x305 = UINT16_MAX;
static int32_t x311 = 9379222;
int32_t t77 = -1252700;
int16_t x321 = INT16_MAX;
int32_t x322 = INT32_MIN;
int8_t x324 = INT8_MIN;
volatile int16_t x325 = 1;
uint64_t x332 = UINT64_MAX;
int16_t x334 = INT16_MIN;
static uint32_t x342 = 468484U;
static uint8_t x343 = 62U;
int16_t x351 = -1;
volatile uint64_t x358 = 35423960LLU;
volatile int32_t t89 = -307855411;
static int16_t x377 = INT16_MIN;
int32_t x379 = -1;
volatile uint16_t x380 = 15U;
uint16_t x385 = 30U;
uint8_t x390 = 1U;
int16_t x395 = INT16_MIN;
uint64_t x396 = 470LLU;
int32_t t99 = -1349;


void f0(void) {
	volatile int16_t x2 = 181;
	static uint64_t x3 = 1LLU;
	static int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 2427179785256LLU;

	t0 = ((x1<=x2)|(x3^x4));

	if (t0 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 31LLU;
	int32_t x6 = -1;
	int16_t x7 = 3012;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 3304772394652276LL;

	t1 = ((x5<=x6)|(x7^x8));

	if (t1 != -9223372036854772795LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	volatile int16_t x11 = INT16_MIN;
	int64_t x12 = -1LL;

	t2 = ((x9<=x10)|(x11^x12));

	if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1906U;
	int32_t x14 = INT32_MAX;
	int32_t x15 = INT32_MAX;
	uint32_t x16 = 1755U;
	static uint32_t t3 = 102U;

	t3 = ((x13<=x14)|(x15^x16));

	if (t3 != 2147481893U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	volatile int8_t x20 = -1;
	static int32_t t4 = 5410;

	t4 = ((x17<=x18)|(x19^x20));

	if (t4 != -430654642) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -5;
	uint64_t x22 = 49LLU;
	static uint64_t x23 = 56627181258271977LLU;
	uint32_t x24 = UINT32_MAX;
	volatile uint64_t t5 = 6038560LLU;

	t5 = ((x21<=x22)|(x23^x24));

	if (t5 != 56627185032106774LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	uint16_t x27 = 3U;
	int16_t x28 = -8179;
	volatile int32_t t6 = 85;

	t6 = ((x25<=x26)|(x27^x28));

	if (t6 != -8177) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MAX;
	volatile int8_t x31 = INT8_MAX;
	volatile int32_t x32 = INT32_MIN;
	int32_t t7 = 595121;

	t7 = ((x29<=x30)|(x31^x32));

	if (t7 != -2147483521) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	uint8_t x34 = 4U;
	static int32_t x35 = INT32_MIN;
	uint64_t x36 = 23183497LLU;
	static uint64_t t8 = 1568929829390128184LLU;

	t8 = ((x33<=x34)|(x35^x36));

	if (t8 != 18446744071585251465LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	static int16_t x38 = INT16_MAX;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 89U;
	int64_t t9 = -14LL;

	t9 = ((x37<=x38)|(x39^x40));

	if (t9 != -9223372036854775719LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 50861504224617900LLU;
	int64_t x42 = -418354LL;
	int32_t x44 = INT32_MIN;
	uint64_t t10 = 119066448434LLU;

	t10 = ((x41<=x42)|(x43^x44));

	if (t10 != 2147483647LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 66615890917006545LLU;
	static int8_t x46 = -1;
	int32_t x47 = -1;
	uint16_t x48 = UINT16_MAX;
	static volatile int32_t t11 = 1520;

	t11 = ((x45<=x46)|(x47^x48));

	if (t11 != -65535) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	volatile int16_t x52 = INT16_MIN;

	t12 = ((x49<=x50)|(x51^x52));

	if (t12 != -32756) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 1U;
	uint64_t x54 = 2LLU;
	static uint32_t t13 = 33493830U;

	t13 = ((x53<=x54)|(x55^x56));

	if (t13 != 4293687373U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	int8_t x59 = -1;
	uint64_t t14 = 392707106LLU;

	t14 = ((x57<=x58)|(x59^x60));

	if (t14 != 18411167317282132947LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = -154227647;
	uint8_t x62 = 3U;
	uint64_t x63 = 1110LLU;
	volatile uint64_t t15 = 91666516523374377LLU;

	t15 = ((x61<=x62)|(x63^x64));

	if (t15 != 18446744073376989329LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 103U;
	int32_t x67 = INT32_MAX;
	volatile uint16_t x68 = 24U;
	static int32_t t16 = -206003581;

	t16 = ((x65<=x66)|(x67^x68));

	if (t16 != 2147483623) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -44517919451LL;
	int8_t x70 = INT8_MAX;
	uint32_t x72 = UINT32_MAX;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = ((x69<=x70)|(x71^x72));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x75 = -1;

	t18 = ((x73<=x74)|(x75^x76));

	if (t18 != 18445293572793766423LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = INT8_MAX;
	int32_t x79 = INT32_MIN;
	uint64_t x80 = 3LLU;
	uint64_t t19 = 365319353LLU;

	t19 = ((x77<=x78)|(x79^x80));

	if (t19 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	static int64_t x83 = INT64_MIN;
	volatile int8_t x84 = INT8_MAX;
	volatile int64_t t20 = -3693593977814LL;

	t20 = ((x81<=x82)|(x83^x84));

	if (t20 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x86 = UINT8_MAX;
	uint32_t x87 = 53578U;
	static uint16_t x88 = 203U;
	volatile uint32_t t21 = 3114U;

	t21 = ((x85<=x86)|(x87^x88));

	if (t21 != 53633U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x91 = INT8_MAX;
	volatile int8_t x92 = INT8_MAX;
	int32_t t22 = 869;

	t22 = ((x89<=x90)|(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	static int32_t x94 = 12;
	int32_t x95 = 884;
	int8_t x96 = INT8_MAX;

	t23 = ((x93<=x94)|(x95^x96));

	if (t23 != 779) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int8_t x98 = INT8_MAX;
	int16_t x99 = -1;
	int32_t t24 = 10929;

	t24 = ((x97<=x98)|(x99^x100));

	if (t24 != -65536) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = -29299607449492LL;
	static uint8_t x103 = 1U;
	uint16_t x104 = 1U;
	static int32_t t25 = -209325;

	t25 = ((x101<=x102)|(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 11U;
	static uint8_t x107 = 6U;
	int32_t x108 = -3;
	volatile int32_t t26 = -91885395;

	t26 = ((x105<=x106)|(x107^x108));

	if (t26 != -5) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = -52000760;
	static int8_t x111 = INT8_MIN;
	int64_t x112 = 2245285240142065LL;

	t27 = ((x109<=x110)|(x111^x112));

	if (t27 != -2245285240141967LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MAX;
	volatile int8_t x115 = -9;
	static uint8_t x116 = 32U;
	volatile int32_t t28 = 916;

	t28 = ((x113<=x114)|(x115^x116));

	if (t28 != -41) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	uint32_t x120 = 172103068U;
	volatile uint32_t t29 = 17060U;

	t29 = ((x117<=x118)|(x119^x120));

	if (t29 != 4122864157U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = -1;
	int32_t x122 = -5203;
	int64_t x123 = INT64_MAX;
	int32_t x124 = INT32_MAX;

	t30 = ((x121<=x122)|(x123^x124));

	if (t30 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = 2112;
	int64_t x128 = INT64_MAX;

	t31 = ((x125<=x126)|(x127^x128));

	if (t31 != 9223372036854773695LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -236537317578LL;
	int8_t x132 = -1;

	t32 = ((x129<=x130)|(x131^x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	int64_t x134 = -1LL;
	static int32_t t33 = -119;

	t33 = ((x133<=x134)|(x135^x136));

	if (t33 != 2048552911) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = -14;
	int8_t x140 = -1;

	t34 = ((x137<=x138)|(x139^x140));

	if (t34 != -127564182384915LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	static int16_t x142 = INT16_MAX;
	int64_t x143 = INT64_MIN;
	volatile uint32_t x144 = 199U;
	static volatile int64_t t35 = 4021435143948281LL;

	t35 = ((x141<=x142)|(x143^x144));

	if (t35 != -9223372036854775609LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -64324500;
	static int8_t x146 = 31;
	int64_t x147 = -26616417923984203LL;
	volatile int64_t t36 = -1161954LL;

	t36 = ((x145<=x146)|(x147^x148));

	if (t36 != -26616417923984227LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int32_t x150 = -1;
	static uint64_t x151 = UINT64_MAX;
	int32_t x152 = INT32_MIN;
	uint64_t t37 = 3873284039158437LLU;

	t37 = ((x149<=x150)|(x151^x152));

	if (t37 != 2147483647LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	volatile int16_t x156 = 99;
	volatile int32_t t38 = 267972161;

	t38 = ((x153<=x154)|(x155^x156));

	if (t38 != -32669) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	static uint16_t x158 = 25189U;
	static int8_t x160 = INT8_MAX;
	volatile uint32_t t39 = 93559339U;

	t39 = ((x157<=x158)|(x159^x160));

	if (t39 != 13269043U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = 8U;
	int64_t x164 = -1LL;
	volatile int64_t t40 = -36902708889146LL;

	t40 = ((x161<=x162)|(x163^x164));

	if (t40 != -9LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	volatile int64_t x166 = INT64_MAX;
	uint64_t x167 = 4747963807841483LLU;
	int32_t x168 = 0;
	uint64_t t41 = 113286385LLU;

	t41 = ((x165<=x166)|(x167^x168));

	if (t41 != 4747963807841483LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 158436048736LLU;
	static uint16_t x170 = 1U;
	int64_t x172 = INT64_MIN;
	volatile int64_t t42 = -2598744410967181835LL;

	t42 = ((x169<=x170)|(x171^x172));

	if (t42 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	uint8_t x175 = UINT8_MAX;
	uint32_t x176 = 573226U;
	uint32_t t43 = 72217U;

	t43 = ((x173<=x174)|(x175^x176));

	if (t43 != 573397U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	volatile uint8_t x178 = 0U;
	static volatile int64_t x179 = INT64_MAX;
	static uint8_t x180 = 12U;
	volatile int64_t t44 = 49613595LL;

	t44 = ((x177<=x178)|(x179^x180));

	if (t44 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 668374952993227LLU;
	static int16_t x182 = -786;
	static volatile uint32_t x183 = 1057U;
	int64_t x184 = INT64_MAX;
	static volatile int64_t t45 = -6621901LL;

	t45 = ((x181<=x182)|(x183^x184));

	if (t45 != 9223372036854774751LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -2;
	int8_t x187 = -1;
	int64_t x188 = -58595824LL;
	int64_t t46 = 6025766573182897LL;

	t46 = ((x185<=x186)|(x187^x188));

	if (t46 != 58595823LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	uint16_t x190 = UINT16_MAX;
	int32_t x191 = -340;
	static volatile int32_t t47 = 62081;

	t47 = ((x189<=x190)|(x191^x192));

	if (t47 != 357) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 95U;
	uint16_t x194 = 419U;
	uint64_t x195 = UINT64_MAX;
	uint8_t x196 = 19U;
	uint64_t t48 = 442513224328LLU;

	t48 = ((x193<=x194)|(x195^x196));

	if (t48 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x198 = INT64_MAX;
	uint64_t x199 = 914LLU;
	uint16_t x200 = 11U;
	volatile uint64_t t49 = 3769997975232480LLU;

	t49 = ((x197<=x198)|(x199^x200));

	if (t49 != 921LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	static volatile int32_t x203 = -8119;
	volatile int32_t t50 = 5;

	t50 = ((x201<=x202)|(x203^x204));

	if (t50 != -8120) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	int32_t x206 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t51 = 8;

	t51 = ((x205<=x206)|(x207^x208));

	if (t51 != 32570) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = -8;
	int32_t x211 = -31;
	int64_t x212 = INT64_MIN;
	int64_t t52 = -408189816253396LL;

	t52 = ((x209<=x210)|(x211^x212));

	if (t52 != 9223372036854775777LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x214 = INT8_MIN;
	volatile uint32_t x215 = 23804U;
	int64_t x216 = INT64_MIN;
	int64_t t53 = -10047339119191842LL;

	t53 = ((x213<=x214)|(x215^x216));

	if (t53 != -9223372036854752004LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MAX;
	static int8_t x218 = INT8_MAX;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = 14607938U;
	volatile uint32_t t54 = 86212U;

	t54 = ((x217<=x218)|(x219^x220));

	if (t54 != 4280359362U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	uint32_t x223 = 543964U;
	static int16_t x224 = -1;
	uint32_t t55 = 98U;

	t55 = ((x221<=x222)|(x223^x224));

	if (t55 != 4294423331U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x226 = 68500830861287266LL;
	int32_t x227 = INT32_MIN;
	static int16_t x228 = -1;
	int32_t t56 = INT32_MAX;

	t56 = ((x225<=x226)|(x227^x228));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MIN;
	uint16_t x230 = 100U;
	volatile int64_t x231 = INT64_MIN;
	static uint16_t x232 = UINT16_MAX;
	int64_t t57 = 51LL;

	t57 = ((x229<=x230)|(x231^x232));

	if (t57 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	uint32_t x234 = UINT32_MAX;
	static int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MAX;

	t58 = ((x233<=x234)|(x235^x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = 403;
	uint8_t x238 = UINT8_MAX;
	uint64_t x239 = 3015730251LLU;
	uint32_t x240 = 11U;

	t59 = ((x237<=x238)|(x239^x240));

	if (t59 != 3015730240LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 330U;
	static volatile int8_t x242 = INT8_MIN;
	uint16_t x243 = 1U;
	uint32_t x244 = UINT32_MAX;

	t60 = ((x241<=x242)|(x243^x244));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	int8_t x246 = INT8_MIN;
	int8_t x247 = -1;

	t61 = ((x245<=x246)|(x247^x248));

	if (t61 != -53) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	static int64_t x250 = -322446492175LL;
	int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MAX;
	volatile int32_t t62 = 1;

	t62 = ((x249<=x250)|(x251^x252));

	if (t62 != -2147450881) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	static int32_t x256 = INT32_MAX;
	int64_t t63 = -13372301471LL;

	t63 = ((x253<=x254)|(x255^x256));

	if (t63 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = 1;
	uint8_t x258 = 7U;
	int32_t x259 = 10809;
	int64_t x260 = INT64_MAX;
	int64_t t64 = 972315017473LL;

	t64 = ((x257<=x258)|(x259^x260));

	if (t64 != 9223372036854764999LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = -1;
	uint32_t x264 = 7U;
	volatile uint32_t t65 = 2677U;

	t65 = ((x261<=x262)|(x263^x264));

	if (t65 != 47U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x265 = 228616007208258LLU;
	int32_t x267 = -54293097;
	uint64_t x268 = 2050LLU;
	static volatile uint64_t t66 = 203659216LLU;

	t66 = ((x265<=x266)|(x267^x268));

	if (t66 != 18446744073655256469LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x271 = UINT8_MAX;

	t67 = ((x269<=x270)|(x271^x272));

	if (t67 != -256LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	volatile int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;
	int64_t t68 = 529813046625425LL;

	t68 = ((x273<=x274)|(x275^x276));

	if (t68 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = 6U;
	int8_t x278 = INT8_MIN;
	volatile int64_t t69 = 657221147986363644LL;

	t69 = ((x277<=x278)|(x279^x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x281 = INT32_MAX;
	volatile int8_t x282 = -1;
	int64_t x284 = INT64_MIN;
	static int64_t t70 = INT64_MAX;

	t70 = ((x281<=x282)|(x283^x284));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	volatile int32_t x287 = INT32_MIN;
	int16_t x288 = -1;
	int32_t t71 = INT32_MAX;

	t71 = ((x285<=x286)|(x287^x288));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	volatile int8_t x291 = -1;
	uint32_t x292 = 1U;
	uint32_t t72 = UINT32_MAX;

	t72 = ((x289<=x290)|(x291^x292));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -3;
	volatile int8_t x295 = -1;
	int16_t x296 = INT16_MIN;
	static int32_t t73 = 47496;

	t73 = ((x293<=x294)|(x295^x296));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	int8_t x298 = INT8_MIN;
	static int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t74 = -1;

	t74 = ((x297<=x298)|(x299^x300));

	if (t74 != -32641) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 1LL;
	static int16_t x303 = -1;
	static uint8_t x304 = 0U;
	int32_t t75 = 449585053;

	t75 = ((x301<=x302)|(x303^x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x306 = 5768U;
	volatile int16_t x307 = -17;
	uint16_t x308 = 3U;
	int32_t t76 = 192919;

	t76 = ((x305<=x306)|(x307^x308));

	if (t76 != -20) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 72U;
	int16_t x310 = 0;
	volatile int16_t x312 = -2;

	t77 = ((x309<=x310)|(x311^x312));

	if (t77 != -9379224) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = -1;
	uint64_t x314 = 1001752850483LLU;
	int32_t x315 = -1;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t78 = -12351797;

	t78 = ((x313<=x314)|(x315^x316));

	if (t78 != -65536) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -1;
	int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MAX;
	volatile int64_t t79 = 101129756170675LL;

	t79 = ((x317<=x318)|(x319^x320));

	if (t79 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = INT8_MIN;
	volatile int32_t t80 = 22;

	t80 = ((x321<=x322)|(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x326 = INT64_MIN;
	int32_t x327 = -5841158;
	int64_t x328 = -1LL;
	int64_t t81 = 1775893565682LL;

	t81 = ((x325<=x326)|(x327^x328));

	if (t81 != 5841157LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 214813842741227297LLU;
	int16_t x330 = INT16_MIN;
	volatile int32_t x331 = INT32_MIN;
	static uint64_t t82 = 1054074774230326LLU;

	t82 = ((x329<=x330)|(x331^x332));

	if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -6594958515697LL;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MIN;
	int64_t t83 = -1LL;

	t83 = ((x333<=x334)|(x335^x336));

	if (t83 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	uint32_t x338 = 123U;
	volatile uint8_t x339 = UINT8_MAX;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 16299397;

	t84 = ((x337<=x338)|(x339^x340));

	if (t84 != -32513) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	uint32_t x344 = 85526U;
	volatile uint32_t t85 = 13688547U;

	t85 = ((x341<=x342)|(x343^x344));

	if (t85 != 85544U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	uint32_t x346 = 61U;
	volatile uint32_t x347 = 5737992U;
	int16_t x348 = INT16_MAX;
	static uint32_t t86 = 23944746U;

	t86 = ((x345<=x346)|(x347^x348));

	if (t86 != 5763575U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 2144U;
	volatile int8_t x350 = -1;
	static int8_t x352 = -1;
	static int32_t t87 = 30640;

	t87 = ((x349<=x350)|(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 62U;
	uint32_t x354 = 148423186U;
	int32_t x355 = -1;
	int8_t x356 = 1;
	volatile int32_t t88 = 430278;

	t88 = ((x353<=x354)|(x355^x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 14;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;

	t89 = ((x357<=x358)|(x359^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	uint32_t x362 = 2057370320U;
	volatile int8_t x363 = 0;
	static int8_t x364 = 31;
	volatile int32_t t90 = -62050;

	t90 = ((x361<=x362)|(x363^x364));

	if (t90 != 31) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -3801;
	int8_t x366 = -1;
	volatile uint8_t x367 = 3U;
	int64_t x368 = INT64_MAX;
	volatile int64_t t91 = -1404211LL;

	t91 = ((x365<=x366)|(x367^x368));

	if (t91 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 77U;
	static uint32_t x370 = UINT32_MAX;
	int32_t x371 = -13;
	volatile int8_t x372 = INT8_MAX;
	static int32_t t92 = 646;

	t92 = ((x369<=x370)|(x371^x372));

	if (t92 != -115) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -24LL;
	int8_t x374 = INT8_MAX;
	int8_t x375 = -1;
	volatile int16_t x376 = -1;
	volatile int32_t t93 = -2983;

	t93 = ((x373<=x374)|(x375^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	int32_t t94 = -58;

	t94 = ((x377<=x378)|(x379^x380));

	if (t94 != -15) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 113;
	int8_t x382 = INT8_MAX;
	uint16_t x383 = 474U;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 15;

	t95 = ((x381<=x382)|(x383^x384));

	if (t95 != -32293) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = UINT16_MAX;
	uint32_t x387 = 416265702U;
	int32_t x388 = INT32_MIN;
	volatile uint32_t t96 = 345193U;

	t96 = ((x385<=x386)|(x387^x388));

	if (t96 != 2563749351U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int16_t x391 = INT16_MAX;
	uint64_t x392 = 97LLU;
	static volatile uint64_t t97 = 165LLU;

	t97 = ((x389<=x390)|(x391^x392));

	if (t97 != 32671LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 515958278LL;
	int32_t x394 = INT32_MIN;
	static volatile uint64_t t98 = 1570168LLU;

	t98 = ((x393<=x394)|(x395^x396));

	if (t98 != 18446744073709519318LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 761396U;
	uint16_t x398 = 12362U;
	int8_t x399 = INT8_MAX;
	static volatile int8_t x400 = INT8_MAX;

	t99 = ((x397<=x398)|(x399^x400));

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

