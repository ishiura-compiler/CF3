#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -6;
uint8_t x5 = 41U;
int32_t x7 = -41;
int32_t x8 = INT32_MAX;
int8_t x23 = -27;
int8_t x24 = -1;
volatile int64_t t4 = -22873484LL;
volatile int64_t x28 = -1LL;
uint64_t x36 = 323561687526486219LLU;
uint64_t x39 = UINT64_MAX;
static int64_t x47 = 72229377121665793LL;
int64_t x54 = -2238005570556862823LL;
static int16_t x69 = INT16_MAX;
static int16_t x70 = INT16_MIN;
volatile uint16_t x71 = 950U;
int32_t x75 = INT32_MIN;
volatile int32_t t18 = -3;
int8_t x98 = -8;
int64_t x100 = 360668881273399LL;
volatile int32_t t22 = -106;
int8_t x106 = INT8_MIN;
volatile int8_t x107 = INT8_MIN;
volatile int16_t x109 = INT16_MAX;
volatile int32_t t24 = -4697639;
int64_t x122 = -1LL;
int16_t x123 = INT16_MIN;
int64_t t27 = 1751944890LL;
int8_t x125 = INT8_MIN;
static int32_t x132 = INT32_MAX;
uint64_t x136 = 102565964789685LLU;
int8_t x139 = INT8_MIN;
uint8_t x140 = UINT8_MAX;
int64_t x142 = INT64_MIN;
uint64_t x144 = 851LLU;
uint64_t x146 = 2277750043832707LLU;
uint64_t t33 = 6706139LLU;
int8_t x153 = INT8_MIN;
int32_t x159 = INT32_MIN;
int64_t x160 = 73050728259804002LL;
volatile int32_t x162 = INT32_MIN;
static int32_t t39 = -41373640;
int8_t x175 = 10;
int32_t x180 = INT32_MIN;
volatile int64_t x183 = -1561025028328475LL;
int16_t x194 = -1;
static volatile uint32_t x197 = 14U;
int64_t t46 = 50636209475887128LL;
static int16_t x201 = -1;
static uint8_t x207 = 5U;
int64_t x208 = INT64_MAX;
uint32_t x211 = 445997U;
uint64_t x218 = 42618946LLU;
int64_t x220 = 25487LL;
int16_t x221 = 6305;
static int16_t x226 = -1;
uint8_t x228 = 28U;
volatile int32_t t53 = -58799719;
static int32_t x229 = INT32_MIN;
uint32_t x230 = UINT32_MAX;
int64_t x236 = INT64_MIN;
int64_t t55 = -1523762105643LL;
int32_t x238 = 715;
volatile int32_t t56 = -3742400;
uint32_t x241 = UINT32_MAX;
uint8_t x244 = 99U;
uint8_t x249 = 20U;
int32_t t58 = 648456982;
static int64_t x256 = -1LL;
int32_t x260 = -1;
int16_t x262 = 8539;
uint8_t x263 = 11U;
int16_t x265 = 15;
int16_t x267 = INT16_MIN;
static volatile uint64_t x279 = 19704189783384031LLU;
volatile uint64_t x286 = 391554610195939621LLU;
uint32_t x293 = UINT32_MAX;
volatile int16_t x300 = INT16_MIN;
static volatile uint32_t t71 = 6U;
static uint64_t x321 = 155LLU;
uint32_t x323 = 8U;
int16_t x326 = 14932;
int64_t x327 = -74862LL;
uint16_t x330 = 1765U;
static uint16_t x331 = UINT16_MAX;
int64_t x334 = -4226387013LL;
volatile int64_t t81 = -350662425LL;
int64_t x347 = -3516263484098966486LL;
static int64_t x348 = -65860881124LL;
uint64_t x351 = 6424185226LLU;
volatile int32_t t83 = 4272834;
static volatile int64_t t84 = 4LL;
static int8_t x368 = INT8_MIN;
int32_t t91 = 0;
static volatile int64_t x392 = -1LL;
uint64_t x399 = UINT64_MAX;
uint32_t x401 = 1171513002U;
int64_t x407 = INT64_MIN;
volatile int64_t t99 = 760761209LL;


