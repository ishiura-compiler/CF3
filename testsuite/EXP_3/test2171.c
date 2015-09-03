#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
uint64_t x4 = UINT64_MAX;
int8_t x10 = 2;
int32_t x12 = -1;
int64_t x19 = INT64_MIN;
volatile int64_t t4 = -16596281830LL;
static volatile int8_t x27 = 7;
uint32_t x31 = 23U;
volatile uint32_t x35 = 20U;
volatile uint8_t x37 = 4U;
static int64_t t10 = -312LL;
int32_t x52 = INT32_MAX;
volatile int8_t x54 = -1;
static int32_t x55 = INT32_MIN;
static volatile uint32_t t14 = 264U;
int64_t x63 = 64LL;
static volatile uint8_t x68 = UINT8_MAX;
int16_t x75 = 989;
int8_t x76 = 0;
int8_t x80 = INT8_MIN;
int16_t x81 = -34;
int64_t x87 = -1LL;
static uint32_t x88 = UINT32_MAX;
uint8_t x97 = 0U;
int16_t x100 = INT16_MAX;
uint32_t t24 = 3294554U;
volatile int8_t x106 = INT8_MAX;
uint8_t x108 = 7U;
int32_t t26 = 14;
int8_t x114 = -5;
int16_t x126 = -1;
uint16_t x127 = 1672U;
volatile int16_t x148 = INT16_MIN;
uint64_t t37 = 8539100893LLU;
int16_t x155 = -1;
int32_t x166 = INT32_MIN;
int32_t x167 = INT32_MIN;
int8_t x171 = INT8_MAX;
int16_t x179 = INT16_MIN;
volatile int32_t x192 = INT32_MIN;
uint8_t x193 = 0U;
static int16_t x199 = INT16_MIN;
volatile uint64_t t49 = 395628LLU;
static int32_t x202 = INT32_MAX;
int32_t t50 = -35;
uint32_t x205 = 1438697102U;
static int8_t x215 = INT8_MAX;
static int8_t x220 = INT8_MIN;
int16_t x224 = INT16_MIN;
volatile int64_t t56 = -67584013944LL;
int16_t x232 = 179;
static uint32_t t57 = 579U;
uint32_t x234 = 26684996U;
int32_t x237 = INT32_MAX;
volatile uint64_t x238 = UINT64_MAX;
static int32_t x239 = INT32_MAX;
uint64_t x241 = 93713794181447348LLU;
volatile int64_t x249 = -1LL;
volatile uint16_t x253 = 184U;
uint64_t x259 = 100733122687400LLU;
int32_t x262 = -744603;
int64_t x269 = -1LL;
static int16_t x271 = INT16_MIN;
uint64_t x275 = 2099119963222LLU;
volatile uint16_t x276 = 1640U;
int16_t x280 = 1131;
uint8_t x283 = 19U;
volatile uint32_t x289 = 9U;
static uint64_t x291 = 2424945666288569LLU;
int32_t x296 = -1;
int8_t x297 = INT8_MAX;
static volatile int16_t x300 = 12;
volatile int64_t t75 = 87746576LL;
int32_t x312 = 0;
int16_t x324 = -1;
int8_t x326 = INT8_MAX;
int64_t x329 = INT64_MAX;
uint16_t x333 = 1U;
uint64_t x336 = 3613LLU;
int32_t x337 = -1;
static volatile int16_t x338 = INT16_MIN;
uint64_t t85 = 12306637313509LLU;
int8_t x346 = 36;
int8_t x351 = -1;
uint16_t x360 = UINT16_MAX;
static int64_t x362 = INT64_MIN;
int16_t x367 = -993;
int64_t t91 = -88773876269137LL;
int16_t x375 = 377;
uint64_t t93 = 2547948523LLU;
int32_t x380 = INT32_MIN;
volatile uint64_t x381 = 1953177LLU;
int8_t x384 = INT8_MIN;
volatile int64_t x386 = -1LL;
uint64_t x389 = 101LLU;
int64_t x397 = INT64_MIN;


