#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x16 = UINT16_MAX;
volatile int32_t t1 = 1225014;
static int64_t x22 = INT64_MAX;
int8_t x24 = INT8_MAX;
uint64_t x25 = UINT64_MAX;
volatile int16_t x26 = -113;
int32_t t6 = INT32_MIN;
int32_t x42 = INT32_MIN;
int32_t x57 = -1052073642;
static volatile int32_t x58 = INT32_MIN;
volatile int8_t x62 = INT8_MAX;
uint64_t x74 = 132799305695061LLU;
uint32_t x83 = 6271U;
int16_t x95 = INT16_MAX;
uint32_t t19 = 4470U;
uint16_t x99 = 29132U;
uint8_t x108 = 0U;
volatile int32_t x110 = 4;
uint64_t x112 = UINT64_MAX;
volatile int16_t x113 = 699;
uint32_t x116 = UINT32_MAX;
volatile int8_t x120 = INT8_MAX;
uint32_t x132 = 31984906U;
volatile uint8_t x135 = 1U;
int16_t x136 = 497;
int32_t t29 = 15948294;
int64_t x142 = INT64_MIN;
volatile int32_t x143 = INT32_MIN;
volatile int16_t x150 = INT16_MAX;
int64_t x174 = INT64_MIN;
int32_t x178 = -1;
uint64_t x181 = UINT64_MAX;
static int16_t x184 = -1;
uint8_t x187 = 8U;
volatile int32_t t39 = -2;
uint8_t x193 = 53U;
volatile uint16_t x197 = 3577U;
int8_t x199 = -1;
volatile int32_t t43 = 1572;
int32_t x206 = -1;
int64_t x207 = 3133699LL;
volatile int64_t t44 = -55LL;
uint64_t x230 = 46LLU;
int16_t x244 = -1;
int32_t t51 = 0;
int32_t x245 = 69;
uint32_t x249 = 2822499U;
int16_t x259 = INT16_MAX;
volatile int64_t x262 = INT64_MAX;
int32_t t56 = 223695838;
int8_t x268 = INT8_MAX;
volatile int8_t x274 = INT8_MAX;
uint16_t x316 = 1920U;
volatile int32_t t65 = 5258;
static uint16_t x324 = 7U;
int32_t x326 = INT32_MIN;
volatile int8_t x328 = INT8_MAX;
static uint32_t x329 = 65711666U;
int64_t t72 = INT64_MIN;
volatile uint64_t x349 = 1793827297354832LLU;
static uint32_t x353 = 3045U;
int16_t x356 = INT16_MIN;
static int32_t t74 = 1664271;
volatile int32_t x358 = -18314;
int32_t x361 = INT32_MIN;
int64_t x367 = -1933476542LL;
volatile uint32_t t79 = 72973U;
volatile uint16_t x377 = 3677U;
int32_t x378 = -9089076;
static uint16_t x390 = 3057U;
uint8_t x412 = 12U;
int64_t x413 = INT64_MIN;
static int64_t t88 = -234672442LL;
uint64_t x418 = UINT64_MAX;
volatile uint64_t t90 = 1033177665426631724LLU;
int64_t x433 = INT64_MIN;
uint16_t x444 = 6U;
volatile uint32_t x446 = 533699934U;
static int8_t x447 = INT8_MIN;
int32_t t96 = 20483424;
int8_t x451 = -1;
int8_t x456 = INT8_MIN;
uint32_t x457 = UINT32_MAX;


