#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x13 = 89U;
static uint32_t x28 = 48247U;
uint64_t x30 = 3094113382435433977LLU;
uint16_t x33 = 433U;
volatile int32_t x36 = INT32_MIN;
int8_t x37 = -1;
volatile int64_t t9 = 373303735731LL;
volatile int32_t x43 = INT32_MAX;
int64_t t10 = 15LL;
uint16_t x46 = 8090U;
int64_t t13 = -798828LL;
static volatile uint64_t t15 = 19999266183530179LLU;
volatile int16_t x67 = INT16_MIN;
uint16_t x74 = 1U;
int8_t x75 = INT8_MAX;
int32_t x76 = -13193827;
int64_t x79 = 60424028900383266LL;
int8_t x82 = -1;
uint64_t x84 = 13LLU;
uint64_t t20 = 407206534LLU;
static int64_t t21 = 25LL;
int32_t x99 = -42425;
int16_t x100 = -14;
uint32_t t24 = 159U;
static int64_t x102 = INT64_MAX;
static int8_t x111 = INT8_MIN;
int8_t x113 = INT8_MIN;
uint8_t x118 = 4U;
int16_t x121 = INT16_MAX;
static volatile int8_t x123 = INT8_MIN;
volatile int32_t t31 = 953476771;
int32_t x136 = INT32_MIN;
static volatile uint32_t x137 = 853167182U;
volatile uint16_t x143 = 746U;
static uint32_t x148 = UINT32_MAX;
volatile int8_t x158 = -1;
volatile int32_t t39 = 380963;
static int8_t x166 = 16;
static int8_t x167 = -6;
volatile int32_t x168 = INT32_MIN;
uint32_t x169 = UINT32_MAX;
int64_t t41 = 3858597273870LL;
static uint16_t x173 = UINT16_MAX;
static volatile int64_t t43 = 357LL;
int16_t x182 = INT16_MIN;
int16_t x184 = 10;
int32_t x198 = 2753338;
volatile int64_t x200 = 1168155937716730401LL;
static int64_t t47 = -25000706150467LL;
static uint32_t x203 = 1U;
int16_t x214 = INT16_MAX;
int8_t x217 = INT8_MIN;
int32_t x218 = -669513223;
uint32_t t51 = 81U;
uint16_t x225 = 154U;
static volatile uint64_t x231 = UINT64_MAX;
uint64_t t54 = 20LLU;
uint16_t x250 = 162U;
int16_t x251 = -1;
int64_t x254 = -96LL;
int32_t x257 = -1;
volatile uint8_t x260 = 82U;
uint64_t x267 = UINT64_MAX;
int64_t x268 = INT64_MIN;
int32_t x270 = INT32_MIN;
int16_t x278 = -1;
volatile int16_t x279 = INT16_MIN;
volatile int64_t x290 = -1LL;
int32_t x298 = -17194;
int16_t x299 = INT16_MIN;
volatile uint32_t x307 = UINT32_MAX;
static int8_t x309 = -39;
int16_t x310 = -1;
static int16_t x311 = -2688;
static uint32_t t71 = 3512U;
volatile uint32_t t73 = 19U;
volatile uint16_t x330 = 2402U;
static uint64_t x334 = UINT64_MAX;
uint32_t x335 = 1071U;
int16_t x336 = 23;
int64_t x339 = INT64_MIN;
volatile int64_t x340 = INT64_MIN;
int32_t x345 = -1432547;
static int16_t x348 = INT16_MIN;
volatile int64_t x357 = INT64_MAX;
volatile int32_t x359 = INT32_MIN;
volatile uint8_t x363 = UINT8_MAX;
uint64_t x375 = 33340207658633420LLU;
uint32_t x376 = 196692U;
int16_t x380 = -1;
uint16_t x382 = UINT16_MAX;
int32_t x400 = 11;
int16_t x409 = -1;
int16_t x416 = 784;
static int32_t x437 = INT32_MAX;
int64_t t98 = 52630246939299622LL;


