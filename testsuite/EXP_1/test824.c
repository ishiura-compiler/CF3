#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -222888251;
int64_t x6 = INT64_MIN;
volatile uint16_t x11 = 20620U;
int64_t x14 = INT64_MAX;
static int64_t x16 = INT64_MIN;
uint16_t x30 = UINT16_MAX;
int32_t x39 = -6829139;
int8_t x42 = -1;
int8_t x43 = -1;
static int64_t x45 = -9637355115LL;
int32_t x47 = INT32_MIN;
int16_t x55 = -1;
volatile int64_t t11 = 73912913754LL;
int64_t x58 = INT64_MIN;
static int64_t x61 = -1211022816902LL;
volatile uint64_t x69 = 12LLU;
int32_t t16 = 468;
uint8_t x81 = 3U;
int64_t x82 = -1LL;
int64_t t18 = 34485031634414LL;
volatile int64_t t19 = -1LL;
int16_t x92 = -1;
volatile int8_t x93 = INT8_MIN;
static volatile int64_t x94 = -1357032310197273LL;
int32_t x100 = 77733;
volatile uint64_t x112 = 33462LLU;
int32_t x113 = 126;
static int16_t x114 = INT16_MAX;
static int32_t t26 = -453;
int16_t x118 = INT16_MIN;
static volatile int32_t x120 = -69;
uint16_t x125 = 6813U;
int64_t x126 = -1LL;
uint64_t t30 = 151747698098LLU;
int64_t x136 = INT64_MIN;
static uint32_t x137 = UINT32_MAX;
uint16_t x139 = 471U;
uint64_t t32 = 10668LLU;
int8_t x147 = INT8_MIN;
volatile uint64_t t35 = 636872160424294373LLU;
uint8_t x154 = 29U;
uint64_t x160 = 11012420925044602LLU;
int64_t x164 = INT64_MIN;
volatile uint64_t t38 = 1766368858LLU;
uint32_t x170 = UINT32_MAX;
uint32_t t40 = 3119U;
static int8_t x173 = -1;
int64_t x176 = -376444909938564LL;
int32_t x182 = -305;
int16_t x192 = -11;
volatile int8_t x195 = -1;
int8_t x197 = INT8_MAX;
int8_t x202 = INT8_MAX;
volatile uint64_t t48 = 481184LLU;
int16_t x206 = INT16_MIN;
volatile int16_t x216 = INT16_MIN;
uint8_t x217 = UINT8_MAX;
static int32_t x219 = -1;
uint8_t x221 = UINT8_MAX;
int32_t x225 = -25608162;
int64_t t54 = -27426338324186LL;
static int16_t x233 = INT16_MIN;
int64_t x242 = INT64_MIN;
int16_t x243 = INT16_MIN;
volatile int64_t t58 = 106647023168937LL;
volatile uint64_t x246 = 236953LLU;
volatile uint32_t x247 = UINT32_MAX;
static int16_t x248 = INT16_MIN;
int64_t x258 = -1LL;
int32_t x262 = INT32_MIN;
uint64_t t64 = 20LLU;
uint64_t x271 = UINT64_MAX;
volatile uint64_t t65 = 30126LLU;
volatile int32_t x275 = INT32_MIN;
int8_t x279 = INT8_MAX;
int8_t x286 = -1;
static int64_t x290 = INT64_MIN;
uint64_t t74 = 16984387255LLU;
static int8_t x324 = INT8_MAX;
static uint64_t t79 = 712980270196009LLU;
uint16_t x329 = 1312U;
volatile int16_t x331 = -2306;
uint64_t x341 = 5LLU;
static int32_t x342 = INT32_MAX;
static volatile int64_t x343 = -1LL;
int32_t x345 = INT32_MIN;
int64_t x346 = INT64_MIN;
int64_t x348 = -109349LL;
volatile int64_t t84 = -61135453649LL;
uint8_t x349 = UINT8_MAX;
static int32_t x353 = -1;
uint16_t x354 = 11626U;
int32_t x361 = 1;
volatile uint16_t x365 = UINT16_MAX;
static volatile int32_t x371 = -13;
uint64_t t90 = 54491181347845LLU;
uint64_t x382 = 11720267362LLU;
volatile int64_t x386 = -1786357LL;
int16_t x396 = INT16_MIN;
int32_t t95 = 42;
static volatile uint64_t t96 = 273637027517080LLU;
int16_t x412 = 1801;
int64_t x415 = -3220LL;