void f0(void) {
	int32_t x2 = INT32_MIN;
	volatile int16_t x3 = INT16_MIN;
	static volatile uint64_t t0 = 439807LLU;

	t0 = ((x1&x2)^(x3^x4));

	if (t0 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 674688;
	uint16_t x6 = 20U;
	static uint8_t x7 = 7U;
	uint16_t x8 = 1170U;
	int32_t t1 = 771;

	t1 = ((x5&x6)^(x7^x8));

	if (t1 != 1173) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int8_t x11 = INT8_MIN;
	static int32_t t2 = 53973;

	t2 = ((x9&x10)^(x11^x12));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static uint64_t x14 = 16101478070LLU;
	static uint8_t x15 = UINT8_MAX;
	int64_t x16 = -201LL;
	uint64_t t3 = 8LLU;

	t3 = ((x13&x14)^(x15^x16));

	if (t3 != 18446744057608073598LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -774LL;
	static int16_t x18 = 4;
	uint16_t x20 = 2526U;

	t4 = ((x17&x18)^(x19^x20));

	if (t4 != -9223372036854773282LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	static uint8_t x22 = 20U;
	volatile int8_t x23 = -1;
	static int16_t x24 = 7446;
	volatile int32_t t5 = 8969;

	t5 = ((x21&x22)^(x23^x24));

	if (t5 != -7447) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 9921;
	static volatile int16_t x26 = -21;
	int64_t x28 = INT64_MAX;
	int64_t t6 = 0LL;

	t6 = ((x25&x26)^(x27^x28));

	if (t6 != 9223372036854765881LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -43;
	uint64_t x30 = 35197432680LLU;
	int16_t x32 = 0;
	volatile uint64_t t7 = 1056694280LLU;

	t7 = ((x29&x30)^(x31^x32));

	if (t7 != 35197432663LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = 1;
	int32_t x34 = INT32_MAX;
	int16_t x36 = INT16_MIN;
	uint32_t t8 = 325903467U;

	t8 = ((x33&x34)^(x35^x36));

	if (t8 != 4294934549U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x38 = 1;
	int8_t x39 = INT8_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -58;

	t9 = ((x37&x38)^(x39^x40));

	if (t9 != -2147483521) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -203280696LL;
	static int16_t x42 = 387;
	volatile int64_t x43 = -1LL;
	uint8_t x44 = 109U;

	t10 = ((x41&x42)^(x43^x44));

	if (t10 != -238LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 58971087953LLU;
	uint8_t x46 = 74U;
	int16_t x47 = INT16_MIN;
	static int64_t x48 = -1LL;
	uint64_t t11 = 428629274716362195LLU;

	t11 = ((x45&x46)^(x47^x48));

	if (t11 != 32703LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -39;
	int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MIN;
	static volatile int64_t t12 = -4970571091556LL;

	t12 = ((x49&x50)^(x51^x52));

	if (t12 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	int16_t x56 = INT16_MAX;
	static volatile uint64_t t13 = 31489141964LLU;

	t13 = ((x53&x54)^(x55^x56));

	if (t13 != 2147450880LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = UINT8_MAX;
	uint32_t x58 = 25515141U;
	uint16_t x59 = UINT16_MAX;
	volatile int8_t x60 = INT8_MAX;

	t14 = ((x57&x58)^(x59^x60));

	if (t14 != 65285U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = 103717;
	int16_t x62 = INT16_MIN;
	static int16_t x64 = INT16_MIN;
	int64_t t15 = 823LL;

	t15 = ((x61&x62)^(x63^x64));

	if (t15 != -131008LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	int16_t x66 = 229;
	static int16_t x67 = INT16_MIN;
	int32_t t16 = 334277059;

	t16 = ((x65&x66)^(x67^x68));

	if (t16 != -32513) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	uint8_t x70 = 0U;
	uint8_t x71 = 2U;
	static int32_t x72 = -2799861;
	int32_t t17 = 458254118;

	t17 = ((x69&x70)^(x71^x72));

	if (t17 != -2799863) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int32_t x74 = INT32_MIN;
	int32_t t18 = -93;

	t18 = ((x73&x74)^(x75^x76));

	if (t18 != -2147482659) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	uint16_t x78 = 497U;
	uint16_t x79 = 0U;
	int32_t t19 = -3779;

	t19 = ((x77&x78)^(x79^x80));

	if (t19 != -512) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = INT64_MIN;
	volatile int8_t x83 = INT8_MIN;
	int64_t x84 = 83912381510LL;
	volatile int64_t t20 = -140730073229023LL;

	t20 = ((x81&x82)^(x83^x84));

	if (t20 != 9223371952942394310LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	static uint8_t x86 = 11U;
	static int64_t t21 = 277859550071935LL;

	t21 = ((x85&x86)^(x87^x88));

	if (t21 != -4294967285LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 5U;
	int16_t x90 = -1;
	static volatile int64_t x91 = 1510363914LL;
	static int32_t x92 = INT32_MIN;
	int64_t t22 = -24129333LL;

	t22 = ((x89&x90)^(x91^x92));

	if (t22 != -637119729LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 66648LLU;
	volatile uint16_t x94 = 11U;
	static uint16_t x95 = UINT16_MAX;
	int32_t x96 = -1;
	volatile uint64_t t23 = 75606372LLU;

	t23 = ((x93&x94)^(x95^x96));

	if (t23 != 18446744073709486088LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 3264U;
	uint32_t x99 = UINT32_MAX;

	t24 = ((x97&x98)^(x99^x100));

	if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -452;
	int32_t x102 = -1;
	uint32_t x103 = 1923857811U;
	int64_t x104 = -479547752243043LL;
	volatile int64_t t25 = 122606175269048LL;

	t25 = ((x101&x102)^(x103^x104));

	if (t25 != 479546449552178LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 0;
	int8_t x107 = INT8_MIN;

	t26 = ((x105&x106)^(x107^x108));

	if (t26 != -121) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	uint8_t x110 = 2U;
	uint32_t x111 = 44U;
	static volatile int8_t x112 = INT8_MIN;
	uint32_t t27 = 148508U;

	t27 = ((x109&x110)^(x111^x112));

	if (t27 != 4294967212U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 1384621622LL;
	volatile uint8_t x115 = 15U;
	static int64_t x116 = -833770192LL;
	int64_t t28 = -69LL;

	t28 = ((x113&x114)^(x115^x116));

	if (t28 != -1664480499LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	uint8_t x118 = UINT8_MAX;
	static uint64_t x119 = 482LLU;
	volatile uint32_t x120 = 952992U;
	uint64_t t29 = 0LLU;

	t29 = ((x117&x118)^(x119^x120));

	if (t29 != 953277LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = INT32_MIN;
	static uint32_t x122 = 3701U;
	static uint16_t x123 = 15U;
	uint32_t x124 = UINT32_MAX;
	uint32_t t30 = 30U;

	t30 = ((x121&x122)^(x123^x124));

	if (t30 != 4294967280U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MAX;
	uint16_t x128 = 7150U;
	volatile int32_t t31 = -8;

	t31 = ((x125&x126)^(x127^x128));

	if (t31 != 2147476121) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -33;
	int8_t x130 = -1;
	uint64_t x131 = 4178456565LLU;
	static volatile uint64_t x132 = 63LLU;
	static uint64_t t32 = 41899259019399LLU;

	t32 = ((x129&x130)^(x131^x132));

	if (t32 != 18446744069531095061LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	volatile int16_t x134 = 103;
	int8_t x135 = INT8_MAX;
	int64_t x136 = INT64_MAX;
	static int64_t t33 = 0LL;

	t33 = ((x133&x134)^(x135^x136));

	if (t33 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x137 = INT32_MIN;
	static int8_t x138 = INT8_MIN;
	uint8_t x139 = 1U;
	volatile uint64_t x140 = 8526688277366LLU;
	volatile uint64_t t34 = 60LLU;

	t34 = ((x137&x138)^(x139^x140));

	if (t34 != 18446735547230180215LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 811090054028260336LLU;
	static int8_t x142 = INT8_MAX;
	int16_t x143 = -1;
	int8_t x144 = INT8_MIN;
	uint64_t t35 = 3171024202258219LLU;

	t35 = ((x141&x142)^(x143^x144));

	if (t35 != 15LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 551;
	volatile uint32_t x146 = UINT32_MAX;
	int16_t x147 = -1;
	uint32_t t36 = 3322772U;

	t36 = ((x145&x146)^(x147^x148));

	if (t36 != 32216U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 1U;
	uint8_t x150 = 1U;
	uint64_t x151 = 988LLU;
	static int8_t x152 = INT8_MIN;

	t37 = ((x149&x150)^(x151^x152));

	if (t37 != 18446744073709550685LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	volatile int8_t x154 = 13;
	volatile uint8_t x156 = UINT8_MAX;
	int32_t t38 = 118255264;

	t38 = ((x153&x154)^(x155^x156));

	if (t38 != -243) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MAX;
	int32_t x158 = -79761729;
	uint16_t x159 = 52U;
	static int8_t x160 = INT8_MAX;
	int32_t t39 = -2742;

	t39 = ((x157&x158)^(x159^x160));

	if (t39 != 116) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 1;
	static uint64_t x162 = 1210291LLU;
	static int32_t x163 = 4;
	volatile int8_t x164 = INT8_MIN;
	volatile uint64_t t40 = 8LLU;

	t40 = ((x161&x162)^(x163^x164));

	if (t40 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 93U;
	uint16_t x168 = 2U;
	static int32_t t41 = -12886319;

	t41 = ((x165&x166)^(x167^x168));

	if (t41 != -2147483646) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -524470031706498819LL;
	static volatile int8_t x170 = INT8_MIN;
	int16_t x172 = INT16_MIN;
	volatile int64_t t42 = -6823036833034357LL;

	t42 = ((x169&x170)^(x171^x172));

	if (t42 != 524470031706511615LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int16_t x175 = -261;
	int8_t x176 = -5;
	static int32_t t43 = -154;

	t43 = ((x173&x174)^(x175^x176));

	if (t43 != -2147483392) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = -1;
	uint8_t x180 = UINT8_MAX;
	int32_t t44 = 147419;

	t44 = ((x177&x178)^(x179^x180));

	if (t44 != 32639) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	volatile uint16_t x182 = 3493U;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = 75751U;
	volatile uint32_t t45 = 962U;

	t45 = ((x181&x182)^(x183^x184));

	if (t45 != 87485U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = 2827;
	int8_t x187 = INT8_MIN;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = 109316625;

	t46 = ((x185&x186)^(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = -109;
	static volatile int64_t x191 = INT64_MIN;
	int64_t t47 = -128702LL;

	t47 = ((x189&x190)^(x191^x192));

	if (t47 != 9223372034707292051LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = 7749LLU;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile uint64_t t48 = 204064674232090LLU;

	t48 = ((x193&x194)^(x195^x196));

	if (t48 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = 1722799485539551LLU;
	int8_t x198 = INT8_MAX;
	int32_t x200 = INT32_MIN;

	t49 = ((x197&x198)^(x199^x200));

	if (t49 != 2147450975LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	int16_t x203 = -1;
	int32_t x204 = INT32_MIN;

	t50 = ((x201&x202)^(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 271706501143LLU;
	volatile int32_t x207 = INT32_MAX;
	int16_t x208 = -1;
	uint64_t t51 = 330630152171LLU;

	t51 = ((x205&x206)^(x207^x208));

	if (t51 != 18446744072648392710LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MAX;
	volatile int64_t x210 = -1LL;
	int8_t x211 = -19;
	static int32_t x212 = INT32_MIN;
	volatile int64_t t52 = 900361LL;

	t52 = ((x209&x210)^(x211^x212));

	if (t52 != 2147450898LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	volatile int8_t x214 = INT8_MAX;
	int8_t x216 = 14;
	int32_t t53 = 20232;

	t53 = ((x213&x214)^(x215^x216));

	if (t53 != 14) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MAX;
	uint64_t x218 = 110LLU;
	static int32_t x219 = INT32_MAX;
	static volatile uint64_t t54 = 21656184003LLU;

	t54 = ((x217&x218)^(x219^x220));

	if (t54 != 18446744071562067985LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	int16_t x222 = INT16_MAX;
	uint16_t x223 = UINT16_MAX;
	int32_t t55 = -53;

	t55 = ((x221&x222)^(x223^x224));

	if (t55 != -65536) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = -116;
	int64_t x227 = INT64_MIN;
	uint16_t x228 = 298U;

	t56 = ((x225&x226)^(x227^x228));

	if (t56 != 298LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 62U;
	int8_t x230 = -1;
	uint8_t x231 = 12U;

	t57 = ((x229&x230)^(x231^x232));

	if (t57 != 129U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MAX;
	volatile int16_t x235 = -1;
	volatile uint64_t x236 = 32297400931679654LLU;
	uint64_t t58 = 2LLU;

	t58 = ((x233&x234)^(x235^x236));

	if (t58 != 18414446672804031517LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x240 = 279674501;
	uint64_t t59 = 5438925576519184605LLU;

	t59 = ((x237&x238)^(x239^x240));

	if (t59 != 279674501LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = -3;
	int64_t x243 = -1LL;
	int64_t x244 = 358380765125016LL;
	static volatile uint64_t t60 = 16982938039LLU;

	t60 = ((x241&x242)^(x243^x244));

	if (t60 != 18352813065888717011LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 1U;
	volatile int8_t x246 = -1;
	volatile int64_t x247 = INT64_MIN;
	uint32_t x248 = 43978551U;
	volatile int64_t t61 = 36002257033LL;

	t61 = ((x245&x246)^(x247^x248));

	if (t61 != -9223372036810797258LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x250 = UINT16_MAX;
	uint32_t x251 = 148278U;
	volatile int32_t x252 = 493222;
	volatile int64_t t62 = -324123003938558452LL;

	t62 = ((x249&x250)^(x251^x252));

	if (t62 != 342639LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x254 = 70059U;
	static int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	static volatile uint32_t t63 = 1905942U;

	t63 = ((x253&x254)^(x255^x256));

	if (t63 != 2147451048U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = UINT32_MAX;
	static uint16_t x258 = UINT16_MAX;
	volatile int32_t x260 = INT32_MAX;
	uint64_t t64 = 13721LLU;

	t64 = ((x257&x258)^(x259^x260));

	if (t64 != 100733055775144LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 60;
	int16_t x263 = INT16_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t65 = 386607028095058611LLU;

	t65 = ((x261&x262)^(x263^x264));

	if (t65 != 32731LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -605942608087349327LL;
	int16_t x266 = INT16_MAX;
	static uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MIN;
	int64_t t66 = 6290240153LL;

	t66 = ((x265&x266)^(x267^x268));

	if (t66 != -2147420082LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x270 = -1;
	uint16_t x272 = 2U;
	volatile int64_t t67 = 6209108LL;

	t67 = ((x269&x270)^(x271^x272));

	if (t67 != 32765LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 0;
	volatile int8_t x274 = INT8_MAX;
	uint64_t t68 = 158800050LLU;

	t68 = ((x273&x274)^(x275^x276));

	if (t68 != 2099119962686LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	volatile int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MAX;
	volatile int64_t t69 = -2LL;

	t69 = ((x277&x278)^(x279^x280));

	if (t69 != -9223372034707293292LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MIN;
	uint64_t x282 = 10292810LLU;
	int64_t x284 = INT64_MIN;
	static volatile uint64_t t70 = 689LLU;

	t70 = ((x281&x282)^(x283^x284));

	if (t70 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -1LL;
	uint16_t x286 = 14778U;
	uint64_t x287 = 1824LLU;
	int64_t x288 = -8051710LL;
	uint64_t t71 = 129633LLU;

	t71 = ((x285&x286)^(x287^x288));

	if (t71 != 18446744073701497496LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x290 = 0;
	int8_t x292 = INT8_MAX;
	volatile uint64_t t72 = 64262213888909733LLU;

	t72 = ((x289&x290)^(x291^x292));

	if (t72 != 2424945666288582LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	static int16_t x294 = 5424;
	int64_t x295 = 4881598463327LL;
	volatile uint64_t t73 = 18LLU;

	t73 = ((x293&x294)^(x295^x296));

	if (t73 != 18446739192111093648LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x298 = 81U;
	int16_t x299 = 1;
	volatile int32_t t74 = 1935;

	t74 = ((x297&x298)^(x299^x300));

	if (t74 != 92) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	volatile uint8_t x302 = 0U;
	static int32_t x303 = INT32_MIN;
	int16_t x304 = -1;

	t75 = ((x301&x302)^(x303^x304));

	if (t75 != 2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = UINT64_MAX;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = -34;
	int8_t x308 = -1;
	uint64_t t76 = 1394LLU;

	t76 = ((x305&x306)^(x307^x308));

	if (t76 != 222LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 2U;
	int64_t x310 = INT64_MAX;
	int64_t x311 = -3028490187582359533LL;
	volatile int64_t t77 = -663LL;

	t77 = ((x309&x310)^(x311^x312));

	if (t77 != -3028490187582359535LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -56;
	volatile uint64_t x314 = 4739LLU;
	int8_t x315 = INT8_MIN;
	volatile int64_t x316 = -1LL;
	static uint64_t t78 = 19415LLU;

	t78 = ((x313&x314)^(x315^x316));

	if (t78 != 4863LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 31U;
	static int32_t x318 = -28;
	volatile int32_t x319 = -3;
	int32_t x320 = INT32_MIN;
	volatile int32_t t79 = -712;

	t79 = ((x317&x318)^(x319^x320));

	if (t79 != 2147483641) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -3;
	volatile int16_t x322 = INT16_MIN;
	static uint16_t x323 = 543U;
	int32_t t80 = 532657465;

	t80 = ((x321&x322)^(x323^x324));

	if (t80 != 32224) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int64_t x327 = -1LL;
	int32_t x328 = INT32_MAX;
	int64_t t81 = 27427907976LL;

	t81 = ((x325&x326)^(x327^x328));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x330 = -1;
	int64_t x331 = INT64_MIN;
	int64_t x332 = -139LL;
	volatile int64_t t82 = 8090050LL;

	t82 = ((x329&x330)^(x331^x332));

	if (t82 != 138LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MAX;
	int16_t x335 = INT16_MAX;
	volatile uint64_t t83 = 253LLU;

	t83 = ((x333&x334)^(x335^x336));

	if (t83 != 29155LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MIN;
	volatile int64_t t84 = -735LL;

	t84 = ((x337&x338)^(x339^x340));

	if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 1096414LLU;
	uint64_t x342 = 8517139532526890LLU;
	int16_t x343 = -1;
	int16_t x344 = 114;

	t85 = ((x341&x342)^(x343^x344));

	if (t85 != 18446744073708457863LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 20144704816620LLU;
	volatile int64_t x347 = -1LL;
	volatile uint64_t x348 = UINT64_MAX;
	volatile uint64_t t86 = 228450LLU;

	t86 = ((x345&x346)^(x347^x348));

	if (t86 != 36LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	static uint64_t x350 = 164832812795642LLU;
	int32_t x352 = -428466407;
	static uint64_t t87 = 78282LLU;

	t87 = ((x349&x350)^(x351^x352));

	if (t87 != 164833207576092LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 1LLU;
	int32_t x354 = INT32_MIN;
	volatile int8_t x355 = INT8_MAX;
	int8_t x356 = INT8_MIN;
	uint64_t t88 = UINT64_MAX;

	t88 = ((x353&x354)^(x355^x356));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = UINT8_MAX;
	uint8_t x358 = 2U;
	int8_t x359 = 1;
	int32_t t89 = -30784;

	t89 = ((x357&x358)^(x359^x360));

	if (t89 != 65532) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MAX;
	uint32_t x363 = UINT32_MAX;
	int64_t x364 = INT64_MAX;
	static volatile int64_t t90 = -14759LL;

	t90 = ((x361&x362)^(x363^x364));

	if (t90 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int64_t x366 = INT64_MIN;
	volatile int8_t x368 = -50;

	t91 = ((x365&x366)^(x367^x368));

	if (t91 != -9223372036854774831LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 132418958034075552LLU;
	volatile int16_t x370 = INT16_MAX;
	uint16_t x371 = UINT16_MAX;
	static volatile int64_t x372 = INT64_MIN;
	volatile uint64_t t92 = 685LLU;

	t92 = ((x369&x370)^(x371^x372));

	if (t92 != 9223372036854808671LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 0U;
	uint64_t x374 = UINT64_MAX;
	static volatile int64_t x376 = INT64_MAX;

	t93 = ((x373&x374)^(x375^x376));

	if (t93 != 9223372036854775430LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = 1;
	volatile int32_t x379 = INT32_MAX;
	static volatile int64_t t94 = -33267296LL;

	t94 = ((x377&x378)^(x379^x380));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -2797;
	int32_t x383 = INT32_MIN;
	volatile uint64_t t95 = 3967LLU;

	t95 = ((x381&x382)^(x383^x384));

	if (t95 != 2145532561LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x385 = -333;
	uint8_t x387 = 111U;
	int64_t x388 = -1LL;
	volatile int64_t t96 = 997LL;

	t96 = ((x385&x386)^(x387^x388));

	if (t96 != 291LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x390 = INT64_MIN;
	static volatile uint16_t x391 = 7U;
	static volatile int32_t x392 = INT32_MIN;
	volatile uint64_t t97 = 4003776917701021LLU;

	t97 = ((x389&x390)^(x391^x392));

	if (t97 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = -1;
	volatile int16_t x395 = -1816;
	int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 5;

	t98 = ((x393&x394)^(x395^x396));

	if (t98 != 1815) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MAX;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = INT64_MAX;
	int64_t t99 = 76560920216LL;

	t99 = ((x397&x398)^(x399^x400));

	if (t99 != 9223372036854710272LL) { NG(); } else { ; }
	
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