void f0(void) {
	volatile uint16_t x1 = 9U;
	static uint8_t x2 = 1U;
	static uint16_t x3 = UINT16_MAX;
	volatile int16_t x4 = -1;

	t0 = ((x1%x2)^(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	static volatile int32_t t1 = 25254;

	t1 = ((x5%x6)^(x7<x8));

	if (t1 != 40) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	int32_t x10 = -92345061;
	volatile int8_t x11 = 29;
	static volatile int8_t x12 = INT8_MAX;
	volatile int64_t t2 = 1LL;

	t2 = ((x9%x10)^(x11<x12));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x17 = 96U;
	volatile int32_t x18 = INT32_MIN;
	uint16_t x19 = 31486U;
	int32_t x20 = -1;
	volatile uint32_t t3 = 1111962655U;

	t3 = ((x17%x18)^(x19<x20));

	if (t3 != 96U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 15LL;
	static int32_t x22 = INT32_MIN;

	t4 = ((x21%x22)^(x23<x24));

	if (t4 != 14LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	uint32_t x26 = 14006275U;
	uint64_t x27 = 4041099399LLU;
	volatile uint32_t t5 = 11920U;

	t5 = ((x25%x26)^(x27<x28));

	if (t5 != 9047144U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MAX;
	int32_t x30 = INT32_MAX;
	int32_t x31 = INT32_MAX;
	int32_t x32 = INT32_MIN;
	volatile int32_t t6 = -1699119;

	t6 = ((x29%x30)^(x31<x32));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 107U;
	uint64_t x34 = UINT64_MAX;
	uint64_t x35 = 5LLU;
	volatile uint64_t t7 = 25LLU;

	t7 = ((x33%x34)^(x35<x36));

	if (t7 != 106LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 24U;
	int64_t x38 = INT64_MIN;
	uint8_t x40 = 16U;
	int64_t t8 = 275071312LL;

	t8 = ((x37%x38)^(x39<x40));

	if (t8 != 24LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	int64_t x43 = 84367660698617LL;
	static uint32_t x44 = UINT32_MAX;
	volatile int64_t t9 = -2678002451960507LL;

	t9 = ((x41%x42)^(x43<x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	static volatile int32_t x48 = INT32_MAX;
	int64_t t10 = 3633LL;

	t10 = ((x45%x46)^(x47<x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	static int64_t x55 = -1LL;
	int64_t x56 = INT64_MIN;
	volatile int64_t t11 = 5736063687138LL;

	t11 = ((x53%x54)^(x55<x56));

	if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	static int64_t x58 = INT64_MAX;
	int64_t x59 = INT64_MAX;
	volatile int8_t x60 = 30;
	volatile uint64_t t12 = 9012509LLU;

	t12 = ((x57%x58)^(x59<x60));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	uint16_t x62 = 5895U;
	uint32_t x63 = 1025452U;
	int16_t x64 = INT16_MAX;
	int32_t t13 = 44766;

	t13 = ((x61%x62)^(x63<x64));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = INT32_MIN;
	static uint8_t x67 = 0U;
	uint16_t x68 = UINT16_MAX;
	static volatile int32_t t14 = 5499603;

	t14 = ((x65%x66)^(x67<x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x72 = -1;
	volatile int32_t t15 = -2;

	t15 = ((x69%x70)^(x71<x72));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = INT32_MIN;
	int16_t x74 = -48;
	static int16_t x76 = INT16_MIN;
	static int32_t t16 = -1470;

	t16 = ((x73%x74)^(x75<x76));

	if (t16 != -31) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x77 = UINT16_MAX;
	int8_t x78 = 3;
	int32_t x79 = -1;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t17 = -17310;

	t17 = ((x77%x78)^(x79<x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = -1;
	uint32_t x87 = UINT32_MAX;
	volatile int64_t x88 = INT64_MIN;

	t18 = ((x85%x86)^(x87<x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = -51;
	static int8_t x90 = INT8_MIN;
	static int32_t x91 = INT32_MIN;
	int32_t x92 = 1;
	static volatile int32_t t19 = 172134;

	t19 = ((x89%x90)^(x91<x92));

	if (t19 != -52) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 0U;
	uint64_t x94 = 2LLU;
	int8_t x95 = INT8_MIN;
	int16_t x96 = -1;
	uint64_t t20 = 15737LLU;

	t20 = ((x93%x94)^(x95<x96));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 28U;
	int64_t x99 = INT64_MIN;
	int32_t t21 = 86278;

	t21 = ((x97%x98)^(x99<x100));

	if (t21 != 5) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -2;
	int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MAX;

	t22 = ((x101%x102)^(x103<x104));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = INT64_MAX;
	int16_t x108 = INT16_MIN;
	volatile int64_t t23 = -1137839LL;

	t23 = ((x105%x106)^(x107<x108));

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x110 = -1;
	uint32_t x111 = UINT32_MAX;
	static uint32_t x112 = 1U;

	t24 = ((x109%x110)^(x111<x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = INT64_MIN;
	volatile int16_t x114 = -1;
	int16_t x115 = INT16_MIN;
	volatile uint64_t x116 = UINT64_MAX;
	int64_t t25 = 1842922LL;

	t25 = ((x113%x114)^(x115<x116));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MIN;
	static uint8_t x120 = 27U;
	static volatile int32_t t26 = -7918748;

	t26 = ((x117%x118)^(x119<x120));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	static int64_t x124 = 587725LL;

	t27 = ((x121%x122)^(x123<x124));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = INT32_MAX;
	uint8_t x127 = UINT8_MAX;
	uint8_t x128 = 113U;
	int32_t t28 = -1;

	t28 = ((x125%x126)^(x127<x128));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 624904950U;
	int32_t x130 = 925583448;
	int64_t x131 = -1LL;
	volatile uint32_t t29 = 371610300U;

	t29 = ((x129%x130)^(x131<x132));

	if (t29 != 624904951U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x133 = INT16_MAX;
	int64_t x134 = INT64_MAX;
	int64_t x135 = -1LL;
	int64_t t30 = 2486020181LL;

	t30 = ((x133%x134)^(x135<x136));

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -1;
	uint64_t x138 = 17LLU;
	volatile uint64_t t31 = 2202653LLU;

	t31 = ((x137%x138)^(x139<x140));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 1610U;
	uint16_t x143 = UINT16_MAX;
	volatile int64_t t32 = 68591978009982773LL;

	t32 = ((x141%x142)^(x143<x144));

	if (t32 != 1610LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = 2293;
	uint8_t x147 = UINT8_MAX;
	static uint16_t x148 = UINT16_MAX;

	t33 = ((x145%x146)^(x147<x148));

	if (t33 != 2292LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	uint8_t x150 = 35U;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = INT32_MIN;
	volatile int64_t t34 = 14790161554411224LL;

	t34 = ((x149%x150)^(x151<x152));

	if (t34 != -8LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x154 = INT64_MAX;
	volatile int16_t x155 = INT16_MIN;
	int16_t x156 = 1;
	volatile int64_t t35 = -7LL;

	t35 = ((x153%x154)^(x155<x156));

	if (t35 != -127LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = 1;
	volatile int32_t x158 = INT32_MIN;
	volatile int32_t t36 = -17855;

	t36 = ((x157%x158)^(x159<x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x161 = 3;
	int32_t x163 = -14580509;
	static int64_t x164 = -1LL;
	int32_t t37 = -20255520;

	t37 = ((x161%x162)^(x163<x164));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x165 = 116153;
	static int8_t x166 = 2;
	uint16_t x167 = 12U;
	static volatile int8_t x168 = 7;
	int32_t t38 = 58;

	t38 = ((x165%x166)^(x167<x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = UINT8_MAX;
	static int32_t x170 = INT32_MIN;
	int32_t x171 = 77265688;
	uint16_t x172 = 33U;

	t39 = ((x169%x170)^(x171<x172));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x173 = 237U;
	int64_t x174 = INT64_MAX;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int64_t t40 = 147081093701LL;

	t40 = ((x173%x174)^(x175<x176));

	if (t40 != 236LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 470U;
	volatile int32_t x178 = INT32_MIN;
	uint64_t x179 = 45738928664120032LLU;
	volatile int32_t t41 = -10826;

	t41 = ((x177%x178)^(x179<x180));

	if (t41 != 471) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = INT16_MIN;
	volatile int64_t x184 = INT64_MAX;
	int32_t t42 = 507754506;

	t42 = ((x181%x182)^(x183<x184));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x185 = UINT64_MAX;
	int32_t x186 = INT32_MIN;
	volatile uint16_t x187 = 4U;
	int32_t x188 = INT32_MIN;
	static volatile uint64_t t43 = 12395937541LLU;

	t43 = ((x185%x186)^(x187<x188));

	if (t43 != 2147483647LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = -1122481;
	uint64_t x190 = 41547340LLU;
	int32_t x191 = 3;
	static int16_t x192 = INT16_MAX;
	volatile uint64_t t44 = 312536042419195515LLU;

	t44 = ((x189%x190)^(x191<x192));

	if (t44 != 8736594LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = -1LL;
	int8_t x195 = INT8_MIN;
	volatile int16_t x196 = 4015;
	volatile int64_t t45 = 1LL;

	t45 = ((x193%x194)^(x195<x196));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x198 = INT64_MAX;
	static int64_t x199 = 3121133573719154861LL;
	int16_t x200 = INT16_MAX;

	t46 = ((x197%x198)^(x199<x200));

	if (t46 != 14LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x202 = -3548;
	int8_t x203 = INT8_MIN;
	volatile int16_t x204 = -2;
	volatile int32_t t47 = 1;

	t47 = ((x201%x202)^(x203<x204));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MAX;
	static int64_t t48 = -5108634349066823LL;

	t48 = ((x205%x206)^(x207<x208));

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = -1;
	int32_t x210 = INT32_MAX;
	uint64_t x212 = 847020300952833LLU;
	int32_t t49 = 4205;

	t49 = ((x209%x210)^(x211<x212));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = 14025;
	int8_t x214 = -1;
	static volatile int16_t x215 = INT16_MIN;
	uint16_t x216 = 320U;
	volatile int32_t t50 = 1009955;

	t50 = ((x213%x214)^(x215<x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -1;
	int64_t x219 = INT64_MIN;
	static uint64_t t51 = 13902LLU;

	t51 = ((x217%x218)^(x219<x220));

	if (t51 != 32780132LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x222 = INT16_MIN;
	uint32_t x223 = UINT32_MAX;
	int16_t x224 = INT16_MAX;
	static int32_t t52 = 84;

	t52 = ((x221%x222)^(x223<x224));

	if (t52 != 6305) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = -1;
	uint8_t x227 = 27U;

	t53 = ((x225%x226)^(x227<x228));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x231 = INT64_MIN;
	volatile int16_t x232 = INT16_MIN;
	volatile uint32_t t54 = 23166U;

	t54 = ((x229%x230)^(x231<x232));

	if (t54 != 2147483649U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x233 = INT64_MAX;
	static int64_t x234 = INT64_MAX;
	static volatile int16_t x235 = -1;

	t55 = ((x233%x234)^(x235<x236));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = 90U;
	static uint64_t x239 = 503522110284218122LLU;
	uint8_t x240 = 2U;

	t56 = ((x237%x238)^(x239<x240));

	if (t56 != 90) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x242 = INT8_MIN;
	int32_t x243 = INT32_MIN;
	volatile uint32_t t57 = 121694U;

	t57 = ((x241%x242)^(x243<x244));

	if (t57 != 126U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x250 = 3172U;
	int16_t x251 = -5168;
	static int64_t x252 = INT64_MIN;

	t58 = ((x249%x250)^(x251<x252));

	if (t58 != 20) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = UINT8_MAX;
	static int64_t x254 = INT64_MIN;
	volatile int16_t x255 = INT16_MAX;
	static int64_t t59 = -10LL;

	t59 = ((x253%x254)^(x255<x256));

	if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MAX;
	static int32_t t60 = 11756;

	t60 = ((x257%x258)^(x259<x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = -1;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t61 = 242609;

	t61 = ((x261%x262)^(x263<x264));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x266 = INT16_MAX;
	int64_t x268 = -111843LL;
	static int32_t t62 = -37786;

	t62 = ((x265%x266)^(x267<x268));

	if (t62 != 15) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	volatile int32_t x270 = -3121;
	int8_t x271 = -1;
	uint8_t x272 = 0U;
	volatile int64_t t63 = -25068LL;

	t63 = ((x269%x270)^(x271<x272));

	if (t63 != -1874LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x273 = UINT32_MAX;
	int64_t x274 = -100651704LL;
	volatile int16_t x275 = INT16_MIN;
	uint32_t x276 = UINT32_MAX;
	int64_t t64 = 3924963188688LL;

	t64 = ((x273%x274)^(x275<x276));

	if (t64 != 67595726LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = 14784;
	uint16_t x278 = 1U;
	int16_t x280 = INT16_MAX;
	int32_t t65 = -25100;

	t65 = ((x277%x278)^(x279<x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x281 = 14U;
	int8_t x282 = INT8_MIN;
	int32_t x283 = -1;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t66 = 1426;

	t66 = ((x281%x282)^(x283<x284));

	if (t66 != 14) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = INT32_MIN;
	int32_t x287 = INT32_MAX;
	int64_t x288 = -21633232868LL;
	uint64_t t67 = 1184063563430LLU;

	t67 = ((x285%x286)^(x287<x288));

	if (t67 != 43677392352905781LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MAX;
	volatile int32_t x291 = INT32_MAX;
	int16_t x292 = INT16_MAX;
	int32_t t68 = -19;

	t68 = ((x289%x290)^(x291<x292));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x294 = INT16_MAX;
	static uint64_t x295 = 53895752650LLU;
	volatile int16_t x296 = INT16_MIN;
	static volatile uint32_t t69 = 988U;

	t69 = ((x293%x294)^(x295<x296));

	if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MAX;
	volatile int64_t x298 = INT64_MIN;
	uint16_t x299 = 0U;
	int64_t t70 = -132691029LL;

	t70 = ((x297%x298)^(x299<x300));

	if (t70 != 127LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x301 = 1;
	uint32_t x302 = 404158U;
	int32_t x303 = INT32_MAX;
	volatile int64_t x304 = -1LL;

	t71 = ((x301%x302)^(x303<x304));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = 167899U;
	int8_t x306 = -7;
	uint64_t x307 = 602LLU;
	uint16_t x308 = UINT16_MAX;
	static uint32_t t72 = 29274434U;

	t72 = ((x305%x306)^(x307<x308));

	if (t72 != 167898U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x309 = 12705211U;
	uint64_t x310 = UINT64_MAX;
	static uint32_t x311 = 815804379U;
	int16_t x312 = -1;
	static uint64_t t73 = 520851LLU;

	t73 = ((x309%x310)^(x311<x312));

	if (t73 != 12705210LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = UINT16_MAX;
	volatile uint8_t x314 = 10U;
	volatile int8_t x315 = -1;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t74 = 133509576;

	t74 = ((x313%x314)^(x315<x316));

	if (t74 != 5) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = UINT8_MAX;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = INT32_MIN;
	int16_t x320 = 173;
	uint32_t t75 = 8U;

	t75 = ((x317%x318)^(x319<x320));

	if (t75 != 254U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x322 = UINT16_MAX;
	uint16_t x324 = 26U;
	volatile uint64_t t76 = 3LLU;

	t76 = ((x321%x322)^(x323<x324));

	if (t76 != 154LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = INT16_MAX;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t77 = -13036916;

	t77 = ((x325%x326)^(x327<x328));

	if (t77 != 2902) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 16U;
	int8_t x332 = -4;
	volatile int32_t t78 = 9375445;

	t78 = ((x329%x330)^(x331<x332));

	if (t78 != 16) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = 1U;
	static uint8_t x335 = 7U;
	static uint16_t x336 = 773U;
	volatile int64_t t79 = -108LL;

	t79 = ((x333%x334)^(x335<x336));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x337 = 981999;
	static uint16_t x338 = UINT16_MAX;
	static int32_t x339 = 141846;
	int64_t x340 = INT64_MIN;
	volatile int32_t t80 = 303427;

	t80 = ((x337%x338)^(x339<x340));

	if (t80 != 64509) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;
	uint16_t x344 = 482U;

	t81 = ((x341%x342)^(x343<x344));

	if (t81 != 32766LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MAX;
	static uint16_t x346 = 6744U;
	int64_t t82 = -9515723094033LL;

	t82 = ((x345%x346)^(x347<x348));

	if (t82 != 2718LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x349 = -15443;
	int32_t x350 = -742102652;
	int8_t x352 = INT8_MIN;

	t83 = ((x349%x350)^(x351<x352));

	if (t83 != -15444) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = 81LL;
	int8_t x354 = INT8_MIN;
	int8_t x355 = -1;
	int8_t x356 = INT8_MAX;

	t84 = ((x353%x354)^(x355<x356));

	if (t84 != 80LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = 16;
	int16_t x358 = INT16_MIN;
	int8_t x359 = -2;
	int32_t x360 = INT32_MAX;
	volatile int32_t t85 = 27;

	t85 = ((x357%x358)^(x359<x360));

	if (t85 != 17) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MAX;
	uint32_t x362 = 11183U;
	volatile int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;
	volatile uint32_t t86 = 356U;

	t86 = ((x361%x362)^(x363<x364));

	if (t86 != 10401U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MIN;
	static int16_t x366 = -1;
	int8_t x367 = INT8_MIN;
	static volatile int64_t t87 = -110626117023LL;

	t87 = ((x365%x366)^(x367<x368));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -10;
	int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MAX;
	int32_t x372 = INT32_MAX;
	int32_t t88 = -7575;

	t88 = ((x369%x370)^(x371<x372));

	if (t88 != -9) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = 1;
	volatile int16_t x374 = INT16_MIN;
	int64_t x375 = -2092534LL;
	uint32_t x376 = 1113513484U;
	volatile int32_t t89 = 3;

	t89 = ((x373%x374)^(x375<x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = -1LL;
	int8_t x378 = -2;
	volatile uint64_t x379 = 85LLU;
	volatile uint16_t x380 = 250U;
	volatile int64_t t90 = 422896044913LL;

	t90 = ((x377%x378)^(x379<x380));

	if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MAX;
	int32_t x382 = INT32_MAX;
	int64_t x383 = -1LL;
	uint8_t x384 = 33U;

	t91 = ((x381%x382)^(x383<x384));

	if (t91 != 32766) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x385 = 469027410358LL;
	int64_t x386 = -1LL;
	uint8_t x387 = 0U;
	volatile uint8_t x388 = 6U;
	int64_t t92 = 130390376706061104LL;

	t92 = ((x385%x386)^(x387<x388));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x389 = 572U;
	int64_t x390 = -511763010332569835LL;
	uint8_t x391 = 2U;
	volatile int64_t t93 = -106735187086LL;

	t93 = ((x389%x390)^(x391<x392));

	if (t93 != 572LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MIN;
	uint32_t x394 = 2570866U;
	uint8_t x395 = UINT8_MAX;
	volatile uint16_t x396 = 17620U;
	uint32_t t94 = 653928926U;

	t94 = ((x393%x394)^(x395<x396));

	if (t94 != 810539U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x397 = 57U;
	uint32_t x398 = UINT32_MAX;
	int32_t x400 = -1;
	volatile uint32_t t95 = 1547822037U;

	t95 = ((x397%x398)^(x399<x400));

	if (t95 != 57U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x402 = -1;
	int64_t x403 = INT64_MIN;
	int8_t x404 = INT8_MAX;
	static volatile uint32_t t96 = 5214574U;

	t96 = ((x401%x402)^(x403<x404));

	if (t96 != 1171513003U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x405 = INT16_MIN;
	uint8_t x406 = UINT8_MAX;
	static int32_t x408 = INT32_MIN;
	volatile int32_t t97 = -1674069;

	t97 = ((x405%x406)^(x407<x408));

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x409 = 6846617U;
	int64_t x410 = INT64_MIN;
	static int8_t x411 = -1;
	volatile int32_t x412 = 30560570;
	int64_t t98 = -6LL;

	t98 = ((x409%x410)^(x411<x412));

	if (t98 != 6846616LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = -217786342LL;
	static volatile int16_t x414 = INT16_MIN;
	int8_t x415 = -2;
	uint64_t x416 = 1281709LLU;

	t99 = ((x413%x414)^(x415<x416));

	if (t99 != -10214LL) { NG(); } else { ; }
	
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