void f0(void) {
	int32_t x5 = -1;
	int8_t x6 = 59;
	static uint32_t x7 = 1039215246U;
	int32_t x8 = -1;
	volatile uint32_t t0 = 497899U;

	t0 = ((x5<x6)^(x7-x8));

	if (t0 != 1039215246U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = INT32_MAX;
	volatile int64_t x14 = -1LL;
	uint16_t x15 = 72U;

	t1 = ((x13<x14)^(x15-x16));

	if (t1 != -65463) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 208;
	uint64_t x18 = 10177701895418LLU;
	volatile uint64_t x19 = UINT64_MAX;
	uint16_t x20 = 412U;
	uint64_t t2 = 968335369605LLU;

	t2 = ((x17<x18)^(x19-x20));

	if (t2 != 18446744073709551202LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MAX;
	int16_t x23 = -1;
	static int32_t t3 = 6630;

	t3 = ((x21<x22)^(x23-x24));

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x27 = 545LL;
	uint32_t x28 = UINT32_MAX;
	volatile int64_t t4 = -2739327261LL;

	t4 = ((x25<x26)^(x27-x28));

	if (t4 != -4294966750LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -1246;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t5 = -685532LL;

	t5 = ((x29<x30)^(x31-x32));

	if (t5 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MAX;
	volatile int8_t x34 = 6;
	volatile int8_t x35 = -1;
	int32_t x36 = INT32_MAX;

	t6 = ((x33<x34)^(x35-x36));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -1610729387633553LL;
	volatile int64_t x38 = INT64_MIN;
	int64_t x39 = 11130205166269LL;
	int16_t x40 = -1;
	int64_t t7 = 251996575025LL;

	t7 = ((x37<x38)^(x39-x40));

	if (t7 != 11130205166270LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 8U;
	uint16_t x43 = UINT16_MAX;
	int16_t x44 = INT16_MAX;
	volatile int32_t t8 = 1806450;

	t8 = ((x41<x42)^(x43-x44));

	if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MAX;
	int8_t x50 = INT8_MAX;
	int16_t x51 = INT16_MAX;
	int32_t x52 = -1;
	int32_t t9 = 23657;

	t9 = ((x49<x50)^(x51-x52));

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 22283452U;
	uint16_t x54 = 9U;
	int16_t x55 = -1;
	int8_t x56 = 1;
	int32_t t10 = -1768705;

	t10 = ((x53<x54)^(x55-x56));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x59 = -5662106422LL;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t11 = 493407232173LL;

	t11 = ((x57<x58)^(x59-x60));

	if (t11 != 9223372031192669386LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MIN;
	int8_t x63 = 23;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t12 = 121LLU;

	t12 = ((x61<x62)^(x63-x64));

	if (t12 != 25LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = -1;
	int16_t x70 = INT16_MIN;
	static int64_t x71 = -3918063269242068LL;
	uint64_t x72 = UINT64_MAX;
	uint64_t t13 = 6758752143LLU;

	t13 = ((x69<x70)^(x71-x72));

	if (t13 != 18442826010440309549LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x75 = 1;
	uint8_t x76 = 1U;
	volatile int32_t t14 = 1820270;

	t14 = ((x73<x74)^(x75-x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -20507;
	uint32_t x78 = 9U;
	volatile int64_t x79 = -9661077LL;
	volatile uint64_t x80 = 57302834LLU;
	uint64_t t15 = 48175272LLU;

	t15 = ((x77<x78)^(x79-x80));

	if (t15 != 18446744073642587705LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -6989LL;
	uint32_t x82 = UINT32_MAX;
	int32_t x84 = INT32_MAX;
	volatile uint32_t t16 = 16968U;

	t16 = ((x81<x82)^(x83-x84));

	if (t16 != 2147489921U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x85 = UINT8_MAX;
	uint16_t x86 = 22U;
	uint8_t x87 = 0U;
	int8_t x88 = INT8_MAX;
	static int32_t t17 = -1879545;

	t17 = ((x85<x86)^(x87-x88));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x89 = -1;
	uint32_t x90 = 12U;
	volatile int64_t x91 = -1LL;
	uint8_t x92 = UINT8_MAX;
	int64_t t18 = 4339044288596409LL;

	t18 = ((x89<x90)^(x91-x92));

	if (t18 != -256LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MAX;
	static uint32_t x96 = 499U;

	t19 = ((x93<x94)^(x95-x96));

	if (t19 != 32269U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = 1;
	static int32_t x98 = INT32_MIN;
	static int64_t x100 = -3LL;
	static int64_t t20 = -1100216508467721LL;

	t20 = ((x97<x98)^(x99-x100));

	if (t20 != 29135LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = -5;
	uint8_t x102 = UINT8_MAX;
	static int8_t x103 = INT8_MIN;
	static uint64_t x104 = UINT64_MAX;
	static uint64_t t21 = 92517999746067LLU;

	t21 = ((x101<x102)^(x103-x104));

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x105 = -1;
	int64_t x106 = -862821147312484LL;
	static int16_t x107 = -260;
	int32_t t22 = 13;

	t22 = ((x105<x106)^(x107-x108));

	if (t22 != -260) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = -5135;
	uint64_t x111 = 29977946657809LLU;
	uint64_t t23 = 515198408706811079LLU;

	t23 = ((x109<x110)^(x111-x112));

	if (t23 != 29977946657811LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x114 = -28;
	static uint32_t x115 = UINT32_MAX;
	volatile uint32_t t24 = 251973648U;

	t24 = ((x113<x114)^(x115-x116));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MAX;
	volatile int16_t x118 = INT16_MIN;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t t25 = 23487;

	t25 = ((x117<x118)^(x119-x120));

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 0U;
	volatile uint8_t x122 = UINT8_MAX;
	int64_t x123 = 229607LL;
	uint16_t x124 = 1982U;
	static volatile int64_t t26 = 2233270338251LL;

	t26 = ((x121<x122)^(x123-x124));

	if (t26 != 227624LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	int16_t x127 = -14060;
	uint16_t x128 = 28U;
	static int32_t t27 = -388113901;

	t27 = ((x125<x126)^(x127-x128));

	if (t27 != -14088) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	int64_t x130 = -1LL;
	int8_t x131 = INT8_MIN;
	uint32_t t28 = 475U;

	t28 = ((x129<x130)^(x131-x132));

	if (t28 != 4262982263U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	uint32_t x134 = UINT32_MAX;

	t29 = ((x133<x134)^(x135-x136));

	if (t29 != -495) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x137 = UINT16_MAX;
	uint8_t x138 = UINT8_MAX;
	volatile uint16_t x139 = 56U;
	static int64_t x140 = INT64_MAX;
	int64_t t30 = -57334LL;

	t30 = ((x137<x138)^(x139-x140));

	if (t30 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = 1;
	int64_t x144 = -1LL;
	volatile int64_t t31 = -206187475656LL;

	t31 = ((x141<x142)^(x143-x144));

	if (t31 != -2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = 4;
	static uint16_t x147 = 3898U;
	int32_t x148 = -72262286;
	volatile int32_t t32 = -398;

	t32 = ((x145<x146)^(x147-x148));

	if (t32 != 72266185) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 86786365LLU;
	int8_t x151 = -1;
	int32_t x152 = INT32_MAX;
	int32_t t33 = INT32_MIN;

	t33 = ((x149<x150)^(x151-x152));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x153 = 243242720U;
	int8_t x154 = INT8_MIN;
	volatile uint16_t x155 = UINT16_MAX;
	volatile uint8_t x156 = 3U;
	volatile int32_t t34 = -126271594;

	t34 = ((x153<x154)^(x155-x156));

	if (t34 != 65533) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MIN;
	volatile int32_t x162 = INT32_MAX;
	int8_t x163 = INT8_MAX;
	int64_t x164 = -1LL;
	static int64_t t35 = -2952690812971893LL;

	t35 = ((x161<x162)^(x163-x164));

	if (t35 != 129LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = 0;
	int8_t x175 = 2;
	volatile int8_t x176 = -13;
	int32_t t36 = 895;

	t36 = ((x173<x174)^(x175-x176));

	if (t36 != 15) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = 2203LLU;
	uint16_t x179 = 2U;
	uint8_t x180 = 0U;
	volatile int32_t t37 = 1;

	t37 = ((x177<x178)^(x179-x180));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x182 = 5700016LLU;
	static int32_t x183 = INT32_MIN;
	static int32_t t38 = 11263276;

	t38 = ((x181<x182)^(x183-x184));

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	int16_t x188 = -1;

	t39 = ((x185<x186)^(x187-x188));

	if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	int32_t x191 = -1;
	static volatile uint8_t x192 = UINT8_MAX;
	volatile int32_t t40 = 14529;

	t40 = ((x189<x190)^(x191-x192));

	if (t40 != -256) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = INT16_MIN;
	uint64_t x195 = 1505772598351LLU;
	static uint16_t x196 = 163U;
	volatile uint64_t t41 = 2044070641450161LLU;

	t41 = ((x193<x194)^(x195-x196));

	if (t41 != 1505772598188LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x198 = INT64_MAX;
	int32_t x200 = 12374210;
	volatile int32_t t42 = -53;

	t42 = ((x197<x198)^(x199-x200));

	if (t42 != -12374212) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MAX;
	uint16_t x203 = 13U;
	int16_t x204 = INT16_MIN;

	t43 = ((x201<x202)^(x203-x204));

	if (t43 != 32780) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x205 = 0U;
	volatile uint32_t x208 = 112003554U;

	t44 = ((x205<x206)^(x207-x208));

	if (t44 != -108869855LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x213 = 40U;
	static int16_t x214 = INT16_MIN;
	int64_t x215 = -25LL;
	int64_t x216 = -27576797133LL;
	int64_t t45 = 1LL;

	t45 = ((x213<x214)^(x215-x216));

	if (t45 != 27576797108LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x217 = 1052U;
	static uint64_t x218 = UINT64_MAX;
	static uint32_t x219 = 486675U;
	volatile int8_t x220 = -18;
	uint32_t t46 = 1404195696U;

	t46 = ((x217<x218)^(x219-x220));

	if (t46 != 486692U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x221 = INT32_MIN;
	uint8_t x222 = 12U;
	static int16_t x223 = -199;
	int64_t x224 = -1LL;
	int64_t t47 = 1574378164329028813LL;

	t47 = ((x221<x222)^(x223-x224));

	if (t47 != -197LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = -1LL;
	int16_t x227 = 743;
	int8_t x228 = -1;
	volatile int32_t t48 = -513864072;

	t48 = ((x225<x226)^(x227-x228));

	if (t48 != 745) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = UINT16_MAX;
	static uint64_t x231 = 28002886534LLU;
	static uint8_t x232 = UINT8_MAX;
	uint64_t t49 = 56669444775LLU;

	t49 = ((x229<x230)^(x231-x232));

	if (t49 != 28002886279LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x233 = 4173;
	int32_t x234 = 2459249;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t50 = -2;

	t50 = ((x233<x234)^(x235-x236));

	if (t50 != 2147483521) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x241 = 70U;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -1;

	t51 = ((x241<x242)^(x243-x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x246 = 0U;
	int64_t x247 = -10964461206421LL;
	int32_t x248 = 370;
	int64_t t52 = -7494228214256LL;

	t52 = ((x245<x246)^(x247-x248));

	if (t52 != -10964461206791LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x250 = INT64_MIN;
	volatile uint32_t x251 = 1798063U;
	uint32_t x252 = 3U;
	uint32_t t53 = 3368831U;

	t53 = ((x249<x250)^(x251-x252));

	if (t53 != 1798060U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = -1;
	int32_t x254 = -1;
	uint8_t x255 = UINT8_MAX;
	uint32_t x256 = 228U;
	volatile uint32_t t54 = 836U;

	t54 = ((x253<x254)^(x255-x256));

	if (t54 != 27U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = INT8_MAX;
	static int16_t x258 = -1;
	uint64_t x260 = UINT64_MAX;
	uint64_t t55 = 854LLU;

	t55 = ((x257<x258)^(x259-x260));

	if (t55 != 32768LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x263 = -1;
	uint8_t x264 = 2U;

	t56 = ((x261<x262)^(x263-x264));

	if (t56 != -4) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x265 = 4U;
	uint16_t x266 = UINT16_MAX;
	volatile uint16_t x267 = 467U;
	volatile int32_t t57 = -927184620;

	t57 = ((x265<x266)^(x267-x268));

	if (t57 != 341) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MIN;
	static int16_t x271 = 399;
	int64_t x272 = INT64_MAX;
	int64_t t58 = -197LL;

	t58 = ((x269<x270)^(x271-x272));

	if (t58 != -9223372036854775408LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x275 = -214;
	volatile int8_t x276 = -1;
	int32_t t59 = 7900685;

	t59 = ((x273<x274)^(x275-x276));

	if (t59 != -214) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x289 = INT64_MIN;
	volatile int8_t x290 = 0;
	volatile uint8_t x291 = 24U;
	uint64_t x292 = UINT64_MAX;
	uint64_t t60 = 274LLU;

	t60 = ((x289<x290)^(x291-x292));

	if (t60 != 24LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x293 = UINT32_MAX;
	uint8_t x294 = 9U;
	int8_t x295 = INT8_MIN;
	volatile int32_t x296 = INT32_MIN;
	volatile int32_t t61 = -1380;

	t61 = ((x293<x294)^(x295-x296));

	if (t61 != 2147483520) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x297 = 7U;
	static uint64_t x298 = 3974386420LLU;
	int32_t x299 = -1;
	static int64_t x300 = -1LL;
	static int64_t t62 = 15285332393LL;

	t62 = ((x297<x298)^(x299-x300));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x305 = -1;
	uint16_t x306 = 288U;
	int8_t x307 = INT8_MAX;
	static int16_t x308 = -117;
	int32_t t63 = 714309;

	t63 = ((x305<x306)^(x307-x308));

	if (t63 != 245) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = 1573;
	static volatile int32_t x310 = 1919720;
	uint32_t x311 = UINT32_MAX;
	static volatile uint32_t x312 = 1277910U;
	static uint32_t t64 = 124060182U;

	t64 = ((x309<x310)^(x311-x312));

	if (t64 != 4293689384U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x313 = INT32_MAX;
	volatile int8_t x314 = -1;
	int32_t x315 = -1;

	t65 = ((x313<x314)^(x315-x316));

	if (t65 != -1921) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x317 = -1;
	uint16_t x318 = 15249U;
	int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	volatile int32_t t66 = -26959;

	t66 = ((x317<x318)^(x319-x320));

	if (t66 != -2147450879) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = INT64_MAX;
	int16_t x322 = INT16_MAX;
	volatile uint64_t x323 = 6445966329776295LLU;
	uint64_t t67 = 953725LLU;

	t67 = ((x321<x322)^(x323-x324));

	if (t67 != 6445966329776288LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x327 = 4180U;
	int32_t t68 = -3218;

	t68 = ((x325<x326)^(x327-x328));

	if (t68 != 4053) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x330 = 1;
	static int32_t x331 = INT32_MAX;
	volatile uint8_t x332 = 4U;
	static int32_t t69 = -110532;

	t69 = ((x329<x330)^(x331-x332));

	if (t69 != 2147483643) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = -4;
	int8_t x334 = INT8_MIN;
	volatile uint8_t x335 = UINT8_MAX;
	int16_t x336 = -3993;
	volatile int32_t t70 = 3496247;

	t70 = ((x333<x334)^(x335-x336));

	if (t70 != 4248) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x341 = 45U;
	volatile uint64_t x342 = 84302263914315144LLU;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = UINT8_MAX;
	volatile uint32_t t71 = 89U;

	t71 = ((x341<x342)^(x343-x344));

	if (t71 != 4294967041U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x345 = 3502650387388LL;
	int64_t x346 = INT64_MAX;
	int64_t x347 = INT64_MIN;
	int8_t x348 = -1;

	t72 = ((x345<x346)^(x347-x348));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x350 = INT8_MIN;
	static int8_t x351 = INT8_MAX;
	int64_t x352 = -1LL;
	int64_t t73 = -45423LL;

	t73 = ((x349<x350)^(x351-x352));

	if (t73 != 129LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x354 = INT16_MIN;
	static volatile int32_t x355 = -1;

	t74 = ((x353<x354)^(x355-x356));

	if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x357 = INT32_MIN;
	int8_t x359 = INT8_MAX;
	volatile int32_t x360 = -3040636;
	volatile int32_t t75 = 107468266;

	t75 = ((x357<x358)^(x359-x360));

	if (t75 != 3040762) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x362 = 101422810LLU;
	int16_t x363 = -1;
	uint8_t x364 = 58U;
	volatile int32_t t76 = -196853;

	t76 = ((x361<x362)^(x363-x364));

	if (t76 != -59) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x365 = 14;
	static uint16_t x366 = UINT16_MAX;
	static int16_t x368 = INT16_MIN;
	volatile int64_t t77 = -16282306789840525LL;

	t77 = ((x365<x366)^(x367-x368));

	if (t77 != -1933443773LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = INT16_MIN;
	uint8_t x370 = UINT8_MAX;
	volatile int8_t x371 = INT8_MIN;
	volatile int64_t x372 = INT64_MIN;
	int64_t t78 = 41948509683LL;

	t78 = ((x369<x370)^(x371-x372));

	if (t78 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x373 = -11554086504LL;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = -620;
	static uint32_t x376 = 1869U;

	t79 = ((x373<x374)^(x375-x376));

	if (t79 != 4294964806U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x379 = -1;
	static int32_t x380 = INT32_MAX;
	volatile int32_t t80 = INT32_MIN;

	t80 = ((x377<x378)^(x379-x380));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x385 = -1;
	int16_t x386 = INT16_MIN;
	uint32_t x387 = 393576198U;
	static uint64_t x388 = UINT64_MAX;
	uint64_t t81 = 54544202LLU;

	t81 = ((x385<x386)^(x387-x388));

	if (t81 != 393576199LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int64_t x391 = -1LL;
	int32_t x392 = -1;
	int64_t t82 = 1LL;

	t82 = ((x389<x390)^(x391-x392));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x393 = INT64_MIN;
	static int8_t x394 = -1;
	int64_t x395 = 21LL;
	uint16_t x396 = UINT16_MAX;
	volatile int64_t t83 = 33LL;

	t83 = ((x393<x394)^(x395-x396));

	if (t83 != -65513LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x397 = 2LL;
	uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MIN;
	int64_t x400 = INT64_MIN;
	int64_t t84 = -56LL;

	t84 = ((x397<x398)^(x399-x400));

	if (t84 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x401 = -1LL;
	int16_t x402 = -12710;
	static int32_t x403 = INT32_MIN;
	int16_t x404 = -113;
	int32_t t85 = -75552;

	t85 = ((x401<x402)^(x403-x404));

	if (t85 != -2147483535) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x405 = -1;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = INT32_MAX;
	static uint32_t x408 = UINT32_MAX;
	uint32_t t86 = 75U;

	t86 = ((x405<x406)^(x407-x408));

	if (t86 != 2147483649U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = INT64_MAX;
	int16_t x410 = INT16_MAX;
	static int8_t x411 = -1;
	volatile int32_t t87 = -158250;

	t87 = ((x409<x410)^(x411-x412));

	if (t87 != -13) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x414 = INT32_MIN;
	static int16_t x415 = INT16_MIN;
	int64_t x416 = 236342316409590560LL;

	t88 = ((x413<x414)^(x415-x416));

	if (t88 != -236342316409623327LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x417 = 287;
	int64_t x419 = -54175LL;
	int32_t x420 = 58271628;
	int64_t t89 = -2952344LL;

	t89 = ((x417<x418)^(x419-x420));

	if (t89 != -58325804LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -1;
	int16_t x422 = -192;
	int64_t x423 = INT64_MAX;
	uint64_t x424 = 1682012963LLU;

	t90 = ((x421<x422)^(x423-x424));

	if (t90 != 9223372035172762844LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = UINT32_MAX;
	int32_t x426 = INT32_MIN;
	int64_t x427 = -1LL;
	static int64_t x428 = INT64_MAX;
	int64_t t91 = INT64_MIN;

	t91 = ((x425<x426)^(x427-x428));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x429 = UINT8_MAX;
	uint8_t x430 = 1U;
	volatile int64_t x431 = INT64_MIN;
	static int32_t x432 = -1;
	volatile int64_t t92 = -451568247055166063LL;

	t92 = ((x429<x430)^(x431-x432));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x434 = 5241064U;
	uint32_t x435 = 5U;
	static uint8_t x436 = 2U;
	uint32_t t93 = 106U;

	t93 = ((x433<x434)^(x435-x436));

	if (t93 != 2U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x437 = 59U;
	volatile int64_t x438 = -410202926332LL;
	int32_t x439 = -7526675;
	uint8_t x440 = 3U;
	int32_t t94 = -23768;

	t94 = ((x437<x438)^(x439-x440));

	if (t94 != -7526678) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x441 = 95852;
	static volatile int64_t x442 = -405LL;
	volatile int32_t x443 = -294694741;
	volatile int32_t t95 = 25509628;

	t95 = ((x441<x442)^(x443-x444));

	if (t95 != -294694747) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = INT16_MIN;
	uint8_t x448 = UINT8_MAX;

	t96 = ((x445<x446)^(x447-x448));

	if (t96 != -383) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x449 = -1;
	int32_t x450 = INT32_MAX;
	int64_t x452 = INT64_MAX;
	int64_t t97 = -1029LL;

	t97 = ((x449<x450)^(x451-x452));

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = INT16_MAX;
	static uint32_t x454 = 5803572U;
	int64_t x455 = -162578LL;
	int64_t t98 = -10646225752166LL;

	t98 = ((x453<x454)^(x455-x456));

	if (t98 != -162449LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x458 = INT64_MIN;
	int8_t x459 = 49;
	int16_t x460 = -3;
	volatile int32_t t99 = 6954818;

	t99 = ((x457<x458)^(x459-x460));

	if (t99 != 52) { NG(); } else { ; }
	
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

