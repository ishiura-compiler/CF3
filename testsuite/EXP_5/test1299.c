#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x4 = UINT64_MAX;
int16_t x6 = -9;
int64_t x13 = -1LL;
static volatile int8_t x25 = INT8_MAX;
volatile uint64_t x39 = 15697192675LLU;
int8_t x58 = INT8_MIN;
volatile int16_t x59 = -1832;
int16_t x60 = INT16_MIN;
int8_t x68 = -2;
static int64_t x72 = INT64_MAX;
int64_t t17 = 21251657310523302LL;
volatile int64_t x77 = INT64_MIN;
static volatile int32_t x80 = INT32_MAX;
uint32_t x81 = 217999488U;
int8_t x85 = INT8_MIN;
volatile int64_t x88 = INT64_MAX;
int16_t x98 = -1;
volatile int32_t x99 = INT32_MIN;
volatile uint64_t t25 = 198430533539LLU;
uint32_t x118 = 47903382U;
int32_t t30 = -57;
uint16_t x126 = UINT16_MAX;
int32_t x131 = INT32_MIN;
volatile uint32_t x134 = 7837596U;
volatile int8_t x138 = INT8_MIN;
int64_t x141 = 31960LL;
int32_t x142 = INT32_MIN;
int32_t x148 = -1;
uint16_t x149 = 3505U;
uint8_t x154 = 119U;
volatile int32_t t38 = INT32_MIN;
uint64_t x160 = 8513LLU;
uint32_t x170 = 250U;
int64_t x177 = 174723LL;
int64_t x179 = -1LL;
int16_t x184 = -1;
volatile int32_t t46 = 509682;
int8_t x189 = INT8_MAX;
volatile uint8_t x191 = 2U;
static int64_t x196 = INT64_MIN;
int16_t x197 = INT16_MAX;
uint32_t t51 = UINT32_MAX;
int32_t x209 = -1516;
int32_t x210 = 3528;
int32_t t52 = -70;
int16_t x217 = INT16_MIN;
int64_t x219 = -34LL;
static volatile int64_t x221 = -862030345942201LL;
int64_t x224 = -1499LL;
volatile int32_t t57 = -113559765;
static int32_t x234 = 1011;
int8_t x248 = INT8_MIN;
uint32_t x252 = 5641725U;
int16_t x253 = -1;
static volatile int32_t t64 = -10;
static uint8_t x268 = 109U;
static int32_t t67 = -2338;
int16_t x276 = INT16_MAX;
uint64_t x279 = UINT64_MAX;
int8_t x288 = INT8_MIN;
volatile uint16_t x291 = UINT16_MAX;
uint8_t x292 = UINT8_MAX;
int32_t x297 = 11512468;
static volatile int8_t x299 = INT8_MAX;
int32_t x303 = 402923608;
static int8_t x308 = -5;
volatile uint32_t t79 = 407U;
uint32_t x329 = UINT32_MAX;
static int16_t x340 = -1;
int32_t x344 = INT32_MIN;
int16_t x349 = 0;
uint32_t x350 = 26894292U;
uint32_t x356 = 246U;
volatile int32_t t89 = -406032273;
volatile int8_t x361 = INT8_MAX;
int64_t x365 = INT64_MIN;
int32_t x367 = -1;
volatile uint8_t x371 = UINT8_MAX;
int16_t x372 = INT16_MAX;
int16_t x378 = -1;
int64_t x381 = INT64_MAX;
int8_t x382 = INT8_MIN;
volatile int64_t t95 = INT64_MAX;
uint64_t x389 = 59079253471LLU;
volatile int16_t x395 = -5179;
int64_t x398 = 63105020230LL;


