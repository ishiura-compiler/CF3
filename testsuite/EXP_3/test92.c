#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = UINT64_MAX;
static uint64_t t0 = 5825080LLU;
int16_t x7 = INT16_MAX;
volatile uint32_t t1 = 137U;
int32_t t2 = -29;
int8_t x16 = 0;
volatile int32_t t3 = INT32_MIN;
int32_t x23 = 874016850;
uint32_t x33 = 31342U;
uint64_t x34 = 59LLU;
int32_t t10 = -3;
int8_t x53 = -2;
volatile int8_t x54 = -1;
int64_t x56 = -11445585LL;
volatile int64_t t12 = -174LL;
volatile int16_t x58 = INT16_MIN;
int32_t x62 = 855027;
uint32_t t15 = 128395U;
volatile uint32_t x75 = 1U;
int32_t x78 = INT32_MAX;
static uint32_t x83 = 79U;
volatile int16_t x85 = 7595;
volatile int32_t t22 = 203700;
int64_t x112 = INT64_MAX;
static uint32_t x113 = 3U;
int64_t x114 = -1LL;
static int32_t t25 = -113463631;
int64_t x120 = 63664468LL;
int32_t x124 = INT32_MIN;
uint32_t x130 = UINT32_MAX;
volatile uint8_t x139 = 1U;
volatile int32_t t30 = -338422087;
int32_t x143 = INT32_MIN;
int64_t t32 = 75LL;
uint64_t x151 = UINT64_MAX;
int8_t x159 = -1;
uint64_t t35 = 355339396908388LLU;
volatile int64_t t36 = 6398566512LL;
int32_t x171 = INT32_MIN;
static int32_t x177 = -263132146;
static int32_t x181 = INT32_MIN;
volatile uint64_t x187 = 566980497816049LLU;
static int8_t x188 = INT8_MIN;
int8_t x195 = INT8_MIN;
uint64_t x199 = 13128131616LLU;
volatile int64_t x201 = 1293023035382039LL;
uint16_t x203 = 0U;
static volatile int32_t t45 = 1085965;
int16_t x209 = INT16_MIN;
volatile int16_t x210 = -267;
uint8_t x222 = 3U;
static uint32_t x223 = 6140U;
static uint32_t t49 = 516427784U;
static int32_t x225 = INT32_MIN;
int32_t x226 = 0;
int16_t x229 = -6016;
static uint32_t x232 = 9U;
int64_t x237 = 1LL;
volatile int32_t t53 = 17615898;
uint8_t x245 = 1U;
volatile int32_t x250 = INT32_MAX;
uint32_t t55 = 9118670U;
uint8_t x262 = 4U;
static int32_t t58 = -7795611;
int32_t x269 = INT32_MIN;
uint32_t x272 = 482014131U;
volatile uint32_t t60 = 3U;
int8_t x279 = -59;
uint64_t t62 = 161151788505600272LLU;
int16_t x284 = 5020;
volatile uint8_t x296 = 65U;
static volatile int64_t t67 = 26796115719LL;
int64_t x307 = INT64_MAX;
static volatile uint64_t t68 = 816162775470LLU;
uint8_t x315 = 1U;
static int64_t x317 = INT64_MIN;
int64_t x334 = INT64_MAX;
int64_t t74 = -94275712LL;
int64_t x341 = INT64_MAX;
int64_t x343 = -1748599269378524LL;
volatile uint64_t t76 = 6150299968465523LLU;
static uint16_t x351 = 1U;
uint32_t x354 = UINT32_MAX;
static int32_t x355 = INT32_MIN;
uint64_t x356 = 100884286273852LLU;
int16_t x360 = 26;
volatile uint64_t x367 = 113249023618405LLU;
volatile uint64_t t81 = 56LLU;
uint64_t x376 = 2073190LLU;
volatile uint16_t x379 = 12U;
int32_t x380 = INT32_MIN;
uint8_t x381 = 61U;
static volatile uint16_t x383 = 5U;
int64_t x390 = -1LL;
int64_t x393 = INT64_MAX;
static uint8_t x396 = 20U;
int32_t t88 = -2377;
int64_t x403 = INT64_MIN;
int64_t t89 = 118918LL;
uint32_t x406 = UINT32_MAX;
int32_t x408 = -937573;
volatile int64_t t90 = 58262LL;
uint16_t x410 = 131U;
int16_t x425 = -21;
int64_t x426 = -1LL;
static volatile uint32_t x430 = 3U;
static int32_t x433 = -13;
volatile int32_t t95 = 199438;
int16_t x439 = INT16_MAX;
int32_t x447 = INT32_MAX;


