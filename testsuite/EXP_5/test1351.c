#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 15005U;
volatile int64_t t2 = 22211LL;
volatile int32_t x13 = INT32_MIN;
int64_t x18 = INT64_MAX;
int32_t x19 = 680988;
volatile uint64_t t5 = 226563047743967699LLU;
static int64_t x31 = -3523LL;
volatile uint16_t x32 = 432U;
int8_t x33 = INT8_MIN;
static int8_t x35 = INT8_MIN;
static volatile uint8_t x38 = 111U;
static uint64_t t10 = 190194707LLU;
int8_t x45 = INT8_MIN;
uint64_t x46 = UINT64_MAX;
static int8_t x51 = -1;
int64_t x54 = -69271685156898247LL;
volatile int64_t x60 = 8055249LL;
int32_t t15 = INT32_MAX;
int16_t x68 = INT16_MIN;
static volatile uint32_t t23 = UINT32_MAX;
int64_t x120 = -1LL;
int32_t x122 = 3;
int64_t x126 = INT64_MIN;
int64_t t31 = -3LL;
static int64_t x129 = INT64_MIN;
int8_t x130 = -6;
uint8_t x131 = 10U;
volatile int64_t t35 = 144LL;
int8_t x145 = INT8_MIN;
int64_t x148 = INT64_MIN;
static int64_t x152 = INT64_MAX;
volatile int64_t t37 = INT64_MAX;
static int64_t x160 = INT64_MIN;
int8_t x162 = INT8_MIN;
int32_t x164 = INT32_MAX;
int64_t x173 = INT64_MIN;
int8_t x175 = INT8_MIN;
int64_t x180 = INT64_MIN;
int16_t x181 = INT16_MAX;
int32_t x183 = INT32_MAX;
int8_t x184 = -1;
volatile int32_t x189 = -3;
uint32_t t48 = 1131353341U;
uint8_t x199 = 3U;
volatile int32_t t49 = 126637;
uint32_t x218 = 29U;
int8_t x225 = -1;
uint8_t x227 = 1U;
uint64_t x228 = 1LLU;
int8_t x229 = -1;
volatile int32_t x231 = -1;
int64_t x232 = INT64_MAX;
volatile int64_t t57 = 1091939950562LL;
uint64_t x237 = 4111453311LLU;
uint64_t t59 = 105621159LLU;
volatile int16_t x241 = INT16_MIN;
static uint64_t x249 = 133280792300LLU;
uint64_t t62 = 32849LLU;
static uint64_t x275 = 1455579LLU;
volatile int64_t t69 = -322481630372LL;
int8_t x283 = INT8_MIN;
static int64_t t70 = -45508477788LL;
int32_t x285 = INT32_MAX;
volatile int64_t x287 = INT64_MAX;
static uint32_t x292 = 1187493023U;
int64_t x293 = -6162968981402593LL;
static int32_t x298 = INT32_MIN;
volatile int64_t t75 = 0LL;
static volatile uint64_t x309 = UINT64_MAX;
uint64_t x310 = 22LLU;
int8_t x313 = 0;
int64_t x323 = INT64_MIN;
uint16_t x327 = UINT16_MAX;
int32_t t81 = 11210494;
volatile uint64_t x343 = 464695080860LLU;
int8_t x347 = -1;
static int32_t x350 = -1;
volatile int64_t t88 = -514895LL;
int64_t x364 = -1LL;
static volatile int8_t x366 = 7;
uint64_t x373 = 27964633464220LLU;
uint32_t x381 = UINT32_MAX;
static int64_t x382 = INT64_MIN;
int64_t t95 = INT64_MAX;
int32_t t98 = 1;
int32_t x398 = -739555;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	volatile int64_t x2 = INT64_MAX;
	uint32_t x4 = 26U;
	uint32_t t0 = 96633391U;

	t0 = (x1|((x2==x3)^x4));

	if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static uint64_t x6 = UINT64_MAX;
	volatile uint32_t x7 = UINT32_MAX;
	int64_t x8 = INT64_MIN;
	static int64_t t1 = -10179888376LL;

	t1 = (x5|((x6==x7)^x8));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 0U;
	static int16_t x10 = -1332;
	int8_t x11 = -23;
	static int64_t x12 = -415361533LL;

	t2 = (x9|((x10==x11)^x12));

	if (t2 != -415361533LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x14 = 152985118LLU;
	volatile int8_t x15 = -1;
	uint8_t x16 = 11U;
	static volatile int32_t t3 = -121;

	t3 = (x13|((x14==x15)^x16));

	if (t3 != -2147483637) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 723U;
	uint32_t x20 = 1U;
	volatile uint32_t t4 = 15U;

	t4 = (x17|((x18==x19)^x20));

	if (t4 != 723U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 674499525LLU;
	volatile uint16_t x22 = 622U;
	uint8_t x23 = 58U;
	static int32_t x24 = 8;

	t5 = (x21|((x22==x23)^x24));

	if (t5 != 674499533LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 6405LLU;
	int64_t x26 = INT64_MIN;
	volatile uint64_t x27 = 2134700926LLU;
	int8_t x28 = INT8_MIN;
	static uint64_t t6 = 8LLU;

	t6 = (x25|((x26==x27)^x28));

	if (t6 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -5580869;
	uint64_t x30 = 511884635LLU;
	int32_t t7 = -7;

	t7 = (x29|((x30==x31)^x32));

	if (t7 != -5580869) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = 6;
	uint16_t x36 = 28U;
	int32_t t8 = 16347767;

	t8 = (x33|((x34==x35)^x36));

	if (t8 != -100) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint32_t x39 = 2U;
	volatile uint32_t x40 = UINT32_MAX;
	uint32_t t9 = UINT32_MAX;

	t9 = (x37|((x38==x39)^x40));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = -33107123846122LL;
	uint32_t x43 = 1U;
	static uint64_t x44 = 40439LLU;

	t10 = (x41|((x42==x43)^x44));

	if (t10 != 18446744071562108407LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x47 = 9;
	volatile int32_t x48 = INT32_MIN;
	static int32_t t11 = -416;

	t11 = (x45|((x46==x47)^x48));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static int8_t x50 = -1;
	int64_t x52 = INT64_MAX;
	volatile int64_t t12 = -105366407386231852LL;

	t12 = (x49|((x50==x51)^x52));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = INT32_MIN;
	int32_t x55 = INT32_MAX;
	static volatile int16_t x56 = INT16_MIN;
	int32_t t13 = -145490394;

	t13 = (x53|((x54==x55)^x56));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x57 = -1;
	int8_t x58 = INT8_MIN;
	uint32_t x59 = 0U;
	int64_t t14 = 950079LL;

	t14 = (x57|((x58==x59)^x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	int8_t x62 = INT8_MAX;
	volatile uint8_t x63 = UINT8_MAX;
	uint16_t x64 = 31U;

	t15 = (x61|((x62==x63)^x64));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 579195U;
	static int32_t x66 = INT32_MIN;
	static uint32_t x67 = 96U;
	uint32_t t16 = 8934130U;

	t16 = (x65|((x66==x67)^x68));

	if (t16 != 4294956667U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = UINT32_MAX;
	int32_t x70 = -1245638;
	int8_t x71 = -1;
	int16_t x72 = 59;
	uint32_t t17 = UINT32_MAX;

	t17 = (x69|((x70==x71)^x72));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -3;
	int16_t x74 = INT16_MIN;
	int64_t x75 = 52302503LL;
	volatile uint64_t x76 = UINT64_MAX;
	uint64_t t18 = UINT64_MAX;

	t18 = (x73|((x74==x75)^x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 3U;
	int8_t x78 = -1;
	volatile int32_t x79 = INT32_MIN;
	static uint16_t x80 = 14633U;
	int32_t t19 = 3385;

	t19 = (x77|((x78==x79)^x80));

	if (t19 != 14635) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	volatile int16_t x82 = -6361;
	uint32_t x83 = UINT32_MAX;
	static int64_t x84 = INT64_MIN;
	static volatile int64_t t20 = 295492778347LL;

	t20 = (x81|((x82==x83)^x84));

	if (t20 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	uint64_t x86 = 164735LLU;
	int32_t x87 = 57103613;
	int32_t x88 = -5771342;
	volatile int32_t t21 = -17712;

	t21 = (x85|((x86==x87)^x88));

	if (t21 != -5771342) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 1U;
	uint16_t x90 = 38U;
	int16_t x91 = -878;
	static volatile uint64_t x92 = 240164288347LLU;
	uint64_t t22 = 2768412LLU;

	t22 = (x89|((x90==x91)^x92));

	if (t22 != 240164288347LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x93 = UINT32_MAX;
	static int32_t x94 = 985;
	uint8_t x95 = 11U;
	static uint32_t x96 = UINT32_MAX;

	t23 = (x93|((x94==x95)^x96));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -53920;
	int64_t x98 = INT64_MAX;
	static int16_t x99 = 0;
	volatile int32_t x100 = 45;
	volatile int32_t t24 = 292;

	t24 = (x97|((x98==x99)^x100));

	if (t24 != -53907) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x101 = 0U;
	int64_t x102 = -732633756LL;
	uint64_t x103 = 40845724645LLU;
	int64_t x104 = -1LL;
	volatile int64_t t25 = 27557357003201216LL;

	t25 = (x101|((x102==x103)^x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 1600LL;
	static int64_t x106 = INT64_MIN;
	static int64_t x107 = -1LL;
	static int64_t x108 = INT64_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = (x105|((x106==x107)^x108));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 5336;
	int32_t x110 = 446793401;
	int64_t x111 = INT64_MIN;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 3208140;

	t27 = (x109|((x110==x111)^x112));

	if (t27 != -40) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	volatile int64_t x114 = INT64_MIN;
	int8_t x115 = -1;
	static volatile uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t28 = UINT64_MAX;

	t28 = (x113|((x114==x115)^x116));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int32_t x118 = -1;
	int64_t x119 = INT64_MIN;
	uint64_t t29 = UINT64_MAX;

	t29 = (x117|((x118==x119)^x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 12LLU;
	static int16_t x123 = -1;
	static int16_t x124 = INT16_MIN;
	uint64_t t30 = 40992802LLU;

	t30 = (x121|((x122==x123)^x124));

	if (t30 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int64_t x127 = INT64_MAX;
	int64_t x128 = -1LL;

	t31 = (x125|((x126==x127)^x128));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x132 = -1;
	volatile int64_t t32 = 0LL;

	t32 = (x129|((x130==x131)^x132));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = -10LL;
	static int16_t x135 = INT16_MIN;
	static int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -39052;

	t33 = (x133|((x134==x135)^x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;
	uint16_t x138 = 0U;
	uint32_t x139 = 59164U;
	static volatile uint64_t x140 = 1051LLU;
	uint64_t t34 = UINT64_MAX;

	t34 = (x137|((x138==x139)^x140));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	int16_t x142 = INT16_MAX;
	static int32_t x143 = 113;
	int64_t x144 = INT64_MIN;

	t35 = (x141|((x142==x143)^x144));

	if (t35 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x146 = INT64_MIN;
	int16_t x147 = 317;
	static int64_t t36 = 3756503113589LL;

	t36 = (x145|((x146==x147)^x148));

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = 9;
	int8_t x150 = INT8_MAX;
	int8_t x151 = -1;

	t37 = (x149|((x150==x151)^x152));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 2U;
	int8_t x154 = INT8_MAX;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MIN;
	int32_t t38 = 2980;

	t38 = (x153|((x154==x155)^x156));

	if (t38 != -126) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	int64_t t39 = INT64_MIN;

	t39 = (x157|((x158==x159)^x160));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	volatile int16_t x163 = INT16_MIN;
	static volatile int64_t t40 = 45482309002901074LL;

	t40 = (x161|((x162==x163)^x164));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	static uint32_t x166 = 22U;
	uint8_t x167 = 11U;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 3595899;

	t41 = (x165|((x166==x167)^x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 26240708;
	static int8_t x170 = INT8_MIN;
	int32_t x171 = 624;
	int8_t x172 = -1;
	volatile int32_t t42 = 42671;

	t42 = (x169|((x170==x171)^x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = -1;
	int16_t x176 = 12203;
	static volatile int64_t t43 = -620442420209LL;

	t43 = (x173|((x174==x175)^x176));

	if (t43 != -9223372036854763605LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	uint64_t x178 = 1264774807720454LLU;
	static int32_t x179 = -3784439;
	int64_t t44 = -18221830834275210LL;

	t44 = (x177|((x178==x179)^x180));

	if (t44 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x182 = UINT64_MAX;
	int32_t t45 = 571061312;

	t45 = (x181|((x182==x183)^x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -1;
	uint32_t x186 = 596082U;
	static int64_t x187 = 78620LL;
	int8_t x188 = INT8_MAX;
	int32_t t46 = 47;

	t46 = (x185|((x186==x187)^x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = -175064763;
	volatile int64_t x191 = INT64_MIN;
	volatile uint32_t x192 = UINT32_MAX;
	static volatile uint32_t t47 = UINT32_MAX;

	t47 = (x189|((x190==x191)^x192));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 8U;
	int32_t x194 = INT32_MIN;
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MAX;

	t48 = (x193|((x194==x195)^x196));

	if (t48 != 2147483647U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 1;
	static uint64_t x198 = UINT64_MAX;
	volatile uint16_t x200 = UINT16_MAX;

	t49 = (x197|((x198==x199)^x200));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int32_t x202 = INT32_MIN;
	int64_t x203 = -1LL;
	volatile int32_t x204 = 213;
	volatile int32_t t50 = 59306;

	t50 = (x201|((x202==x203)^x204));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1751120;
	volatile int32_t x206 = INT32_MIN;
	int16_t x207 = -1;
	int16_t x208 = -1;
	int32_t t51 = -25653;

	t51 = (x205|((x206==x207)^x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MIN;
	int16_t x210 = -5017;
	int8_t x211 = -1;
	uint8_t x212 = 0U;
	volatile int32_t t52 = -509736796;

	t52 = (x209|((x210==x211)^x212));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -30;
	uint16_t x214 = 206U;
	int32_t x215 = -90718289;
	volatile int64_t x216 = 9415045LL;
	volatile int64_t t53 = 21175071219184LL;

	t53 = (x213|((x214==x215)^x216));

	if (t53 != -25LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	int8_t x219 = -14;
	uint64_t x220 = 209LLU;
	uint64_t t54 = UINT64_MAX;

	t54 = (x217|((x218==x219)^x220));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = UINT64_MAX;
	uint64_t x222 = UINT64_MAX;
	int8_t x223 = -1;
	int32_t x224 = -1;
	static volatile uint64_t t55 = UINT64_MAX;

	t55 = (x221|((x222==x223)^x224));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (x225|((x226==x227)^x228));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MIN;

	t57 = (x229|((x230==x231)^x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = -6239LL;
	int32_t x234 = -1;
	uint64_t x235 = 3187981282676LLU;
	int16_t x236 = -1;
	static int64_t t58 = 1818395123134418LL;

	t58 = (x233|((x234==x235)^x236));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = 7;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MIN;

	t59 = (x237|((x238==x239)^x240));

	if (t59 != 18446744073526037631LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x242 = -108651;
	int8_t x243 = -1;
	static int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 3657;

	t60 = (x241|((x242==x243)^x244));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MIN;
	int32_t x246 = 7;
	uint8_t x247 = 0U;
	uint64_t x248 = 11450601LLU;
	uint64_t t61 = 866422836684LLU;

	t61 = (x245|((x246==x247)^x248));

	if (t61 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 21990346340571080LLU;
	uint8_t x251 = 119U;
	int16_t x252 = INT16_MAX;

	t62 = (x249|((x250==x251)^x252));

	if (t62 != 133280792575LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = -1;
	static int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = 309478084188533LL;

	t63 = (x253|((x254==x255)^x256));

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 57178U;
	volatile uint8_t x258 = 6U;
	uint32_t x259 = UINT32_MAX;
	uint16_t x260 = 28464U;
	uint32_t t64 = 19U;

	t64 = (x257|((x258==x259)^x260));

	if (t64 != 65402U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	volatile int64_t x262 = INT64_MIN;
	uint64_t x263 = 1850LLU;
	static uint64_t x264 = 3660LLU;
	volatile uint64_t t65 = 21427388318552LLU;

	t65 = (x261|((x262==x263)^x264));

	if (t65 != 2147483647LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 233292LLU;
	int16_t x266 = INT16_MIN;
	int8_t x267 = 2;
	int16_t x268 = INT16_MIN;
	uint64_t t66 = 3050914668LLU;

	t66 = (x265|((x266==x267)^x268));

	if (t66 != 18446744073709522764LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 411U;
	uint32_t x270 = 14059U;
	int64_t x271 = INT64_MIN;
	int16_t x272 = -1;
	volatile int32_t t67 = -2159073;

	t67 = (x269|((x270==x271)^x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	volatile uint16_t x274 = 16807U;
	int8_t x276 = INT8_MIN;
	volatile int64_t t68 = -4520297948LL;

	t68 = (x273|((x274==x275)^x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	static int8_t x278 = INT8_MIN;
	int8_t x279 = 0;
	int64_t x280 = 3587455983476154LL;

	t69 = (x277|((x278==x279)^x280));

	if (t69 != 3587455983484927LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 348U;
	int64_t x282 = 1LL;
	static int64_t x284 = INT64_MIN;

	t70 = (x281|((x282==x283)^x284));

	if (t70 != -9223372036854775460LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = INT32_MAX;

	t71 = (x285|((x286==x287)^x288));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -270091453782LL;
	int16_t x290 = INT16_MIN;
	volatile uint64_t x291 = 10071424LLU;
	int64_t t72 = 0LL;

	t72 = (x289|((x290==x291)^x292));

	if (t72 != -268975472961LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -484345605;
	volatile int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MAX;
	static volatile int64_t t73 = -5123850752080707LL;

	t73 = (x293|((x294==x295)^x296));

	if (t73 != -6162968981372929LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int64_t x299 = INT64_MAX;
	static int8_t x300 = 24;
	static int32_t t74 = -4533140;

	t74 = (x297|((x298==x299)^x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	uint64_t x302 = 66LLU;
	uint8_t x303 = 13U;
	static int64_t x304 = INT64_MAX;

	t75 = (x301|((x302==x303)^x304));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int32_t x306 = -1;
	static uint32_t x307 = 23U;
	int16_t x308 = INT16_MIN;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x305|((x306==x307)^x308));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x311 = 58;
	int32_t x312 = -10;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (x309|((x310==x311)^x312));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = 1;
	static uint16_t x315 = 22825U;
	int8_t x316 = 1;
	int32_t t78 = 8148287;

	t78 = (x313|((x314==x315)^x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MIN;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t79 = -48340;

	t79 = (x317|((x318==x319)^x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	uint64_t x322 = 3268513LLU;
	volatile int8_t x324 = 0;
	static volatile int32_t t80 = 474;

	t80 = (x321|((x322==x323)^x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MAX;
	static volatile int16_t x328 = INT16_MAX;

	t81 = (x325|((x326==x327)^x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 233LLU;
	int8_t x330 = -1;
	int8_t x331 = -1;
	int8_t x332 = 6;
	uint64_t t82 = 2027006800117031877LLU;

	t82 = (x329|((x330==x331)^x332));

	if (t82 != 239LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	volatile int8_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile int64_t t83 = -50LL;

	t83 = (x333|((x334==x335)^x336));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	uint64_t x338 = 6LLU;
	int64_t x339 = 1237327703758833683LL;
	volatile uint32_t x340 = 3301U;
	volatile uint32_t t84 = 160U;

	t84 = (x337|((x338==x339)^x340));

	if (t84 != 2147486949U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	volatile int64_t x342 = INT64_MAX;
	int64_t x344 = -1LL;
	int64_t t85 = 6428165896710459LL;

	t85 = (x341|((x342==x343)^x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 208U;
	volatile uint8_t x346 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	uint32_t t86 = 759204U;

	t86 = (x345|((x346==x347)^x348));

	if (t86 != 4294967248U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x349 = INT16_MIN;
	int16_t x351 = INT16_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -87570816;

	t87 = (x349|((x350==x351)^x352));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -12354LL;
	uint64_t x354 = UINT64_MAX;
	static int8_t x355 = 45;
	int64_t x356 = -1LL;

	t88 = (x353|((x354==x355)^x356));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = -1;
	int32_t x358 = 14;
	volatile uint16_t x359 = UINT16_MAX;
	volatile int32_t x360 = 26776;
	volatile int32_t t89 = 1;

	t89 = (x357|((x358==x359)^x360));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = 0;
	int16_t x362 = INT16_MIN;
	volatile int32_t x363 = 490629633;
	static volatile int64_t t90 = 246647LL;

	t90 = (x361|((x362==x363)^x364));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	static int64_t x368 = INT64_MAX;
	volatile int64_t t91 = 171531120609LL;

	t91 = (x365|((x366==x367)^x368));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 55194674064LLU;
	static int16_t x370 = 658;
	int64_t x371 = 63143918LL;
	volatile uint8_t x372 = 1U;
	uint64_t t92 = 430512424349LLU;

	t92 = (x369|((x370==x371)^x372));

	if (t92 != 55194674065LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x374 = UINT16_MAX;
	uint32_t x375 = UINT32_MAX;
	uint16_t x376 = UINT16_MAX;
	volatile uint64_t t93 = 4953927052LLU;

	t93 = (x373|((x374==x375)^x376));

	if (t93 != 27964633513983LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	int32_t x378 = INT32_MAX;
	static volatile int32_t x379 = -1;
	int32_t x380 = INT32_MAX;
	volatile int32_t t94 = INT32_MAX;

	t94 = (x377|((x378==x379)^x380));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x383 = UINT8_MAX;
	int64_t x384 = INT64_MAX;

	t95 = (x381|((x382==x383)^x384));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	uint8_t x386 = 11U;
	int32_t x387 = -2;
	int8_t x388 = -1;
	int64_t t96 = -3428634541211LL;

	t96 = (x385|((x386==x387)^x388));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	uint8_t x390 = 19U;
	uint16_t x391 = 208U;
	int64_t x392 = INT64_MAX;
	volatile int64_t t97 = INT64_MAX;

	t97 = (x389|((x390==x391)^x392));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = -2;
	static int32_t x394 = -4018537;
	static int16_t x395 = 535;
	int16_t x396 = INT16_MAX;

	t98 = (x393|((x394==x395)^x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = 1360072;
	static uint8_t x399 = UINT8_MAX;
	volatile int64_t x400 = INT64_MIN;
	int64_t t99 = -4281069202501LL;

	t99 = (x397|((x398==x399)^x400));

	if (t99 != -9223372036853415736LL) { NG(); } else { ; }
	
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