void f0(void) {
	int16_t x1 = 0;
	uint8_t x2 = 20U;
	static uint64_t x3 = 1017002781LLU;
	uint8_t x4 = 11U;
	uint64_t t0 = 56950223026186975LLU;

	t0 = (((x1&x2)^x3)+x4);

	if (t0 != 1017002792LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 5;
	uint8_t x6 = 7U;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = 1;
	static int32_t t1 = 1531;

	t1 = (((x5&x6)^x7)+x8);

	if (t1 != 251) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint32_t x10 = 36325874U;
	volatile uint32_t x11 = UINT32_MAX;
	static uint64_t x12 = 13067637LLU;
	uint64_t t2 = 111998406816822LLU;

	t2 = (((x9&x10)^x11)+x12);

	if (t2 != 4271709058LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	uint64_t x15 = UINT64_MAX;
	static uint16_t x16 = 22011U;
	static volatile uint64_t t3 = 55048241199539997LLU;

	t3 = (((x13&x14)^x15)+x16);

	if (t3 != 22010LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1896LLU;
	int32_t x18 = 12447220;
	uint16_t x19 = UINT16_MAX;
	static int16_t x20 = INT16_MAX;
	uint64_t t4 = 18625182060226505LLU;

	t4 = (((x17&x18)^x19)+x20);

	if (t4 != 96926LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x21 = 104U;
	volatile uint16_t x22 = 7U;
	static int16_t x23 = INT16_MIN;
	volatile int32_t x24 = -169;
	int32_t t5 = -994644424;

	t5 = (((x21&x22)^x23)+x24);

	if (t5 != -32937) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 26U;
	int16_t x26 = -1;
	int16_t x27 = -632;
	static uint32_t t6 = 2821U;

	t6 = (((x25&x26)^x27)+x28);

	if (t6 != 47625U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 124U;
	static int16_t x31 = INT16_MIN;
	uint16_t x32 = 1848U;
	static uint64_t t7 = 63743546160249LLU;

	t7 = (((x29&x30)^x31)+x32);

	if (t7 != 18446744073709520816LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = UINT32_MAX;
	volatile int32_t x35 = INT32_MIN;
	volatile uint32_t t8 = 3U;

	t8 = (((x33&x34)^x35)+x36);

	if (t8 != 433U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = 197495LL;
	int16_t x39 = -14;
	int32_t x40 = -1;

	t9 = (((x37&x38)^x39)+x40);

	if (t9 != -197500LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -175;
	int64_t x42 = -1LL;
	static volatile int32_t x44 = INT32_MIN;

	t10 = (((x41&x42)^x43)+x44);

	if (t10 != -4294967122LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 3U;
	static uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = -165998560179102LL;

	t11 = (((x45&x46)^x47)+x48);

	if (t11 != -9223372036854710275LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint16_t x50 = 0U;
	int8_t x51 = 0;
	static int16_t x52 = INT16_MIN;
	int32_t t12 = 15257163;

	t12 = (((x49&x50)^x51)+x52);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 5652;
	int64_t x54 = -56094229860668LL;
	static volatile uint8_t x55 = 1U;
	volatile uint16_t x56 = 316U;

	t13 = (((x53&x54)^x55)+x56);

	if (t13 != 1857LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 224887352;
	uint64_t x58 = UINT64_MAX;
	int64_t x59 = INT64_MAX;
	int64_t x60 = 301824338LL;
	volatile uint64_t t14 = 19370729LLU;

	t14 = (((x57&x58)^x59)+x60);

	if (t14 != 9223372036931712793LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int8_t x62 = INT8_MAX;
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = INT16_MIN;

	t15 = (((x61&x62)^x63)+x64);

	if (t15 != 32640LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	volatile uint16_t x66 = 14398U;
	int8_t x68 = -1;
	int32_t t16 = 53552;

	t16 = (((x65&x66)^x67)+x68);

	if (t16 != -32769) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint64_t x70 = 4057233897816LLU;
	static int32_t x71 = INT32_MIN;
	static int32_t x72 = 251;
	volatile uint64_t t17 = 675991715LLU;

	t17 = (((x69&x70)^x71)+x72);

	if (t17 != 18446744071562082899LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 26U;
	int32_t t18 = 908979;

	t18 = (((x73&x74)^x75)+x76);

	if (t18 != -13193700) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MIN;
	static int8_t x80 = INT8_MAX;
	volatile int64_t t19 = 0LL;

	t19 = (((x77&x78)^x79)+x80);

	if (t19 != -60424030695368031LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 74U;
	int16_t x83 = INT16_MIN;

	t20 = (((x81&x82)^x83)+x84);

	if (t20 != 4294934615LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 290229LL;
	static volatile int64_t x86 = INT64_MIN;
	volatile uint8_t x87 = 1U;
	int8_t x88 = INT8_MAX;

	t21 = (((x85&x86)^x87)+x88);

	if (t21 != 128LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 168U;
	uint16_t x90 = 801U;
	uint32_t x91 = 10U;
	static int64_t x92 = INT64_MIN;
	volatile int64_t t22 = 478842528LL;

	t22 = (((x89&x90)^x91)+x92);

	if (t22 != -9223372036854775766LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	uint16_t x94 = 16513U;
	volatile int8_t x95 = -6;
	int64_t x96 = -13680458LL;
	volatile int64_t t23 = -5732906492658LL;

	t23 = (((x93&x94)^x95)+x96);

	if (t23 != -13680464LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 15U;
	volatile int32_t x98 = INT32_MIN;

	t24 = (((x97&x98)^x99)+x100);

	if (t24 != 4294924857U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 34124829U;
	uint64_t x103 = 9304832LLU;
	int8_t x104 = -1;
	uint64_t t25 = 328158LLU;

	t25 = (((x101&x102)^x103)+x104);

	if (t25 != 42290972LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = -1;
	int32_t x108 = -1;
	volatile int64_t t26 = 98181855LL;

	t26 = (((x105&x106)^x107)+x108);

	if (t26 != -65537LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = -1;
	volatile uint16_t x110 = 5U;
	volatile int8_t x112 = 0;
	volatile int32_t t27 = -11;

	t27 = (((x109&x110)^x111)+x112);

	if (t27 != -123) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -1;
	uint64_t x115 = 763LLU;
	static uint8_t x116 = 53U;
	uint64_t t28 = 100570576913954278LLU;

	t28 = (((x113&x114)^x115)+x116);

	if (t28 != 18446744073709551024LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MAX;
	uint16_t x119 = 3U;
	uint32_t x120 = 106327042U;
	uint32_t t29 = 400U;

	t29 = (((x117&x118)^x119)+x120);

	if (t29 != 106327049U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x122 = 16U;
	int32_t x124 = -10845;
	volatile int32_t t30 = 600972989;

	t30 = (((x121&x122)^x123)+x124);

	if (t30 != -10957) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile int16_t x126 = -1;
	int32_t x127 = -1;
	static int16_t x128 = -1;

	t31 = (((x125&x126)^x127)+x128);

	if (t31 != 32766) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	uint8_t x134 = 47U;
	int32_t x135 = -506151600;
	int64_t t32 = -14764090978697LL;

	t32 = (((x133&x134)^x135)+x136);

	if (t32 != -2653635201LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x138 = INT16_MAX;
	int64_t x139 = -1LL;
	static int16_t x140 = INT16_MIN;
	static int64_t t33 = 0LL;

	t33 = (((x137&x138)^x139)+x140);

	if (t33 != -52303LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	int64_t x142 = INT64_MAX;
	int64_t x144 = -1LL;
	int64_t t34 = 0LL;

	t34 = (((x141&x142)^x143)+x144);

	if (t34 != 9223372036854775060LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	uint16_t x146 = 14059U;
	volatile uint32_t x147 = UINT32_MAX;
	uint32_t t35 = 809U;

	t35 = (((x145&x146)^x147)+x148);

	if (t35 != 4294953235U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = -1;
	int8_t x150 = INT8_MIN;
	int8_t x151 = -1;
	uint16_t x152 = UINT16_MAX;
	static volatile int32_t t36 = 1;

	t36 = (((x149&x150)^x151)+x152);

	if (t36 != 65662) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = 1;
	static volatile int16_t x154 = -1;
	static int8_t x155 = INT8_MAX;
	int64_t x156 = -1LL;
	int64_t t37 = 1LL;

	t37 = (((x153&x154)^x155)+x156);

	if (t37 != 125LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = 6327491240326LL;
	volatile int64_t x159 = INT64_MIN;
	static int8_t x160 = -38;
	static int64_t t38 = 5LL;

	t38 = (((x157&x158)^x159)+x160);

	if (t38 != -9223365709363535520LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = 112719970;
	static uint8_t x162 = 1U;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -30;

	t39 = (((x161&x162)^x163)+x164);

	if (t39 != 65505) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x165 = 37781LL;
	int64_t t40 = 1LL;

	t40 = (((x165&x166)^x167)+x168);

	if (t40 != -2147483670LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MAX;
	static int32_t x172 = INT32_MAX;

	t41 = (((x169&x170)^x171)+x172);

	if (t41 != 2147483774LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x174 = INT16_MIN;
	volatile int8_t x175 = INT8_MIN;
	int32_t x176 = 839;
	volatile int32_t t42 = -5173;

	t42 = (((x173&x174)^x175)+x176);

	if (t42 != -32057) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = 3755710;
	static volatile int64_t x178 = INT64_MAX;
	int8_t x179 = INT8_MAX;
	int16_t x180 = -1;

	t43 = (((x177&x178)^x179)+x180);

	if (t43 != 3755712LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x181 = 393U;
	volatile int8_t x183 = -1;
	static int32_t t44 = -4535;

	t44 = (((x181&x182)^x183)+x184);

	if (t44 != 9) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -1264;
	uint8_t x190 = 1U;
	uint8_t x191 = UINT8_MAX;
	volatile int16_t x192 = 2421;
	volatile int32_t t45 = 33209539;

	t45 = (((x189&x190)^x191)+x192);

	if (t45 != 2676) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = -1;
	static int64_t x194 = -66LL;
	int16_t x195 = 345;
	static volatile uint64_t x196 = 430929088059865LLU;
	uint64_t t46 = 322753110LLU;

	t46 = (((x193&x194)^x195)+x196);

	if (t46 != 430929088059584LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = 133465620U;
	int16_t x199 = -1;

	t47 = (((x197&x198)^x199)+x200);

	if (t47 != 1168155942009600016LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x202 = 0U;
	int8_t x204 = INT8_MAX;
	uint32_t t48 = 13704U;

	t48 = (((x201&x202)^x203)+x204);

	if (t48 != 128U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = INT32_MAX;
	static int16_t x206 = -2915;
	uint16_t x207 = UINT16_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t49 = 0;

	t49 = (((x205&x206)^x207)+x208);

	if (t49 != 2147388258) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MIN;
	int16_t x215 = -1;
	uint8_t x216 = 123U;
	int64_t t50 = -1961851010266LL;

	t50 = (((x213&x214)^x215)+x216);

	if (t50 != 122LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x219 = UINT32_MAX;
	uint16_t x220 = 5099U;

	t51 = (((x217&x218)^x219)+x220);

	if (t51 != 669518442U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x221 = INT8_MIN;
	volatile int64_t x222 = -1LL;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile int64_t t52 = 15252584809LL;

	t52 = (((x221&x222)^x223)+x224);

	if (t52 != 6442450815LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = INT32_MIN;
	static volatile int64_t x227 = INT64_MAX;
	static int32_t x228 = INT32_MIN;
	int64_t t53 = -407879LL;

	t53 = (((x225&x226)^x227)+x228);

	if (t53 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = 0;
	volatile int64_t x230 = INT64_MAX;
	uint64_t x232 = 26946LLU;

	t54 = (((x229&x230)^x231)+x232);

	if (t54 != 26945LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	static uint8_t x243 = UINT8_MAX;
	uint16_t x244 = 7U;
	volatile int32_t t55 = -79190;

	t55 = (((x241&x242)^x243)+x244);

	if (t55 != 262) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x245 = -1;
	uint16_t x246 = 36U;
	int8_t x247 = INT8_MIN;
	int64_t x248 = 110142823894195LL;
	volatile int64_t t56 = 6LL;

	t56 = (((x245&x246)^x247)+x248);

	if (t56 != 110142823894103LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x249 = INT8_MIN;
	static int32_t x252 = 9;
	int32_t t57 = -31562;

	t57 = (((x249&x250)^x251)+x252);

	if (t57 != -120) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x255 = INT32_MIN;
	static uint8_t x256 = 6U;
	int64_t t58 = -3680309171578432LL;

	t58 = (((x253&x254)^x255)+x256);

	if (t58 != -2147418202LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x258 = 62U;
	static int16_t x259 = 1190;
	uint32_t t59 = 64318U;

	t59 = (((x257&x258)^x259)+x260);

	if (t59 != 1258U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = 0;
	int8_t x266 = -1;
	uint64_t t60 = 256894693LLU;

	t60 = (((x265&x266)^x267)+x268);

	if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int16_t x271 = -1;
	uint16_t x272 = 0U;
	int32_t t61 = 157;

	t61 = (((x269&x270)^x271)+x272);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x273 = 17310927132LL;
	static int16_t x274 = -1;
	static uint16_t x275 = 13070U;
	uint32_t x276 = 380832U;
	static volatile int64_t t62 = 9033834LL;

	t62 = (((x273&x274)^x275)+x276);

	if (t62 != 17311320498LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x277 = 6847;
	uint64_t x280 = 12624954LLU;
	uint64_t t63 = 3241LLU;

	t63 = (((x277&x278)^x279)+x280);

	if (t63 != 12599033LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = 1;
	static int64_t x282 = INT64_MAX;
	uint64_t x283 = 1761395215605720191LLU;
	int16_t x284 = -6595;
	volatile uint64_t t64 = 31348626LLU;

	t64 = (((x281&x282)^x283)+x284);

	if (t64 != 1761395215605713595LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	static int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -1LL;
	volatile int64_t t65 = 8029LL;

	t65 = (((x285&x286)^x287)+x288);

	if (t65 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x289 = INT64_MIN;
	int8_t x291 = INT8_MAX;
	uint16_t x292 = 1U;
	volatile int64_t t66 = -70671118365402LL;

	t66 = (((x289&x290)^x291)+x292);

	if (t66 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x293 = -5997023129430495LL;
	volatile uint64_t x294 = 86017054LLU;
	static int32_t x295 = -1;
	int16_t x296 = -1;
	uint64_t t67 = 388LLU;

	t67 = (((x293&x294)^x295)+x296);

	if (t67 != 18446744073640344574LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -4792;
	uint16_t x300 = UINT16_MAX;
	int32_t t68 = -399;

	t68 = (((x297&x298)^x299)+x300);

	if (t68 != 76863) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	static int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MAX;
	volatile int64_t t69 = -3LL;

	t69 = (((x301&x302)^x303)+x304);

	if (t69 != 9223372034707357567LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MIN;
	static int32_t x306 = -1;
	volatile uint16_t x308 = UINT16_MAX;
	static volatile uint32_t t70 = 7151U;

	t70 = (((x305&x306)^x307)+x308);

	if (t70 != 65662U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x312 = 32254U;

	t71 = (((x309&x310)^x311)+x312);

	if (t71 != 34903U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x317 = INT16_MAX;
	static uint16_t x318 = 0U;
	int32_t x319 = -1;
	uint32_t x320 = UINT32_MAX;
	uint32_t t72 = 168216U;

	t72 = (((x317&x318)^x319)+x320);

	if (t72 != 4294967294U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = 37U;
	int32_t x326 = 3;
	uint8_t x327 = 62U;
	static volatile uint32_t x328 = 674U;

	t73 = (((x325&x326)^x327)+x328);

	if (t73 != 737U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -1;
	static volatile int16_t x331 = -1;
	static volatile int8_t x332 = 38;
	volatile int32_t t74 = -245783565;

	t74 = (((x329&x330)^x331)+x332);

	if (t74 != -2365) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x333 = -311;
	volatile uint64_t t75 = 210147118482464330LLU;

	t75 = (((x333&x334)^x335)+x336);

	if (t75 != 18446744073709550333LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MIN;
	static volatile int64_t x338 = INT64_MIN;
	static int64_t t76 = INT64_MIN;

	t76 = (((x337&x338)^x339)+x340);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = -2;
	uint64_t x342 = 7015070113LLU;
	static volatile int16_t x343 = -2041;
	int8_t x344 = -1;
	static volatile uint64_t t77 = 42459134LLU;

	t77 = (((x341&x342)^x343)+x344);

	if (t77 != 18446744066694480294LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x346 = 12U;
	static int64_t x347 = 802056LL;
	int64_t t78 = 3LL;

	t78 = (((x345&x346)^x347)+x348);

	if (t78 != 769284LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = -38;
	static uint32_t x351 = UINT32_MAX;
	int8_t x352 = -5;
	uint32_t t79 = 822U;

	t79 = (((x349&x350)^x351)+x352);

	if (t79 != 32762U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MIN;
	static volatile int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MAX;
	int32_t t80 = -121260;

	t80 = (((x353&x354)^x355)+x356);

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x358 = 1;
	uint32_t x360 = UINT32_MAX;
	volatile int64_t t81 = 598499532LL;

	t81 = (((x357&x358)^x359)+x360);

	if (t81 != 2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = -68050358LL;
	uint32_t x362 = UINT32_MAX;
	int16_t x364 = -12677;
	volatile int64_t t82 = -1LL;

	t82 = (((x361&x362)^x363)+x364);

	if (t82 != 4226904368LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MAX;
	uint64_t x367 = 189415LLU;
	int8_t x368 = 1;
	uint64_t t83 = 2587054841760696376LLU;

	t83 = (((x365&x366)^x367)+x368);

	if (t83 != 2147294312LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = INT8_MAX;
	int8_t x370 = -1;
	volatile int8_t x371 = 5;
	static uint32_t x372 = UINT32_MAX;
	volatile uint32_t t84 = 45U;

	t84 = (((x369&x370)^x371)+x372);

	if (t84 != 121U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -1;
	int32_t x374 = INT32_MIN;
	volatile uint64_t t85 = 2LLU;

	t85 = (((x373&x374)^x375)+x376);

	if (t85 != 18413403863978477856LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = INT32_MIN;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = 146LLU;
	uint64_t t86 = 5904341048992LLU;

	t86 = (((x377&x378)^x379)+x380);

	if (t86 != 18446744071562068113LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = INT32_MAX;
	uint8_t x383 = 106U;
	int8_t x384 = INT8_MIN;
	static int32_t t87 = -70583;

	t87 = (((x381&x382)^x383)+x384);

	if (t87 != 65301) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x385 = 27;
	int16_t x386 = -1;
	int32_t x387 = INT32_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t88 = 15032;

	t88 = (((x385&x386)^x387)+x388);

	if (t88 != 2147483492) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x393 = 0U;
	uint64_t x394 = UINT64_MAX;
	volatile int8_t x395 = -1;
	int64_t x396 = -1LL;
	static uint64_t t89 = 7725337408708182LLU;

	t89 = (((x393&x394)^x395)+x396);

	if (t89 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x397 = 1LL;
	static int64_t x398 = -1LL;
	static uint64_t x399 = UINT64_MAX;
	volatile uint64_t t90 = 181042215849138LLU;

	t90 = (((x397&x398)^x399)+x400);

	if (t90 != 9LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x401 = 2928U;
	volatile int8_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = 3;
	volatile int32_t t91 = -102;

	t91 = (((x401&x402)^x403)+x404);

	if (t91 != 2962) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x410 = 6U;
	static volatile uint32_t x411 = 64U;
	uint64_t x412 = 10209608367LLU;
	volatile uint64_t t92 = 19698373435535622LLU;

	t92 = (((x409&x410)^x411)+x412);

	if (t92 != 10209608437LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MIN;
	uint16_t x415 = 5721U;
	static volatile int32_t t93 = 300;

	t93 = (((x413&x414)^x415)+x416);

	if (t93 != -26263) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = INT64_MIN;
	int16_t x418 = -1;
	int32_t x419 = INT32_MIN;
	int16_t x420 = 3340;
	static int64_t t94 = -43783868666LL;

	t94 = (((x417&x418)^x419)+x420);

	if (t94 != 9223372034707295500LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x421 = -1LL;
	int8_t x422 = INT8_MAX;
	volatile int32_t x423 = -1;
	int32_t x424 = -1;
	static int64_t t95 = -136288465636145621LL;

	t95 = (((x421&x422)^x423)+x424);

	if (t95 != -129LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x425 = INT32_MIN;
	volatile int8_t x426 = 25;
	uint64_t x427 = UINT64_MAX;
	volatile int32_t x428 = INT32_MIN;
	uint64_t t96 = 17041413276LLU;

	t96 = (((x425&x426)^x427)+x428);

	if (t96 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x429 = INT8_MIN;
	static int32_t x430 = -1;
	uint32_t x431 = 143699U;
	volatile int16_t x432 = -10;
	uint32_t t97 = 0U;

	t97 = (((x429&x430)^x431)+x432);

	if (t97 != 4294823625U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x438 = 31021U;
	volatile int64_t x439 = INT64_MIN;
	static uint16_t x440 = 32U;

	t98 = (((x437&x438)^x439)+x440);

	if (t98 != -9223372036854744755LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = 6;
	int8_t x442 = 27;
	static int32_t x443 = -216162;
	static int64_t x444 = 953LL;
	int64_t t99 = -17520481684012LL;

	t99 = (((x441&x442)^x443)+x444);

	if (t99 != -215211LL) { NG(); } else { ; }
	
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