void f0(void) {
	int16_t x1 = -1184;
	static int32_t x2 = 7837542;
	int8_t x4 = INT8_MAX;

	t0 = ((x1==x2)+(x3+x4));

	if (t0 != 126LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	static int8_t x6 = INT8_MIN;
	volatile uint32_t x8 = 21U;

	t1 = ((x5==x6)+(x7+x8));

	if (t1 != 32788U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MAX;
	volatile uint16_t x10 = UINT16_MAX;
	static int8_t x11 = 2;
	int8_t x12 = 59;

	t2 = ((x9==x10)+(x11+x12));

	if (t2 != 61) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -3;
	uint64_t x14 = UINT64_MAX;
	static int32_t x15 = INT32_MIN;

	t3 = ((x13==x14)+(x15+x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -9;
	uint16_t x18 = 60U;
	int32_t x19 = 76512229;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -1293;

	t4 = ((x17==x18)+(x19+x20));

	if (t4 != 76577764) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 0U;
	int8_t x22 = 3;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -7234;

	t5 = ((x21==x22)+(x23+x24));

	if (t5 != 873984082) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	int64_t x26 = -270326991LL;
	volatile int64_t x27 = INT64_MIN;
	volatile uint16_t x28 = UINT16_MAX;
	static volatile int64_t t6 = -19837499576LL;

	t6 = ((x25==x26)+(x27+x28));

	if (t6 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x35 = -1645LL;
	volatile int16_t x36 = 0;
	static int64_t t7 = 242299935718LL;

	t7 = ((x33==x34)+(x35+x36));

	if (t7 != -1645LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	static int32_t x38 = INT32_MIN;
	uint8_t x39 = 1U;
	int64_t x40 = INT64_MIN;
	volatile int64_t t8 = -117701211122LL;

	t8 = ((x37==x38)+(x39+x40));

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 2U;
	uint64_t x42 = 108661279LLU;
	volatile int16_t x43 = INT16_MIN;
	int32_t x44 = 5;
	volatile int32_t t9 = 0;

	t9 = ((x41==x42)+(x43+x44));

	if (t9 != -32763) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 17315U;
	int32_t x46 = INT32_MIN;
	static int32_t x47 = INT32_MIN;
	static int32_t x48 = 457966;

	t10 = ((x45==x46)+(x47+x48));

	if (t10 != -2147025682) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	static uint8_t x50 = 19U;
	uint16_t x51 = 7274U;
	uint8_t x52 = 15U;
	volatile int32_t t11 = 17;

	t11 = ((x49==x50)+(x51+x52));

	if (t11 != 7289) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x55 = -21;

	t12 = ((x53==x54)+(x55+x56));

	if (t12 != -11445606LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = 0;
	uint16_t x59 = 24491U;
	int16_t x60 = -1;
	static volatile int32_t t13 = 923450;

	t13 = ((x57==x58)+(x59+x60));

	if (t13 != 24490) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x61 = -1;
	int8_t x63 = -1;
	uint16_t x64 = 116U;
	int32_t t14 = 62690803;

	t14 = ((x61==x62)+(x63+x64));

	if (t14 != 115) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 0U;
	uint32_t x66 = UINT32_MAX;
	uint32_t x67 = 2783U;
	volatile int8_t x68 = INT8_MAX;

	t15 = ((x65==x66)+(x67+x68));

	if (t15 != 2910U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	static int8_t x70 = INT8_MIN;
	volatile int64_t x71 = -1LL;
	int16_t x72 = 0;
	volatile int64_t t16 = -60780926987266550LL;

	t16 = ((x69==x70)+(x71+x72));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = 3;
	uint8_t x74 = 20U;
	uint64_t x76 = 2559LLU;
	static uint64_t t17 = 11807208426616300LLU;

	t17 = ((x73==x74)+(x75+x76));

	if (t17 != 2560LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = UINT8_MAX;
	static int8_t x79 = INT8_MIN;
	uint16_t x80 = 2U;
	static volatile int32_t t18 = 1007;

	t18 = ((x77==x78)+(x79+x80));

	if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = UINT8_MAX;
	uint32_t x82 = 226024U;
	static uint32_t x84 = 558U;
	uint32_t t19 = 5850U;

	t19 = ((x81==x82)+(x83+x84));

	if (t19 != 637U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x86 = 33LL;
	uint8_t x87 = 80U;
	uint16_t x88 = 12087U;
	int32_t t20 = 214576410;

	t20 = ((x85==x86)+(x87+x88));

	if (t20 != 12167) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MAX;
	static uint64_t x94 = 460157916LLU;
	uint64_t x95 = 119LLU;
	uint16_t x96 = 7706U;
	volatile uint64_t t21 = 7LLU;

	t21 = ((x93==x94)+(x95+x96));

	if (t21 != 7825LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 1U;
	volatile uint8_t x98 = 15U;
	int8_t x99 = 25;
	int16_t x100 = -6715;

	t22 = ((x97==x98)+(x99+x100));

	if (t22 != -6690) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = INT32_MIN;
	int8_t x107 = INT8_MAX;
	uint8_t x108 = 2U;
	static int32_t t23 = 0;

	t23 = ((x105==x106)+(x107+x108));

	if (t23 != 129) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = 6214581434496377LL;
	uint64_t x110 = 4468507716035339LLU;
	volatile uint64_t x111 = 58231269LLU;
	uint64_t t24 = 190LLU;

	t24 = ((x109==x110)+(x111+x112));

	if (t24 != 9223372036913007076LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x115 = INT8_MIN;
	uint16_t x116 = 4U;

	t25 = ((x113==x114)+(x115+x116));

	if (t25 != -124) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = -12;
	int16_t x119 = -1117;
	volatile int64_t t26 = -571848604231896261LL;

	t26 = ((x117==x118)+(x119+x120));

	if (t26 != 63663351LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x121 = 0U;
	uint8_t x122 = 13U;
	volatile uint16_t x123 = 4U;
	volatile int32_t t27 = -18198693;

	t27 = ((x121==x122)+(x123+x124));

	if (t27 != -2147483644) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 18U;
	uint16_t x126 = 3U;
	uint8_t x127 = 67U;
	int32_t x128 = -1742;
	int32_t t28 = 104;

	t28 = ((x125==x126)+(x127+x128));

	if (t28 != -1675) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = INT8_MIN;
	int64_t x131 = 211078348976612LL;
	uint32_t x132 = 1U;
	volatile int64_t t29 = -2090204205149LL;

	t29 = ((x129==x130)+(x131+x132));

	if (t29 != 211078348976613LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MIN;
	static uint8_t x138 = 7U;
	int16_t x140 = 789;

	t30 = ((x137==x138)+(x139+x140));

	if (t30 != 790) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x141 = -730146222;
	static int16_t x142 = INT16_MAX;
	uint64_t x144 = 27469505258763099LLU;
	uint64_t t31 = 2489LLU;

	t31 = ((x141==x142)+(x143+x144));

	if (t31 != 27469503111279451LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = INT64_MIN;
	static volatile int64_t x148 = 139059558466215526LL;

	t32 = ((x145==x146)+(x147+x148));

	if (t32 != -9084312478388560282LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = 24;
	int64_t x152 = -1LL;
	volatile uint64_t t33 = 25278344924LLU;

	t33 = ((x149==x150)+(x151+x152));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = -1LL;
	int16_t x158 = INT16_MAX;
	uint32_t x160 = 65U;
	uint32_t t34 = 18U;

	t34 = ((x157==x158)+(x159+x160));

	if (t34 != 64U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x161 = 43U;
	int64_t x162 = -489030LL;
	uint64_t x163 = 1LLU;
	uint32_t x164 = 51261308U;

	t35 = ((x161==x162)+(x163+x164));

	if (t35 != 51261309LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x165 = 1781343U;
	static int64_t x166 = -1LL;
	int64_t x167 = -1796458405LL;
	uint8_t x168 = 1U;

	t36 = ((x165==x166)+(x167+x168));

	if (t36 != -1796458404LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x169 = 5001607LL;
	volatile int32_t x170 = 5469079;
	uint16_t x172 = 2U;
	static int32_t t37 = 146979154;

	t37 = ((x169==x170)+(x171+x172));

	if (t37 != -2147483646) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x178 = UINT8_MAX;
	static int8_t x179 = INT8_MAX;
	int16_t x180 = -1;
	static volatile int32_t t38 = -25;

	t38 = ((x177==x178)+(x179+x180));

	if (t38 != 126) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	int32_t x184 = 227844;
	int32_t t39 = -980206;

	t39 = ((x181==x182)+(x183+x184));

	if (t39 != 227716) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x185 = INT16_MIN;
	int8_t x186 = INT8_MAX;
	uint64_t t40 = 96LLU;

	t40 = ((x185==x186)+(x187+x188));

	if (t40 != 566980497815921LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = INT16_MIN;
	volatile int8_t x190 = INT8_MIN;
	static int64_t x191 = 140705644367131LL;
	int32_t x192 = INT32_MAX;
	int64_t t41 = -191211LL;

	t41 = ((x189==x190)+(x191+x192));

	if (t41 != 140707791850778LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = UINT16_MAX;
	int16_t x194 = INT16_MIN;
	int16_t x196 = INT16_MIN;
	volatile int32_t t42 = 1297525;

	t42 = ((x193==x194)+(x195+x196));

	if (t42 != -32896) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = 19LL;
	static uint32_t x198 = 2787U;
	uint8_t x200 = 81U;
	uint64_t t43 = 4845900387LLU;

	t43 = ((x197==x198)+(x199+x200));

	if (t43 != 13128131697LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x202 = INT64_MAX;
	volatile uint16_t x204 = 15U;
	static volatile int32_t t44 = -66913;

	t44 = ((x201==x202)+(x203+x204));

	if (t44 != 15) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x205 = UINT32_MAX;
	uint32_t x206 = 26U;
	static uint16_t x207 = UINT16_MAX;
	int32_t x208 = -1;

	t45 = ((x205==x206)+(x207+x208));

	if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x211 = -1;
	uint16_t x212 = 2U;
	volatile int32_t t46 = 403479850;

	t46 = ((x209==x210)+(x211+x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -1;
	static int32_t x214 = -25;
	uint16_t x215 = 3U;
	static uint8_t x216 = 27U;
	int32_t t47 = -1500;

	t47 = ((x213==x214)+(x215+x216));

	if (t47 != 30) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MAX;
	int8_t x218 = 10;
	uint8_t x219 = 49U;
	int64_t x220 = -1LL;
	volatile int64_t t48 = -1089442LL;

	t48 = ((x217==x218)+(x219+x220));

	if (t48 != 48LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x221 = 962428848854229243LLU;
	int8_t x224 = 0;

	t49 = ((x221==x222)+(x223+x224));

	if (t49 != 6140U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x227 = 1957450362U;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t50 = -201722958596349499LL;

	t50 = ((x225==x226)+(x227+x228));

	if (t50 != -9223372034897325446LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x230 = INT8_MIN;
	uint16_t x231 = 1870U;
	volatile uint32_t t51 = 2276U;

	t51 = ((x229==x230)+(x231+x232));

	if (t51 != 1879U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = INT32_MIN;
	int8_t x234 = -1;
	static int16_t x235 = -1;
	int8_t x236 = -5;
	int32_t t52 = 370;

	t52 = ((x233==x234)+(x235+x236));

	if (t52 != -6) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x238 = 0U;
	static int16_t x239 = INT16_MAX;
	int32_t x240 = -3;

	t53 = ((x237==x238)+(x239+x240));

	if (t53 != 32764) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x246 = INT16_MIN;
	int16_t x247 = -7;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t54 = 13885098362LLU;

	t54 = ((x245==x246)+(x247+x248));

	if (t54 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	int16_t x252 = 34;

	t55 = ((x249==x250)+(x251+x252));

	if (t55 != 33U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MAX;
	volatile uint32_t x255 = UINT32_MAX;
	volatile uint32_t x256 = 23U;
	uint32_t t56 = 680679U;

	t56 = ((x253==x254)+(x255+x256));

	if (t56 != 22U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x257 = -1LL;
	int16_t x258 = INT16_MAX;
	int8_t x259 = -1;
	volatile int8_t x260 = INT8_MIN;
	volatile int32_t t57 = 0;

	t57 = ((x257==x258)+(x259+x260));

	if (t57 != -129) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = 6LL;
	volatile uint8_t x263 = 7U;
	int8_t x264 = 13;

	t58 = ((x261==x262)+(x263+x264));

	if (t58 != 20) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = 1U;
	int32_t x266 = 9822086;
	volatile int16_t x267 = INT16_MIN;
	uint16_t x268 = 12U;
	int32_t t59 = 13;

	t59 = ((x265==x266)+(x267+x268));

	if (t59 != -32756) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x270 = -57;
	uint32_t x271 = 66734874U;

	t60 = ((x269==x270)+(x271+x272));

	if (t60 != 548749005U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = 7U;
	static uint64_t x274 = 81022161045392071LLU;
	volatile uint32_t x275 = UINT32_MAX;
	volatile int16_t x276 = INT16_MIN;
	uint32_t t61 = 16U;

	t61 = ((x273==x274)+(x275+x276));

	if (t61 != 4294934527U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MAX;
	static uint64_t x278 = 23017400263LLU;
	uint64_t x280 = UINT64_MAX;

	t62 = ((x277==x278)+(x279+x280));

	if (t62 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = -1;
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 14808548350098LLU;
	volatile uint64_t t63 = 2065593787966973LLU;

	t63 = ((x281==x282)+(x283+x284));

	if (t63 != 14808548355118LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	uint64_t x288 = 876247446630859LLU;
	volatile uint64_t t64 = 866062LLU;

	t64 = ((x285==x286)+(x287+x288));

	if (t64 != 876247446598091LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x289 = -1;
	int64_t x290 = INT64_MIN;
	static int8_t x291 = 1;
	static int64_t x292 = 5819242843LL;
	static int64_t t65 = -3LL;

	t65 = ((x289==x290)+(x291+x292));

	if (t65 != 5819242844LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = UINT64_MAX;
	int16_t x294 = -1;
	volatile int16_t x295 = INT16_MIN;
	static int32_t t66 = 1;

	t66 = ((x293==x294)+(x295+x296));

	if (t66 != -32702) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x301 = UINT32_MAX;
	uint32_t x302 = UINT32_MAX;
	int64_t x303 = -1LL;
	int64_t x304 = -1LL;

	t67 = ((x301==x302)+(x303+x304));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x306 = 0;
	volatile uint64_t x308 = 1796962802059LLU;

	t68 = ((x305==x306)+(x307+x308));

	if (t68 != 9223373833817577866LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x313 = INT32_MAX;
	uint8_t x314 = 20U;
	volatile uint64_t x316 = 5055571223LLU;
	uint64_t t69 = 1683352814321946LLU;

	t69 = ((x313==x314)+(x315+x316));

	if (t69 != 5055571224LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x318 = INT64_MIN;
	uint16_t x319 = 1U;
	int8_t x320 = INT8_MIN;
	volatile int32_t t70 = 520783;

	t70 = ((x317==x318)+(x319+x320));

	if (t70 != -126) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x321 = -1;
	int8_t x322 = INT8_MIN;
	int16_t x323 = -16;
	int32_t x324 = 657;
	volatile int32_t t71 = -443;

	t71 = ((x321==x322)+(x323+x324));

	if (t71 != 641) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = -14032;
	uint8_t x326 = 3U;
	volatile uint16_t x327 = 178U;
	uint16_t x328 = UINT16_MAX;
	int32_t t72 = 38079;

	t72 = ((x325==x326)+(x327+x328));

	if (t72 != 65713) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = INT64_MAX;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = -1;
	static volatile uint64_t t73 = 22LLU;

	t73 = ((x329==x330)+(x331+x332));

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x333 = 15;
	int64_t x335 = -1509994832210561199LL;
	int8_t x336 = INT8_MIN;

	t74 = ((x333==x334)+(x335+x336));

	if (t74 != -1509994832210561327LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x342 = UINT32_MAX;
	int8_t x344 = -1;
	int64_t t75 = 2025988294442881647LL;

	t75 = ((x341==x342)+(x343+x344));

	if (t75 != -1748599269378525LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = INT64_MAX;
	int32_t x346 = -1;
	uint64_t x347 = 32444917LLU;
	int8_t x348 = -1;

	t76 = ((x345==x346)+(x347+x348));

	if (t76 != 32444916LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = INT8_MIN;
	static int8_t x350 = 1;
	int64_t x352 = -1LL;
	volatile int64_t t77 = 389989321582213647LL;

	t77 = ((x349==x350)+(x351+x352));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x353 = -18073102261LL;
	uint64_t t78 = 34303856265821450LLU;

	t78 = ((x353==x354)+(x355+x356));

	if (t78 != 100882138790204LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x357 = 1555196922514411866LLU;
	int8_t x358 = 1;
	static int16_t x359 = 595;
	static volatile int32_t t79 = -204;

	t79 = ((x357==x358)+(x359+x360));

	if (t79 != 621) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x361 = 0LL;
	uint32_t x362 = 0U;
	uint8_t x363 = UINT8_MAX;
	volatile int64_t x364 = INT64_MIN;
	int64_t t80 = -82251871930195LL;

	t80 = ((x361==x362)+(x363+x364));

	if (t80 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = -1LL;
	volatile uint8_t x366 = 108U;
	uint64_t x368 = UINT64_MAX;

	t81 = ((x365==x366)+(x367+x368));

	if (t81 != 113249023618404LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x373 = INT64_MIN;
	uint64_t x374 = 43LLU;
	static int64_t x375 = INT64_MAX;
	static uint64_t t82 = 516LLU;

	t82 = ((x373==x374)+(x375+x376));

	if (t82 != 9223372036856848997LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = 360299;
	uint8_t x378 = 106U;
	int32_t t83 = 16076260;

	t83 = ((x377==x378)+(x379+x380));

	if (t83 != -2147483636) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x382 = 1U;
	int64_t x384 = INT64_MIN;
	volatile int64_t t84 = -36310669LL;

	t84 = ((x381==x382)+(x383+x384));

	if (t84 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x385 = 1295U;
	int8_t x386 = INT8_MAX;
	volatile uint8_t x387 = 51U;
	volatile int64_t x388 = 8663LL;
	static int64_t t85 = 0LL;

	t85 = ((x385==x386)+(x387+x388));

	if (t85 != 8714LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x389 = -1LL;
	static int8_t x391 = -4;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t86 = 0;

	t86 = ((x389==x390)+(x391+x392));

	if (t86 != -131) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x394 = 13462U;
	uint8_t x395 = UINT8_MAX;
	volatile int32_t t87 = -6;

	t87 = ((x393==x394)+(x395+x396));

	if (t87 != 275) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x397 = INT16_MIN;
	static int8_t x398 = INT8_MIN;
	int16_t x399 = 1;
	int8_t x400 = 0;

	t88 = ((x397==x398)+(x399+x400));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x401 = -1;
	static volatile int8_t x402 = 22;
	volatile int64_t x404 = INT64_MAX;

	t89 = ((x401==x402)+(x403+x404));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = INT16_MIN;
	static volatile int64_t x407 = 135537LL;

	t90 = ((x405==x406)+(x407+x408));

	if (t90 != -802036LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x409 = INT16_MIN;
	static volatile uint64_t x411 = UINT64_MAX;
	uint16_t x412 = UINT16_MAX;
	volatile uint64_t t91 = 4410909327016218LLU;

	t91 = ((x409==x410)+(x411+x412));

	if (t91 != 65534LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = INT64_MAX;
	int16_t x418 = 142;
	int8_t x419 = INT8_MIN;
	uint64_t x420 = 12892405811566935LLU;
	static uint64_t t92 = 305438LLU;

	t92 = ((x417==x418)+(x419+x420));

	if (t92 != 12892405811566807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x427 = INT8_MAX;
	int16_t x428 = INT16_MAX;
	static volatile int32_t t93 = 7770743;

	t93 = ((x425==x426)+(x427+x428));

	if (t93 != 32894) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = INT16_MIN;
	uint64_t x431 = 110535191470998382LLU;
	uint64_t x432 = 284753232573843020LLU;
	uint64_t t94 = 7252320516319193LLU;

	t94 = ((x429==x430)+(x431+x432));

	if (t94 != 395288424044841402LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x434 = 26U;
	uint8_t x435 = 5U;
	int32_t x436 = -5;

	t95 = ((x433==x434)+(x435+x436));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x437 = 201632U;
	int64_t x438 = 168LL;
	int8_t x440 = 11;
	int32_t t96 = 1;

	t96 = ((x437==x438)+(x439+x440));

	if (t96 != 32778) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x441 = 14682570U;
	static uint64_t x442 = 2674880015406681880LLU;
	int32_t x443 = -26;
	volatile int8_t x444 = INT8_MAX;
	volatile int32_t t97 = -532128604;

	t97 = ((x441==x442)+(x443+x444));

	if (t97 != 101) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x445 = UINT32_MAX;
	volatile int64_t x446 = INT64_MIN;
	int8_t x448 = 0;
	static volatile int32_t t98 = INT32_MAX;

	t98 = ((x445==x446)+(x447+x448));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x449 = -1;
	uint16_t x450 = 31U;
	volatile uint64_t x451 = UINT64_MAX;
	volatile int8_t x452 = INT8_MIN;
	uint64_t t99 = 1299996695414436LLU;

	t99 = ((x449==x450)+(x451+x452));

	if (t99 != 18446744073709551487LLU) { NG(); } else { ; }
	
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