void f0(void) {
	uint8_t x1 = 5U;
	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MAX;
	volatile int32_t t0 = 45687;

	t0 = (x1|((x2==x3)<x4));

	if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static volatile int64_t x7 = -1LL;
	int32_t x8 = INT32_MIN;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x5|((x6==x7)<x8));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -138;
	int8_t x10 = INT8_MAX;
	int32_t x11 = 1;
	int64_t x12 = -416411559LL;
	volatile int32_t t2 = 26913322;

	t2 = (x9|((x10==x11)<x12));

	if (t2 != -138) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = INT16_MIN;
	static int64_t t3 = 49808887885108559LL;

	t3 = (x13|((x14==x15)<x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	uint8_t x18 = 3U;
	static int8_t x19 = -1;
	volatile uint64_t x20 = UINT64_MAX;
	int32_t t4 = 72489;

	t4 = (x17|((x18==x19)<x20));

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int64_t x22 = 63773905964LL;
	int8_t x23 = -1;
	int16_t x24 = -1;
	uint32_t t5 = UINT32_MAX;

	t5 = (x21|((x22==x23)<x24));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	uint8_t x27 = UINT8_MAX;
	uint32_t x28 = UINT32_MAX;
	int32_t t6 = 42440135;

	t6 = (x25|((x26==x27)<x28));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 845939542LLU;
	static uint32_t x30 = 12648179U;
	static uint64_t x31 = 990039612LLU;
	uint16_t x32 = UINT16_MAX;
	static volatile uint64_t t7 = 1588935411206LLU;

	t7 = (x29|((x30==x31)<x32));

	if (t7 != 845939543LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 38U;
	int64_t x34 = -1LL;
	volatile uint64_t x35 = 9LLU;
	uint8_t x36 = UINT8_MAX;
	static volatile int32_t t8 = -1016;

	t8 = (x33|((x34==x35)<x36));

	if (t8 != 39) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	uint64_t x40 = 278024709LLU;
	int32_t t9 = 489;

	t9 = (x37|((x38==x39)<x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MAX;
	static uint32_t x43 = 14750U;
	uint16_t x44 = UINT16_MAX;
	static int32_t t10 = 35;

	t10 = (x41|((x42==x43)<x44));

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int16_t x46 = 49;
	uint8_t x47 = 0U;
	static int64_t x48 = INT64_MIN;
	int32_t t11 = 1870191;

	t11 = (x45|((x46==x47)<x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int16_t x50 = -2;
	uint64_t x51 = 475359080565LLU;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 13021259;

	t12 = (x49|((x50==x51)<x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -10947430441806LL;
	uint32_t x54 = 819589672U;
	int16_t x55 = INT16_MIN;
	static int32_t x56 = INT32_MAX;
	int64_t t13 = 17084797453LL;

	t13 = (x53|((x54==x55)<x56));

	if (t13 != -10947430441805LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	static volatile int32_t t14 = 51;

	t14 = (x57|((x58==x59)<x60));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 1018;
	int32_t x62 = INT32_MIN;
	int16_t x63 = 6080;
	int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = 3;

	t15 = (x61|((x62==x63)<x64));

	if (t15 != 1018) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = 4U;
	static uint64_t x67 = 202111858276634176LLU;
	volatile int64_t t16 = INT64_MIN;

	t16 = (x65|((x66==x67)<x68));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static volatile uint64_t x70 = 192707729817LLU;
	uint8_t x71 = 7U;

	t17 = (x69|((x70==x71)<x72));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = -1;
	volatile uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t18 = -611109;

	t18 = (x73|((x74==x75)<x76));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	int32_t x79 = -2360;
	volatile int64_t t19 = -828LL;

	t19 = (x77|((x78==x79)<x80));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = 257465LLU;
	int64_t x83 = INT64_MAX;
	int16_t x84 = INT16_MIN;
	static uint32_t t20 = 1079307U;

	t20 = (x81|((x82==x83)<x84));

	if (t20 != 217999488U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 304212091U;
	uint16_t x87 = UINT16_MAX;
	static volatile int32_t t21 = -11434849;

	t21 = (x85|((x86==x87)<x88));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = -1;
	int32_t x91 = INT32_MAX;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = 2083366;

	t22 = (x89|((x90==x91)<x92));

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x94 = 0;
	static int16_t x95 = 13252;
	int16_t x96 = INT16_MAX;
	static int32_t t23 = 7;

	t23 = (x93|((x94==x95)<x96));

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = 16;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -688;

	t24 = (x97|((x98==x99)<x100));

	if (t24 != 16) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 2352246630545682LLU;
	volatile int16_t x102 = -1;
	volatile int64_t x103 = -10LL;
	static int16_t x104 = INT16_MIN;

	t25 = (x101|((x102==x103)<x104));

	if (t25 != 2352246630545682LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -742579003LL;
	int32_t x106 = INT32_MAX;
	volatile int16_t x107 = INT16_MIN;
	static int32_t x108 = -1;
	static int64_t t26 = -9072497LL;

	t26 = (x105|((x106==x107)<x108));

	if (t26 != -742579003LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	int64_t x110 = -1LL;
	volatile uint16_t x111 = UINT16_MAX;
	static volatile uint16_t x112 = 1U;
	int64_t t27 = -2253525LL;

	t27 = (x109|((x110==x111)<x112));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;
	static int16_t x115 = -1;
	uint8_t x116 = 1U;
	volatile int32_t t28 = 3;

	t28 = (x113|((x114==x115)<x116));

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	uint16_t x119 = 19046U;
	volatile uint32_t x120 = 40U;
	int32_t t29 = 28382277;

	t29 = (x117|((x118==x119)<x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -1;
	int64_t x122 = -1LL;
	static int32_t x123 = -60674890;
	uint32_t x124 = 120U;

	t30 = (x121|((x122==x123)<x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MAX;
	int32_t x127 = 29;
	static uint8_t x128 = 11U;
	volatile int32_t t31 = INT32_MAX;

	t31 = (x125|((x126==x127)<x128));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x129 = -1;
	static volatile int32_t x130 = INT32_MIN;
	uint16_t x132 = 4U;
	volatile int32_t t32 = -580118569;

	t32 = (x129|((x130==x131)<x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x135 = 378U;
	uint32_t x136 = UINT32_MAX;
	int32_t t33 = -44907208;

	t33 = (x133|((x134==x135)<x136));

	if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = 20U;
	int32_t t34 = INT32_MAX;

	t34 = (x137|((x138==x139)<x140));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x143 = -120850063;
	static int16_t x144 = INT16_MAX;
	int64_t t35 = -4151508527499LL;

	t35 = (x141|((x142==x143)<x144));

	if (t35 != 31961LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	static int32_t x146 = INT32_MIN;
	static uint32_t x147 = UINT32_MAX;
	volatile int64_t t36 = 856278155303LL;

	t36 = (x145|((x146==x147)<x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	uint16_t x151 = 1U;
	volatile int32_t x152 = INT32_MIN;
	int32_t t37 = -10159;

	t37 = (x149|((x150==x151)<x152));

	if (t37 != 3505) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = INT64_MIN;

	t38 = (x153|((x154==x155)<x156));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 78560;
	static uint32_t x158 = 212510680U;
	volatile int8_t x159 = -1;
	int32_t t39 = 2952;

	t39 = (x157|((x158==x159)<x160));

	if (t39 != 78561) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int32_t x162 = INT32_MIN;
	volatile uint16_t x163 = 5647U;
	static int16_t x164 = INT16_MIN;
	static volatile int32_t t40 = 305192189;

	t40 = (x161|((x162==x163)<x164));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = 474;
	uint32_t x167 = 2U;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = 23;

	t41 = (x165|((x166==x167)<x168));

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint8_t x171 = 76U;
	uint8_t x172 = 31U;
	static volatile int32_t t42 = -2;

	t42 = (x169|((x170==x171)<x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 116U;
	int32_t x174 = 8851409;
	int64_t x175 = INT64_MAX;
	volatile uint16_t x176 = 2808U;
	volatile int32_t t43 = 5;

	t43 = (x173|((x174==x175)<x176));

	if (t43 != 117) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = -1;
	static uint8_t x180 = 0U;
	volatile int64_t t44 = 23LL;

	t44 = (x177|((x178==x179)<x180));

	if (t44 != 174723LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = 2;
	volatile int32_t x182 = 4416;
	volatile int32_t x183 = -541;
	static int32_t t45 = 291377;

	t45 = (x181|((x182==x183)<x184));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 659U;
	int64_t x186 = 2952355LL;
	int64_t x187 = 7LL;
	int16_t x188 = -2;

	t46 = (x185|((x186==x187)<x188));

	if (t46 != 659) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x190 = -1LL;
	int64_t x192 = -6055408872798LL;
	static int32_t t47 = -27;

	t47 = (x189|((x190==x191)<x192));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	volatile int32_t t48 = 335116;

	t48 = (x193|((x194==x195)<x196));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MIN;
	static volatile int8_t x199 = INT8_MAX;
	uint8_t x200 = 40U;
	volatile int32_t t49 = -15785;

	t49 = (x197|((x198==x199)<x200));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -1;
	int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MIN;
	static volatile uint32_t x204 = 49U;
	int32_t t50 = -126337;

	t50 = (x201|((x202==x203)<x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	static uint64_t x206 = 224446496LLU;
	uint32_t x207 = 355U;
	int32_t x208 = -5697;

	t51 = (x205|((x206==x207)<x208));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x211 = 7U;
	int16_t x212 = 0;

	t52 = (x209|((x210==x211)<x212));

	if (t52 != -1516) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	static volatile int64_t x214 = INT64_MIN;
	uint8_t x215 = 5U;
	uint8_t x216 = 66U;
	volatile int32_t t53 = 1;

	t53 = (x213|((x214==x215)<x216));

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 160U;
	int64_t x220 = 4037624841552840299LL;
	int32_t t54 = 0;

	t54 = (x217|((x218==x219)<x220));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = -1;
	int8_t x223 = -19;
	int64_t t55 = -259640818606302LL;

	t55 = (x221|((x222==x223)<x224));

	if (t55 != -862030345942201LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	volatile uint8_t x226 = 0U;
	static int32_t x227 = INT32_MIN;
	static uint8_t x228 = 7U;
	volatile int32_t t56 = 39;

	t56 = (x225|((x226==x227)<x228));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	static volatile int16_t x230 = INT16_MIN;
	int16_t x231 = -4887;
	int8_t x232 = INT8_MAX;

	t57 = (x229|((x230==x231)<x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 566535;
	volatile uint8_t x235 = 3U;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = -29283454;

	t58 = (x233|((x234==x235)<x236));

	if (t58 != 566535) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 443104130792658009LLU;
	int8_t x238 = INT8_MAX;
	uint16_t x239 = 96U;
	int8_t x240 = INT8_MAX;
	volatile uint64_t t59 = 1632874LLU;

	t59 = (x237|((x238==x239)<x240));

	if (t59 != 443104130792658009LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 101U;
	int64_t x242 = 630095517098323LL;
	int8_t x243 = INT8_MAX;
	static volatile int8_t x244 = 5;
	static int32_t t60 = -312;

	t60 = (x241|((x242==x243)<x244));

	if (t60 != 101) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 369U;
	volatile int32_t x246 = -1;
	int16_t x247 = INT16_MAX;
	uint32_t t61 = 23U;

	t61 = (x245|((x246==x247)<x248));

	if (t61 != 369U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -644050;
	int32_t x250 = INT32_MIN;
	volatile uint8_t x251 = 12U;
	volatile int32_t t62 = -16646132;

	t62 = (x249|((x250==x251)<x252));

	if (t62 != -644049) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x254 = UINT16_MAX;
	int32_t x255 = INT32_MIN;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -9823;

	t63 = (x253|((x254==x255)<x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 2U;
	int64_t x258 = -27709148475440LL;
	int64_t x259 = INT64_MIN;
	static volatile int64_t x260 = INT64_MIN;

	t64 = (x257|((x258==x259)<x260));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = 1102;
	int64_t x262 = -1LL;
	static int16_t x263 = INT16_MAX;
	volatile int16_t x264 = INT16_MAX;
	volatile int32_t t65 = 47;

	t65 = (x261|((x262==x263)<x264));

	if (t65 != 1103) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int8_t x266 = 27;
	int8_t x267 = INT8_MIN;
	int64_t t66 = INT64_MAX;

	t66 = (x265|((x266==x267)<x268));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x269 = INT32_MIN;
	uint16_t x270 = 981U;
	int64_t x271 = INT64_MAX;
	uint16_t x272 = 222U;

	t67 = (x269|((x270==x271)<x272));

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	uint16_t x274 = 20786U;
	int64_t x275 = -53056020275441LL;
	volatile int32_t t68 = 1522;

	t68 = (x273|((x274==x275)<x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = 49;
	int8_t x278 = INT8_MIN;
	volatile int16_t x280 = INT16_MIN;
	int32_t t69 = -754088;

	t69 = (x277|((x278==x279)<x280));

	if (t69 != 49) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = 6;
	volatile int32_t x282 = INT32_MAX;
	int32_t x283 = -1;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = -8;

	t70 = (x281|((x282==x283)<x284));

	if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MAX;
	int8_t x287 = INT8_MIN;
	volatile int32_t t71 = 718757873;

	t71 = (x285|((x286==x287)<x288));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = -1;
	int8_t x290 = -1;
	int32_t t72 = -7;

	t72 = (x289|((x290==x291)<x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 1U;
	int16_t x294 = INT16_MAX;
	int32_t x295 = -1416564;
	static volatile int32_t x296 = 0;
	static int32_t t73 = -255799;

	t73 = (x293|((x294==x295)<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	int64_t x300 = INT64_MIN;
	int32_t t74 = 3011;

	t74 = (x297|((x298==x299)<x300));

	if (t74 != 11512468) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 3U;
	int64_t x302 = INT64_MAX;
	int32_t x304 = 27;
	volatile int32_t t75 = 5377;

	t75 = (x301|((x302==x303)<x304));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	int8_t x306 = -6;
	uint64_t x307 = UINT64_MAX;
	volatile int32_t t76 = 1541691;

	t76 = (x305|((x306==x307)<x308));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -2826350;
	static uint32_t x310 = 91748U;
	int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -619;

	t77 = (x309|((x310==x311)<x312));

	if (t77 != -2826350) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	volatile uint16_t x314 = UINT16_MAX;
	int32_t x315 = INT32_MIN;
	volatile uint32_t x316 = 4237418U;
	volatile int32_t t78 = -96454;

	t78 = (x313|((x314==x315)<x316));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 6822807U;
	uint16_t x318 = 2U;
	uint16_t x319 = UINT16_MAX;
	uint32_t x320 = 1676U;

	t79 = (x317|((x318==x319)<x320));

	if (t79 != 6822807U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = UINT16_MAX;
	uint64_t x322 = 54218886900103LLU;
	uint32_t x323 = 1344483133U;
	uint64_t x324 = 2515586496059LLU;
	volatile int32_t t80 = -272612128;

	t80 = (x321|((x322==x323)<x324));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	volatile int32_t x326 = -1734409;
	static volatile uint32_t x327 = UINT32_MAX;
	uint64_t x328 = 16090739719LLU;
	static volatile int32_t t81 = 1;

	t81 = (x325|((x326==x327)<x328));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x330 = 3836036LL;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	uint32_t t82 = UINT32_MAX;

	t82 = (x329|((x330==x331)<x332));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	uint8_t x335 = 11U;
	int8_t x336 = INT8_MIN;
	static int64_t t83 = INT64_MIN;

	t83 = (x333|((x334==x335)<x336));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	volatile uint64_t x338 = 4049514779090LLU;
	int32_t x339 = -13298;
	volatile int64_t t84 = INT64_MIN;

	t84 = (x337|((x338==x339)<x340));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MIN;
	int64_t x343 = -1LL;
	volatile int32_t t85 = -856;

	t85 = (x341|((x342==x343)<x344));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	static uint64_t x346 = UINT64_MAX;
	int64_t x347 = INT64_MIN;
	volatile int32_t x348 = -8035732;
	int32_t t86 = -479102;

	t86 = (x345|((x346==x347)<x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x351 = UINT8_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = 162688171;

	t87 = (x349|((x350==x351)<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -1LL;
	int16_t x354 = -1;
	static uint32_t x355 = 64U;
	int64_t t88 = 93358047LL;

	t88 = (x353|((x354==x355)<x356));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MIN;
	static int32_t x360 = -1;

	t89 = (x357|((x358==x359)<x360));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = 29;
	int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MAX;
	int32_t t90 = -15;

	t90 = (x361|((x362==x363)<x364));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = -1;
	int16_t x368 = INT16_MAX;
	static volatile int64_t t91 = -1217593740LL;

	t91 = (x365|((x366==x367)<x368));

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 204793908090649790LL;
	int64_t x370 = INT64_MIN;
	int64_t t92 = 358429478LL;

	t92 = (x369|((x370==x371)<x372));

	if (t92 != 204793908090649791LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 33662513192911LLU;
	int32_t x374 = 78369;
	int16_t x375 = INT16_MIN;
	int32_t x376 = 411903;
	volatile uint64_t t93 = 2241742255LLU;

	t93 = (x373|((x374==x375)<x376));

	if (t93 != 33662513192911LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 15U;
	int64_t x379 = INT64_MIN;
	uint32_t x380 = 135U;
	int32_t t94 = 476;

	t94 = (x377|((x378==x379)<x380));

	if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x383 = 91U;
	static int16_t x384 = INT16_MAX;

	t95 = (x381|((x382==x383)<x384));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -1;
	static uint16_t x386 = 2U;
	volatile uint8_t x387 = UINT8_MAX;
	uint32_t x388 = 331436409U;
	volatile int32_t t96 = 194;

	t96 = (x385|((x386==x387)<x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MAX;
	uint32_t x392 = 2U;
	static uint64_t t97 = 6711461LLU;

	t97 = (x389|((x390==x391)<x392));

	if (t97 != 59079253471LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 0;
	volatile int64_t x394 = -1106904568304301LL;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -209643;

	t98 = (x393|((x394==x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = -328;
	uint64_t x399 = 20158581926LLU;
	volatile int16_t x400 = -1;
	static int32_t t99 = -6575;

	t99 = (x397|((x398==x399)<x400));

	if (t99 != -328) { NG(); } else { ; }
	
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