void f0(void) {
	static int8_t x1 = -17;
	uint16_t x2 = UINT16_MAX;
	int8_t x3 = -50;
	int8_t x4 = -1;

	t0 = (((x1%x2)|x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x7 = INT32_MAX;
	uint8_t x8 = 17U;
	int64_t t1 = -3255802006197991LL;

	t1 = (((x5%x6)|x7)%x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int8_t x10 = -2;
	int16_t x12 = 25;
	volatile int32_t t2 = 26;

	t2 = (((x9%x10)|x11)%x12);

	if (t2 != 20) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 2;
	volatile int64_t x15 = INT64_MIN;
	static int64_t t3 = -480489255274074LL;

	t3 = (((x13%x14)|x15)%x16);

	if (t3 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = -1;
	uint64_t x19 = 2756205327293529LLU;
	volatile int8_t x20 = -1;
	uint64_t t4 = 758LLU;

	t4 = (((x17%x18)|x19)%x20);

	if (t4 != 2756205327293529LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 0;
	uint8_t x31 = 0U;
	int32_t x32 = INT32_MIN;
	int32_t t5 = -52710247;

	t5 = (((x29%x30)|x31)%x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	volatile uint8_t x34 = UINT8_MAX;
	uint64_t x35 = 1928842254668941173LLU;
	int8_t x36 = INT8_MIN;
	uint64_t t6 = 15775407843542369LLU;

	t6 = (((x33%x34)|x35)%x36);

	if (t6 != 117LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	int32_t x38 = INT32_MIN;
	int32_t x40 = -2680;
	volatile int32_t t7 = -48749081;

	t7 = (((x37%x38)|x39)%x40);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = INT64_MAX;
	int64_t x44 = INT64_MAX;
	int64_t t8 = 7744003570LL;

	t8 = (((x41%x42)|x43)%x44);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x46 = 844158LL;
	int16_t x48 = 10828;
	volatile int64_t t9 = -1743715052378LL;

	t9 = (((x45%x46)|x47)%x48);

	if (t9 != -3439LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = INT16_MIN;
	uint32_t x50 = UINT32_MAX;
	volatile uint64_t x51 = 47269LLU;
	int16_t x52 = -1;
	static volatile uint64_t t10 = 425981849LLU;

	t10 = (((x49%x50)|x51)%x52);

	if (t10 != 4294949029LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	volatile uint8_t x56 = UINT8_MAX;

	t11 = (((x53%x54)|x55)%x56);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1225;
	int16_t x59 = -40;
	int64_t x60 = INT64_MIN;
	volatile int64_t t12 = 55813LL;

	t12 = (((x57%x58)|x59)%x60);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = INT64_MIN;
	volatile int8_t x63 = -29;
	int32_t x64 = -8061314;
	volatile int64_t t13 = 15LL;

	t13 = (((x61%x62)|x63)%x64);

	if (t13 != -5LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	static int64_t x66 = 810768952680LL;
	static int32_t x67 = INT32_MAX;
	uint32_t x68 = 1030447U;
	int64_t t14 = -33133491345127LL;

	t14 = (((x65%x66)|x67)%x68);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x70 = INT8_MIN;
	volatile int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MAX;
	volatile uint64_t t15 = 8154LLU;

	t15 = (((x69%x70)|x71)%x72);

	if (t15 != 20LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = 35586700;
	uint16_t x74 = 7801U;
	volatile uint8_t x75 = 1U;
	int32_t x76 = 57;

	t16 = (((x73%x74)|x75)%x76);

	if (t16 != 12) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	int64_t x78 = INT64_MIN;
	int64_t x79 = -30710782LL;
	int64_t x80 = INT64_MIN;
	int64_t t17 = 252416630682619LL;

	t17 = (((x77%x78)|x79)%x80);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x83 = 21341714U;
	volatile int32_t x84 = INT32_MAX;

	t18 = (((x81%x82)|x83)%x84);

	if (t18 != 21341714LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = -134LL;
	int32_t x87 = INT32_MIN;
	static int64_t x88 = -325578961986069LL;

	t19 = (((x85%x86)|x87)%x88);

	if (t19 != -42LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MAX;
	uint64_t x90 = 40465259518LLU;
	uint64_t x91 = 920LLU;
	volatile uint64_t t20 = 10937566LLU;

	t20 = (((x89%x90)|x91)%x92);

	if (t20 != 32767LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x95 = INT8_MAX;
	volatile uint64_t x96 = 42160435955778988LLU;
	volatile uint64_t t21 = 124761601117067LLU;

	t21 = (((x93%x94)|x95)%x96);

	if (t21 != 22633561034133859LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = -1;
	int32_t x98 = -1;
	static uint32_t x99 = 15477548U;
	static uint32_t t22 = 1U;

	t22 = (((x97%x98)|x99)%x100);

	if (t22 != 8681U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 8U;
	static int32_t x102 = INT32_MAX;
	volatile int16_t x103 = 73;
	int8_t x104 = -1;
	int32_t t23 = -272;

	t23 = (((x101%x102)|x103)%x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MAX;
	uint64_t x106 = 4381674996722998175LLU;
	static int64_t x107 = INT64_MAX;
	int8_t x108 = INT8_MIN;
	uint64_t t24 = 348674620LLU;

	t24 = (((x105%x106)|x107)%x108);

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 40943U;
	int32_t x110 = INT32_MAX;
	int16_t x111 = INT16_MIN;
	volatile uint64_t t25 = 2663577629435327577LLU;

	t25 = (((x109%x110)|x111)%x112);

	if (t25 != 28079LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x115 = INT16_MIN;
	volatile int32_t x116 = INT32_MIN;

	t26 = (((x113%x114)|x115)%x116);

	if (t26 != -32642) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -215618683;
	volatile uint16_t x119 = 31983U;
	static volatile int32_t t27 = 63814;

	t27 = (((x117%x118)|x119)%x120);

	if (t27 != -17) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	static uint32_t x122 = 15669U;
	int16_t x123 = -1;
	int16_t x124 = -1;
	uint32_t t28 = 12U;

	t28 = (((x121%x122)|x123)%x124);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x127 = 1216U;
	static int32_t x128 = -1;
	int64_t t29 = 18965953603547LL;

	t29 = (((x125%x126)|x127)%x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 1U;
	uint64_t x130 = 687065179LLU;
	static volatile uint8_t x131 = 66U;
	uint16_t x132 = 31148U;

	t30 = (((x129%x130)|x131)%x132);

	if (t30 != 67LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x133 = UINT64_MAX;
	volatile int16_t x134 = INT16_MIN;
	int16_t x135 = 139;
	uint64_t t31 = 211674LLU;

	t31 = (((x133%x134)|x135)%x136);

	if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x138 = INT64_MAX;
	uint64_t x140 = 16112678LLU;

	t32 = (((x137%x138)|x139)%x140);

	if (t32 != 8994947LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = UINT64_MAX;
	int8_t x142 = INT8_MIN;
	static uint64_t x143 = 66126178016130LLU;
	uint8_t x144 = 115U;
	volatile uint64_t t33 = 4LLU;

	t33 = (((x141%x142)|x143)%x144);

	if (t33 != 70LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x145 = INT64_MIN;
	volatile int64_t x146 = -3859251205122703LL;
	int16_t x148 = INT16_MIN;
	int64_t t34 = -1443499852672874LL;

	t34 = (((x145%x146)|x147)%x148);

	if (t34 != -5LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MAX;
	static uint64_t x150 = 1737460608900LLU;
	int8_t x151 = INT8_MIN;
	int64_t x152 = -525529373LL;

	t35 = (((x149%x150)|x151)%x152);

	if (t35 != 525529280LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x153 = 30U;
	int64_t x155 = INT64_MAX;
	int16_t x156 = INT16_MIN;
	int64_t t36 = 23841981625731821LL;

	t36 = (((x153%x154)|x155)%x156);

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x157 = UINT16_MAX;
	volatile int8_t x158 = 58;
	static int64_t x159 = -7856413243LL;
	uint64_t t37 = 78LLU;

	t37 = (((x157%x158)|x159)%x160);

	if (t37 != 939016403430071LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	uint8_t x162 = 57U;
	uint64_t x163 = 27LLU;

	t38 = (((x161%x162)|x163)%x164);

	if (t38 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x165 = 9U;
	uint8_t x166 = 28U;
	uint8_t x167 = 46U;
	int32_t x168 = 262;
	static volatile int32_t t39 = 0;

	t39 = (((x165%x166)|x167)%x168);

	if (t39 != 47) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 48U;
	volatile uint8_t x171 = UINT8_MAX;
	int8_t x172 = INT8_MAX;

	t40 = (((x169%x170)|x171)%x172);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = 32;
	volatile uint64_t t41 = 1LLU;

	t41 = (((x173%x174)|x175)%x176);

	if (t41 != 32LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int32_t x178 = -119572;
	volatile uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MAX;
	volatile uint64_t t42 = 2LLU;

	t42 = (((x177%x178)|x179)%x180);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MAX;
	uint32_t x183 = 48133948U;
	uint32_t x184 = 1028573829U;
	volatile int64_t t43 = 39LL;

	t43 = (((x181%x182)|x183)%x184);

	if (t43 != 48133951LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = UINT32_MAX;
	uint8_t x186 = UINT8_MAX;
	int16_t x187 = INT16_MIN;
	volatile uint32_t x188 = UINT32_MAX;
	uint32_t t44 = 8U;

	t44 = (((x185%x186)|x187)%x188);

	if (t44 != 4294934528U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	volatile uint64_t x190 = UINT64_MAX;
	static int16_t x191 = INT16_MAX;
	uint64_t t45 = 874LLU;

	t45 = (((x189%x190)|x191)%x192);

	if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = 79053LL;
	volatile int64_t x194 = 3541361LL;
	uint32_t x196 = 9U;
	static volatile int64_t t46 = -265177396633LL;

	t46 = (((x193%x194)|x195)%x196);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x198 = INT16_MIN;
	int64_t x199 = -5096760LL;
	static volatile uint8_t x200 = 14U;
	volatile int64_t t47 = -191LL;

	t47 = (((x197%x198)|x199)%x200);

	if (t47 != -5LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = UINT64_MAX;
	int64_t x203 = INT64_MAX;
	int32_t x204 = 1;

	t48 = (((x201%x202)|x203)%x204);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x205 = 1931557;
	static uint16_t x207 = 19U;
	static int64_t x208 = -1LL;
	int64_t t49 = -5913529670LL;

	t49 = (((x205%x206)|x207)%x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = 916259176360LL;
	static int16_t x210 = 1;
	int8_t x211 = -15;
	volatile uint64_t x212 = 191305453132261076LLU;
	uint64_t t50 = 132LLU;

	t50 = (((x209%x210)|x211)%x212);

	if (t50 != 81420573012488305LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = INT64_MAX;
	static int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	static int64_t t51 = -11947802635212LL;

	t51 = (((x213%x214)|x215)%x216);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x218 = -3;
	int8_t x220 = INT8_MAX;
	volatile int32_t t52 = 3419329;

	t52 = (((x217%x218)|x219)%x220);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x222 = 444046989U;
	static int32_t x223 = INT32_MIN;
	uint8_t x224 = 4U;
	volatile uint32_t t53 = 14U;

	t53 = (((x221%x222)|x223)%x224);

	if (t53 != 3U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x226 = INT8_MIN;
	int64_t x227 = -1LL;
	uint16_t x228 = UINT16_MAX;

	t54 = (((x225%x226)|x227)%x228);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	uint64_t x230 = 12088875770665LLU;
	int64_t x231 = INT64_MAX;
	int8_t x232 = INT8_MAX;
	volatile uint64_t t55 = 3LLU;

	t55 = (((x229%x230)|x231)%x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x234 = -1LL;
	int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MAX;
	volatile int64_t t56 = -97528021974LL;

	t56 = (((x233%x234)|x235)%x236);

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x237 = INT16_MAX;
	int16_t x238 = INT16_MAX;
	int8_t x239 = INT8_MAX;
	volatile uint16_t x240 = UINT16_MAX;
	int32_t t57 = 45198;

	t57 = (((x237%x238)|x239)%x240);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x241 = INT64_MAX;
	volatile int8_t x244 = -3;

	t58 = (((x241%x242)|x243)%x244);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x245 = -1;
	static uint64_t t59 = 490817403LLU;

	t59 = (((x245%x246)|x247)%x248);

	if (t59 != 4294967295LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x249 = INT8_MAX;
	int8_t x250 = INT8_MIN;
	static int64_t x251 = 64662LL;
	uint8_t x252 = UINT8_MAX;
	volatile int64_t t60 = 21734201353090063LL;

	t60 = (((x249%x250)|x251)%x252);

	if (t60 != 252LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = INT32_MIN;
	static int16_t x254 = -1;
	uint32_t x255 = 38001607U;
	static int32_t x256 = INT32_MIN;
	uint32_t t61 = 4974U;

	t61 = (((x253%x254)|x255)%x256);

	if (t61 != 38001607U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x257 = INT32_MAX;
	int64_t x259 = INT64_MAX;
	volatile uint64_t x260 = 184153694917LLU;
	uint64_t t62 = 1LLU;

	t62 = (((x257%x258)|x259)%x260);

	if (t62 != 158503271162LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = -10;
	int8_t x263 = -31;
	static uint8_t x264 = 9U;
	volatile int32_t t63 = 4602;

	t63 = (((x261%x262)|x263)%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 584815U;
	uint8_t x266 = UINT8_MAX;
	int32_t x267 = 60;
	volatile uint64_t x268 = UINT64_MAX;

	t64 = (((x265%x266)|x267)%x268);

	if (t64 != 124LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x269 = 280U;
	static uint32_t x270 = UINT32_MAX;
	int16_t x272 = -1629;

	t65 = (((x269%x270)|x271)%x272);

	if (t65 != 1628LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	int16_t x274 = -1;
	static int8_t x276 = INT8_MAX;
	volatile int32_t t66 = 26;

	t66 = (((x273%x274)|x275)%x276);

	if (t66 != -8) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -204283906441909LL;
	int8_t x278 = INT8_MAX;
	volatile int64_t x280 = INT64_MIN;
	int64_t t67 = 900917300918631LL;

	t67 = (((x277%x278)|x279)%x280);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -1;
	volatile int32_t x282 = -1;
	int64_t x283 = 132218626580795LL;
	int8_t x284 = -1;
	int64_t t68 = 11603LL;

	t68 = (((x281%x282)|x283)%x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = 0;
	static int64_t x287 = INT64_MAX;
	uint16_t x288 = 3U;
	static volatile int64_t t69 = 26503LL;

	t69 = (((x285%x286)|x287)%x288);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -1;
	uint32_t x291 = 3U;
	static uint32_t x292 = UINT32_MAX;
	int64_t t70 = -1LL;

	t70 = (((x289%x290)|x291)%x292);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -1;
	int32_t x294 = INT32_MAX;
	int8_t x295 = -19;
	int32_t x296 = -1;
	volatile int32_t t71 = 28;

	t71 = (((x293%x294)|x295)%x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x297 = -147;
	volatile int32_t x298 = -1;
	int32_t x299 = -8418;
	uint8_t x300 = 12U;
	volatile int32_t t72 = 16702;

	t72 = (((x297%x298)|x299)%x300);

	if (t72 != -6) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x301 = -1813427LL;
	int16_t x302 = INT16_MIN;
	int16_t x303 = -1512;
	static int8_t x304 = -10;
	int64_t t73 = 468991148955537734LL;

	t73 = (((x301%x302)|x303)%x304);

	if (t73 != -9LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = -7;
	int64_t x306 = -1LL;
	static uint64_t x307 = UINT64_MAX;
	static volatile uint64_t x308 = UINT64_MAX;

	t74 = (((x305%x306)|x307)%x308);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = 303382977LL;
	int32_t x310 = 98580;
	int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	static int64_t t75 = 60034895415892140LL;

	t75 = (((x309%x310)|x311)%x312);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	uint32_t x315 = UINT32_MAX;
	int32_t x316 = INT32_MAX;
	uint32_t t76 = 180821U;

	t76 = (((x313%x314)|x315)%x316);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x317 = INT64_MIN;
	int64_t x318 = -1LL;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	int64_t t77 = -30451LL;

	t77 = (((x317%x318)|x319)%x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x321 = INT16_MAX;
	static int16_t x322 = INT16_MIN;
	int32_t x323 = -1;
	int32_t t78 = 4;

	t78 = (((x321%x322)|x323)%x324);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x325 = INT8_MIN;
	uint64_t x326 = 4618908751415082385LLU;
	int16_t x327 = INT16_MIN;
	static uint16_t x328 = 5U;

	t79 = (((x325%x326)|x327)%x328);

	if (t79 != 4LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x330 = INT16_MAX;
	uint64_t x332 = 863LLU;
	uint64_t t80 = 782260081LLU;

	t80 = (((x329%x330)|x331)%x332);

	if (t80 != 819LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x333 = 29063U;
	int32_t x334 = INT32_MAX;
	volatile int16_t x335 = INT16_MIN;
	uint16_t x336 = 1U;
	int32_t t81 = 114526;

	t81 = (((x333%x334)|x335)%x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = 1;
	int64_t x338 = -1LL;
	uint16_t x339 = 3U;
	static volatile int8_t x340 = -1;
	int64_t t82 = -26878241LL;

	t82 = (((x337%x338)|x339)%x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x344 = INT64_MIN;
	volatile uint64_t t83 = 56890347799LLU;

	t83 = (((x341%x342)|x343)%x344);

	if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x347 = 367215U;

	t84 = (((x345%x346)|x347)%x348);

	if (t84 != -48818LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = 3148U;
	int64_t t85 = -1000LL;

	t85 = (((x349%x350)|x351)%x352);

	if (t85 != -2489LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MIN;
	volatile int64_t t86 = -125347927796024LL;

	t86 = (((x353%x354)|x355)%x356);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x357 = 0U;
	static int32_t x358 = INT32_MAX;
	int16_t x359 = INT16_MIN;
	int8_t x360 = 1;
	volatile int32_t t87 = 1;

	t87 = (((x357%x358)|x359)%x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MIN;
	static uint8_t x364 = UINT8_MAX;
	volatile int32_t t88 = -33;

	t88 = (((x361%x362)|x363)%x364);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x366 = -1;
	int8_t x367 = -3;
	static int64_t x368 = -1LL;
	static volatile int64_t t89 = 15525526962496090LL;

	t89 = (((x365%x366)|x367)%x368);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x369 = 123110581432LLU;
	int32_t x370 = INT32_MIN;
	uint16_t x372 = 15236U;

	t90 = (((x369%x370)|x371)%x372);

	if (t90 != 10359LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	int64_t x374 = -52624174895377LL;
	int32_t x375 = INT32_MIN;
	static int64_t x376 = INT64_MIN;
	static volatile int64_t t91 = 967751858069LL;

	t91 = (((x373%x374)|x375)%x376);

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x377 = 258344084;
	volatile uint32_t x378 = 20248U;
	int32_t x379 = -152;
	uint32_t x380 = UINT32_MAX;
	uint32_t t92 = 17U;

	t92 = (((x377%x378)|x379)%x380);

	if (t92 != 4294967276U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 5831U;
	int64_t x383 = INT64_MIN;
	uint16_t x384 = 3114U;
	uint64_t t93 = 17207289188395977LLU;

	t93 = (((x381%x382)|x383)%x384);

	if (t93 != 1789LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = INT16_MIN;
	int16_t x387 = 673;
	int32_t x388 = -3591332;
	volatile int64_t t94 = 38239412354747LL;

	t94 = (((x385%x386)|x387)%x388);

	if (t94 != -32095LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x393 = INT8_MAX;
	uint8_t x394 = 123U;
	uint16_t x395 = UINT16_MAX;

	t95 = (((x393%x394)|x395)%x396);

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MAX;
	uint16_t x398 = 1U;
	int32_t x399 = 3126;
	volatile uint64_t x400 = 49LLU;

	t96 = (((x397%x398)|x399)%x400);

	if (t96 != 39LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = 3;
	uint16_t x402 = 14694U;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = 1216;
	volatile uint64_t t97 = 4835379732724726791LLU;

	t97 = (((x401%x402)|x403)%x404);

	if (t97 != 1023LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x409 = 2802170350628161LLU;
	static uint8_t x410 = 4U;
	uint8_t x411 = 14U;
	static volatile uint64_t t98 = 2965132497LLU;

	t98 = (((x409%x410)|x411)%x412);

	if (t98 != 15LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x414 = UINT8_MAX;
	volatile int16_t x416 = INT16_MIN;
	volatile int64_t t99 = -48363626442470509LL;

	t99 = (((x413%x414)|x415)%x416);

	if (t99 != -20LL) { NG(); } else { ; }
	
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

