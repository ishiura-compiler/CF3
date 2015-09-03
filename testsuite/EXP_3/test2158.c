#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
volatile int16_t x13 = -1;
uint16_t x15 = 4U;
uint32_t t6 = 39594382U;
uint8_t x29 = UINT8_MAX;
int16_t x30 = 11;
volatile int8_t x34 = -1;
static int64_t x35 = -1LL;
volatile int8_t x38 = INT8_MIN;
uint8_t x41 = 14U;
volatile uint32_t t11 = 31U;
static uint8_t x53 = 108U;
uint64_t x60 = 63LLU;
int64_t t17 = 384605199353908936LL;
volatile int64_t x74 = -1LL;
volatile int64_t x79 = INT64_MIN;
int8_t x80 = -1;
uint16_t x82 = 3U;
static volatile int8_t x87 = INT8_MAX;
uint8_t x88 = 11U;
static int32_t t21 = -1;
int32_t x92 = INT32_MIN;
static int64_t x94 = -1LL;
static int8_t x97 = INT8_MIN;
int16_t x100 = INT16_MIN;
int64_t x102 = INT64_MAX;
volatile int64_t x105 = INT64_MAX;
volatile int64_t x109 = INT64_MIN;
int32_t x115 = 171235246;
int32_t x122 = -667;
int64_t x130 = -1LL;
volatile int32_t x133 = INT32_MIN;
int32_t x138 = -19504;
int64_t t34 = -172LL;
int8_t x147 = -1;
int16_t x156 = -1;
int64_t t38 = -3800951562110227LL;
uint8_t x163 = 3U;
int32_t x165 = -1;
int32_t x167 = -1;
static uint16_t x187 = 98U;
int32_t x188 = 4473;
static int64_t x193 = INT64_MAX;
static int32_t x194 = INT32_MAX;
static uint8_t x195 = UINT8_MAX;
int32_t x197 = -1;
static int32_t x202 = -180;
uint64_t x203 = UINT64_MAX;
static volatile uint64_t t50 = 40108921968416858LLU;
int32_t x206 = -1;
static uint16_t x210 = UINT16_MAX;
volatile uint32_t t52 = 4U;
int64_t x215 = INT64_MAX;
static int64_t x219 = INT64_MIN;
volatile int32_t t55 = -6;
int64_t x227 = INT64_MIN;
int64_t x228 = INT64_MIN;
int16_t x234 = -120;
int64_t x235 = -1LL;
int32_t x247 = -1;
int32_t x248 = -223681;
volatile int64_t t62 = 46742198866284LL;
volatile int32_t x254 = INT32_MIN;
int32_t x256 = -21;
static int16_t x263 = INT16_MIN;
int64_t x265 = INT64_MIN;
uint16_t x266 = UINT16_MAX;
int8_t x271 = INT8_MIN;
int32_t x276 = INT32_MIN;
int32_t x282 = 9;
uint8_t x283 = 70U;
int64_t x287 = INT64_MAX;
int16_t x291 = INT16_MAX;
uint8_t x296 = 10U;
int64_t x299 = 1LL;
int16_t x302 = INT16_MIN;
volatile int8_t x305 = -1;
volatile int8_t x308 = -1;
int32_t x310 = INT32_MIN;
volatile uint64_t t78 = 330LLU;
int32_t x317 = 14;
uint8_t x332 = UINT8_MAX;
int32_t t83 = -42873;
int16_t x340 = 926;
volatile int32_t t84 = -11864070;
int32_t x342 = -1;
int8_t x351 = INT8_MIN;
int8_t x352 = 0;
volatile int32_t t87 = -3;
int32_t x354 = -1;
int16_t x359 = -1;
volatile int8_t x361 = INT8_MAX;
uint8_t x381 = 86U;
static volatile int64_t t95 = -40LL;
static uint64_t x396 = UINT64_MAX;
int64_t x397 = INT64_MIN;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MAX;
	volatile uint64_t x3 = UINT64_MAX;
	static uint64_t t0 = 16441057645LLU;

	t0 = ((x1<=x2)^(x3^x4));

	if (t0 != 32766LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 1027105309198LLU;
	int16_t x6 = -1;
	int16_t x7 = -1;
	uint32_t x8 = 79518999U;
	volatile uint32_t t1 = 27001584U;

	t1 = ((x5<=x6)^(x7^x8));

	if (t1 != 4215448297U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	int16_t x10 = INT16_MIN;
	int8_t x11 = 5;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -341;

	t2 = ((x9<=x10)^(x11^x12));

	if (t2 != -123) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -164105235;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -31;

	t3 = ((x13<=x14)^(x15^x16));

	if (t3 != -32764) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x17 = UINT16_MAX;
	uint16_t x18 = 481U;
	int16_t x19 = INT16_MIN;
	int16_t x20 = 10;
	static int32_t t4 = -1225027;

	t4 = ((x17<=x18)^(x19^x20));

	if (t4 != -32758) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static int32_t x22 = INT32_MIN;
	static volatile int32_t x23 = INT32_MIN;
	int32_t x24 = -1;
	volatile int32_t t5 = INT32_MAX;

	t5 = ((x21<=x22)^(x23^x24));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -1;
	uint16_t x26 = 688U;
	volatile uint32_t x27 = 1485959897U;
	int8_t x28 = -1;

	t6 = ((x25<=x26)^(x27^x28));

	if (t6 != 2809007399U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x31 = -262807;
	volatile int64_t x32 = -10004641494298973LL;
	int64_t t7 = -12LL;

	t7 = ((x29<=x30)^(x31^x32));

	if (t7 != 10004641494037450LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 0;
	static int64_t x36 = INT64_MIN;
	int64_t t8 = INT64_MAX;

	t8 = ((x33<=x34)^(x35^x36));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	volatile uint8_t x39 = 1U;
	int64_t x40 = INT64_MAX;
	volatile int64_t t9 = INT64_MAX;

	t9 = ((x37<=x38)^(x39^x40));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	static int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 8011;

	t10 = ((x41<=x42)^(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	static uint8_t x46 = UINT8_MAX;
	uint8_t x47 = 9U;
	uint32_t x48 = 282248U;

	t11 = ((x45<=x46)^(x47^x48));

	if (t11 != 282240U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 0LLU;
	int8_t x50 = INT8_MIN;
	static volatile int64_t x51 = INT64_MIN;
	int32_t x52 = 10;
	volatile int64_t t12 = 655312035988982387LL;

	t12 = ((x49<=x50)^(x51^x52));

	if (t12 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -61;
	static volatile uint64_t x55 = UINT64_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile uint64_t t13 = 126154306906560633LLU;

	t13 = ((x53<=x54)^(x55^x56));

	if (t13 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	uint32_t x58 = 5U;
	static volatile int16_t x59 = INT16_MIN;
	volatile uint64_t t14 = 213401458200LLU;

	t14 = ((x57<=x58)^(x59^x60));

	if (t14 != 18446744073709518911LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MAX;
	volatile int8_t x63 = INT8_MIN;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -163262;

	t15 = ((x61<=x62)^(x63^x64));

	if (t15 != 2147483521) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -3;
	uint8_t x66 = 46U;
	int8_t x67 = INT8_MIN;
	uint64_t x68 = 1887133066406LLU;
	static uint64_t t16 = 899103LLU;

	t16 = ((x65<=x66)^(x67^x68));

	if (t16 != 18446742186576485159LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	uint64_t x70 = 99052LLU;
	volatile int16_t x71 = -5;
	static int64_t x72 = -2214357087LL;

	t17 = ((x69<=x70)^(x71^x72));

	if (t17 != 2214357083LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	volatile int64_t x75 = 44254114287LL;
	static int64_t x76 = INT64_MIN;
	volatile int64_t t18 = 16235927LL;

	t18 = ((x73<=x74)^(x75^x76));

	if (t18 != -9223371992600661521LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	uint32_t x78 = 71787830U;
	int64_t t19 = 1182747619049837LL;

	t19 = ((x77<=x78)^(x79^x80));

	if (t19 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x83 = 1U;
	int32_t x84 = 127;
	volatile int32_t t20 = -6999;

	t20 = ((x81<=x82)^(x83^x84));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	uint32_t x86 = UINT32_MAX;

	t21 = ((x85<=x86)^(x87^x88));

	if (t21 != 117) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 3LLU;
	volatile uint64_t x90 = 82473792955LLU;
	int16_t x91 = -24;
	static volatile int32_t t22 = -23288;

	t22 = ((x89<=x90)^(x91^x92));

	if (t22 != 2147483625) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	volatile uint8_t x95 = 1U;
	int64_t x96 = INT64_MAX;
	int64_t t23 = INT64_MAX;

	t23 = ((x93<=x94)^(x95^x96));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = 23;
	int16_t x99 = INT16_MAX;
	static volatile int32_t t24 = -739;

	t24 = ((x97<=x98)^(x99^x100));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	int8_t x103 = INT8_MAX;
	static int32_t x104 = 3755;
	int32_t t25 = 25370;

	t25 = ((x101<=x102)^(x103^x104));

	if (t25 != 3797) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MIN;
	int32_t x107 = -1;
	int16_t x108 = INT16_MAX;
	int32_t t26 = 97537963;

	t26 = ((x105<=x106)^(x107^x108));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -50137200965504782LL;
	int8_t x111 = -1;
	volatile int8_t x112 = INT8_MIN;
	static volatile int32_t t27 = 0;

	t27 = ((x109<=x110)^(x111^x112));

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint64_t x114 = 3638572LLU;
	int8_t x116 = INT8_MAX;
	static volatile int32_t t28 = -2;

	t28 = ((x113<=x114)^(x115^x116));

	if (t28 != 171235280) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = 1U;
	int8_t x118 = -29;
	volatile uint16_t x119 = 2U;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 758379;

	t29 = ((x117<=x118)^(x119^x120));

	if (t29 != -32766) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x123 = INT64_MAX;
	int32_t x124 = -1;
	int64_t t30 = INT64_MIN;

	t30 = ((x121<=x122)^(x123^x124));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int8_t x126 = INT8_MIN;
	static int16_t x127 = -1;
	int64_t x128 = -43LL;
	static volatile int64_t t31 = -8501291927327LL;

	t31 = ((x125<=x126)^(x127^x128));

	if (t31 != 42LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static int8_t x131 = -60;
	int16_t x132 = 5486;
	volatile int32_t t32 = 22;

	t32 = ((x129<=x130)^(x131^x132));

	if (t32 != -5461) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = 27737U;
	volatile uint64_t x135 = 9660161LLU;
	static volatile uint8_t x136 = UINT8_MAX;
	uint64_t t33 = 254499108406LLU;

	t33 = ((x133<=x134)^(x135^x136));

	if (t33 != 9660414LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 1789LLU;
	volatile int16_t x139 = -1;
	static volatile int64_t x140 = INT64_MIN;

	t34 = ((x137<=x138)^(x139^x140));

	if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MAX;
	uint16_t x142 = 11U;
	uint8_t x143 = 2U;
	int32_t x144 = -241;
	int32_t t35 = -11;

	t35 = ((x141<=x142)^(x143^x144));

	if (t35 != -243) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 7U;
	uint32_t x146 = 25750U;
	int16_t x148 = -1;
	volatile int32_t t36 = -1299;

	t36 = ((x145<=x146)^(x147^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	static int32_t x150 = INT32_MAX;
	uint32_t x151 = 17512669U;
	int32_t x152 = INT32_MIN;
	volatile uint32_t t37 = 784U;

	t37 = ((x149<=x150)^(x151^x152));

	if (t37 != 2164996316U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	static uint8_t x154 = UINT8_MAX;
	int64_t x155 = -59772631497605LL;

	t38 = ((x153<=x154)^(x155^x156));

	if (t38 != 59772631497605LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 7U;
	uint8_t x158 = 30U;
	int16_t x159 = -53;
	volatile int64_t x160 = INT64_MIN;
	static volatile int64_t t39 = -5499641750231889LL;

	t39 = ((x157<=x158)^(x159^x160));

	if (t39 != 9223372036854775754LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	volatile int16_t x162 = -1059;
	volatile uint8_t x164 = 3U;
	int32_t t40 = 13190742;

	t40 = ((x161<=x162)^(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = 255;
	volatile int64_t x168 = INT64_MAX;
	static int64_t t41 = -978973916712LL;

	t41 = ((x165<=x166)^(x167^x168));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 25;
	static volatile int16_t x170 = 1;
	static uint8_t x171 = UINT8_MAX;
	volatile int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = 421671;

	t42 = ((x169<=x170)^(x171^x172));

	if (t42 != -2147483393) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 1003980;
	int16_t x174 = -1;
	int32_t x175 = 13;
	int64_t x176 = -1LL;
	int64_t t43 = -1750116486LL;

	t43 = ((x173<=x174)^(x175^x176));

	if (t43 != -14LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	int64_t x178 = -6474LL;
	int32_t x179 = INT32_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 74318472;

	t44 = ((x177<=x178)^(x179^x180));

	if (t44 != -2147450881) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint8_t x182 = 10U;
	uint16_t x183 = 7U;
	volatile uint32_t x184 = 22449994U;
	volatile uint32_t t45 = 42950U;

	t45 = ((x181<=x182)^(x183^x184));

	if (t45 != 22449996U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	volatile uint16_t x186 = UINT16_MAX;
	int32_t t46 = 6022;

	t46 = ((x185<=x186)^(x187^x188));

	if (t46 != 4378) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	static volatile uint8_t x190 = UINT8_MAX;
	int8_t x191 = 0;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 16737947;

	t47 = ((x189<=x190)^(x191^x192));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x196 = 6338U;
	int32_t t48 = -805735077;

	t48 = ((x193<=x194)^(x195^x196));

	if (t48 != 6205) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x198 = -1;
	uint16_t x199 = 1470U;
	uint16_t x200 = 59U;
	int32_t t49 = 1;

	t49 = ((x197<=x198)^(x199^x200));

	if (t49 != 1412) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	int32_t x204 = INT32_MAX;

	t50 = ((x201<=x202)^(x203^x204));

	if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int32_t x207 = INT32_MIN;
	int16_t x208 = -1;
	int32_t t51 = 265880587;

	t51 = ((x205<=x206)^(x207^x208));

	if (t51 != 2147483646) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = 67081146771LLU;
	int32_t x211 = 2670;
	uint32_t x212 = UINT32_MAX;

	t52 = ((x209<=x210)^(x211^x212));

	if (t52 != 4294964625U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	static int16_t x214 = INT16_MIN;
	int32_t x216 = INT32_MIN;
	static volatile int64_t t53 = 893378423595875150LL;

	t53 = ((x213<=x214)^(x215^x216));

	if (t53 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = -1120;
	volatile uint16_t x218 = 73U;
	volatile int32_t x220 = -1;
	int64_t t54 = -34255488556199LL;

	t54 = ((x217<=x218)^(x219^x220));

	if (t54 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 85U;
	static int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	int8_t x224 = INT8_MAX;

	t55 = ((x221<=x222)^(x223^x224));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int32_t x226 = INT32_MAX;
	static volatile int64_t t56 = 164620111222518LL;

	t56 = ((x225<=x226)^(x227^x228));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int16_t x230 = INT16_MIN;
	int32_t x231 = -887629;
	int64_t x232 = -1LL;
	volatile int64_t t57 = -224461216864228LL;

	t57 = ((x229<=x230)^(x231^x232));

	if (t57 != 887628LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -1;
	int8_t x236 = INT8_MIN;
	volatile int64_t t58 = 4027077625212376843LL;

	t58 = ((x233<=x234)^(x235^x236));

	if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x238 = INT16_MIN;
	uint16_t x239 = 4U;
	int64_t x240 = -41318060610LL;
	volatile int64_t t59 = 218946402686LL;

	t59 = ((x237<=x238)^(x239^x240));

	if (t59 != -41318060614LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 1774;
	volatile int8_t x242 = INT8_MAX;
	uint16_t x243 = 12768U;
	int8_t x244 = -1;
	static int32_t t60 = -96728;

	t60 = ((x241<=x242)^(x243^x244));

	if (t60 != -12769) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 1U;
	volatile uint16_t x246 = UINT16_MAX;
	static volatile int32_t t61 = -206548150;

	t61 = ((x245<=x246)^(x247^x248));

	if (t61 != 223681) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	int32_t x252 = INT32_MIN;

	t62 = ((x249<=x250)^(x251^x252));

	if (t62 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	uint16_t x255 = UINT16_MAX;
	static int32_t t63 = 14;

	t63 = ((x253<=x254)^(x255^x256));

	if (t63 != -65516) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	int32_t x258 = -30778;
	static uint32_t x259 = 9575517U;
	int16_t x260 = INT16_MIN;
	uint32_t t64 = 6544U;

	t64 = ((x257<=x258)^(x259^x260));

	if (t64 != 4285373533U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x261 = INT64_MIN;
	int16_t x262 = -1;
	int8_t x264 = -1;
	int32_t t65 = -25158;

	t65 = ((x261<=x262)^(x263^x264));

	if (t65 != 32766) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x267 = 836538U;
	int8_t x268 = -1;
	static volatile uint32_t t66 = 66590070U;

	t66 = ((x265<=x266)^(x267^x268));

	if (t66 != 4294130756U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MAX;
	static int16_t x270 = 1;
	uint64_t x272 = 89LLU;
	uint64_t t67 = 3921980922LLU;

	t67 = ((x269<=x270)^(x271^x272));

	if (t67 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = UINT64_MAX;
	volatile int64_t x275 = INT64_MIN;
	volatile int64_t t68 = -30LL;

	t68 = ((x273<=x274)^(x275^x276));

	if (t68 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 0;
	volatile int32_t x278 = INT32_MIN;
	uint64_t x279 = 23106527651718LLU;
	uint64_t x280 = 60847LLU;
	volatile uint64_t t69 = 6558LLU;

	t69 = ((x277<=x278)^(x279^x280));

	if (t69 != 23106527660585LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 244U;
	static int64_t x284 = INT64_MIN;
	int64_t t70 = -13855154368484862LL;

	t70 = ((x281<=x282)^(x283^x284));

	if (t70 != -9223372036854775738LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int16_t x286 = INT16_MAX;
	static volatile uint8_t x288 = 12U;
	int64_t t71 = -848LL;

	t71 = ((x285<=x286)^(x287^x288));

	if (t71 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	int32_t x290 = INT32_MIN;
	int16_t x292 = 58;
	volatile int32_t t72 = -16046979;

	t72 = ((x289<=x290)^(x291^x292));

	if (t72 != 32709) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = -783;
	volatile int8_t x295 = -1;
	int32_t t73 = 723865;

	t73 = ((x293<=x294)^(x295^x296));

	if (t73 != -11) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 34063316030387LL;
	int64_t x298 = 14LL;
	volatile uint64_t x300 = 29839048LLU;
	static uint64_t t74 = 182243058LLU;

	t74 = ((x297<=x298)^(x299^x300));

	if (t74 != 29839049LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 5U;
	uint64_t x303 = UINT64_MAX;
	int32_t x304 = 37;
	static uint64_t t75 = 22LLU;

	t75 = ((x301<=x302)^(x303^x304));

	if (t75 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x306 = 1282U;
	int32_t x307 = -1;
	volatile int32_t t76 = 6;

	t76 = ((x305<=x306)^(x307^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = 8LLU;
	volatile uint64_t x311 = 20181366255524LLU;
	static uint8_t x312 = 80U;
	static uint64_t t77 = 15LLU;

	t77 = ((x309<=x310)^(x311^x312));

	if (t77 != 20181366255605LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 1;
	static uint16_t x314 = 146U;
	uint64_t x315 = 5603LLU;
	volatile int32_t x316 = 15530157;

	t78 = ((x313<=x314)^(x315^x316));

	if (t78 != 15527247LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = UINT16_MAX;
	uint32_t x319 = 318U;
	uint32_t x320 = 47349U;
	static uint32_t t79 = 14U;

	t79 = ((x317<=x318)^(x319^x320));

	if (t79 != 47562U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 1U;
	int32_t x322 = INT32_MIN;
	int32_t x323 = -1;
	int32_t x324 = INT32_MAX;
	int32_t t80 = 572122430;

	t80 = ((x321<=x322)^(x323^x324));

	if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	static int64_t x326 = INT64_MIN;
	static int64_t x327 = -1LL;
	int16_t x328 = INT16_MAX;
	static volatile int64_t t81 = -213LL;

	t81 = ((x325<=x326)^(x327^x328));

	if (t81 != -32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int8_t x330 = INT8_MIN;
	int16_t x331 = -1;
	volatile int32_t t82 = 38;

	t82 = ((x329<=x330)^(x331^x332));

	if (t82 != -256) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = -15;
	int32_t x334 = INT32_MIN;
	uint8_t x335 = 12U;
	int8_t x336 = INT8_MIN;

	t83 = ((x333<=x334)^(x335^x336));

	if (t83 != -116) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 1459194U;
	static volatile int16_t x338 = 810;
	volatile uint16_t x339 = 615U;

	t84 = ((x337<=x338)^(x339^x340));

	if (t84 != 505) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -2;
	static int64_t x343 = 2358LL;
	volatile int8_t x344 = INT8_MAX;
	volatile int64_t t85 = -605409919LL;

	t85 = ((x341<=x342)^(x343^x344));

	if (t85 != 2376LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 1830LLU;
	uint32_t x346 = 252U;
	int8_t x347 = 1;
	int32_t x348 = -3627;
	volatile int32_t t86 = 4785;

	t86 = ((x345<=x346)^(x347^x348));

	if (t86 != -3628) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = -1;
	int32_t x350 = INT32_MIN;

	t87 = ((x349<=x350)^(x351^x352));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile int8_t x355 = INT8_MIN;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 1;

	t88 = ((x353<=x354)^(x355^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1077LL;
	uint64_t x358 = 1071804408LLU;
	static volatile int64_t x360 = INT64_MIN;
	volatile int64_t t89 = INT64_MAX;

	t89 = ((x357<=x358)^(x359^x360));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x362 = INT16_MIN;
	volatile int8_t x363 = INT8_MIN;
	uint32_t x364 = 6708857U;
	uint32_t t90 = 288536267U;

	t90 = ((x361<=x362)^(x363^x364));

	if (t90 != 4288258553U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 43U;
	int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = 1;

	t91 = ((x365<=x366)^(x367^x368));

	if (t91 != 2147483393) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 15924040U;
	static volatile int8_t x370 = INT8_MAX;
	uint16_t x371 = 0U;
	int64_t x372 = INT64_MAX;
	int64_t t92 = INT64_MAX;

	t92 = ((x369<=x370)^(x371^x372));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	volatile int8_t x374 = 6;
	static int64_t x375 = -1LL;
	volatile int32_t x376 = INT32_MAX;
	volatile int64_t t93 = -71457LL;

	t93 = ((x373<=x374)^(x375^x376));

	if (t93 != -2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = 15U;
	static volatile int8_t x378 = INT8_MAX;
	uint8_t x379 = UINT8_MAX;
	uint8_t x380 = 17U;
	int32_t t94 = -3;

	t94 = ((x377<=x378)^(x379^x380));

	if (t94 != 239) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = -1;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -54270505988984LL;

	t95 = ((x381<=x382)^(x383^x384));

	if (t95 != 54270505988872LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 132834290189548416LLU;
	int16_t x386 = -1;
	static uint8_t x387 = 46U;
	int8_t x388 = INT8_MIN;
	volatile int32_t t96 = 9591897;

	t96 = ((x385<=x386)^(x387^x388));

	if (t96 != -81) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	static volatile uint8_t x390 = 25U;
	static int16_t x391 = -1;
	int16_t x392 = -1;
	int32_t t97 = 0;

	t97 = ((x389<=x390)^(x391^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = 1;
	int8_t x394 = -1;
	uint16_t x395 = 969U;
	static uint64_t t98 = 2412617582808421824LLU;

	t98 = ((x393<=x394)^(x395^x396));

	if (t98 != 18446744073709550646LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x398 = 827641295904LL;
	int64_t x399 = INT64_MIN;
	int64_t x400 = -1LL;
	int64_t t99 = -26801909502LL;

	t99 = ((x397<=x398)^(x399^x400));

	if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
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

