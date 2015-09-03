#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
volatile int16_t x4 = -3533;
int32_t t2 = -11475;
int16_t x17 = INT16_MIN;
volatile int64_t t4 = -244579734740LL;
volatile int64_t x41 = -15421827LL;
int64_t t8 = -190915887240LL;
int32_t x72 = 5860540;
uint32_t t16 = 20959947U;
volatile int8_t x78 = INT8_MAX;
volatile int16_t x79 = -1;
static uint8_t x86 = 0U;
volatile uint32_t t18 = 409U;
static volatile int32_t x91 = INT32_MAX;
uint32_t t19 = 20212U;
int16_t x94 = -18;
int16_t x96 = 0;
uint8_t x100 = UINT8_MAX;
volatile int64_t x102 = -2014937034343LL;
static int64_t x103 = 2080880791839LL;
volatile uint32_t x105 = 10015U;
static int32_t x106 = 41590471;
uint16_t x108 = 21U;
volatile int64_t x111 = INT64_MIN;
int8_t x112 = -1;
static volatile int64_t x114 = INT64_MIN;
uint64_t x120 = 2326057LLU;
uint64_t t26 = 313846985LLU;
uint32_t x134 = 0U;
int32_t x140 = 33081;
int8_t x141 = INT8_MAX;
int32_t x142 = -1;
int16_t x145 = INT16_MAX;
static uint16_t x146 = 3U;
int32_t x162 = -1;
int8_t x163 = INT8_MIN;
volatile int8_t x177 = INT8_MAX;
uint32_t x178 = 3984U;
uint64_t x181 = UINT64_MAX;
static volatile uint64_t t38 = 6LLU;
int64_t x195 = -911981LL;
uint16_t x197 = UINT16_MAX;
static int32_t x198 = -2780;
uint64_t x203 = 52619336218761150LLU;
uint8_t x210 = 0U;
int16_t x220 = -1;
volatile uint64_t t45 = 5603067LLU;
static uint64_t x222 = UINT64_MAX;
static volatile int8_t x227 = 1;
int16_t x232 = INT16_MAX;
static int32_t x234 = INT32_MAX;
int32_t x242 = INT32_MAX;
volatile int8_t x256 = 56;
volatile uint32_t t53 = 382U;
uint8_t x258 = 53U;
volatile int64_t t55 = 452682207LL;
uint32_t t56 = 39236729U;
int32_t x270 = 0;
volatile uint64_t t57 = 480402432LLU;
volatile int64_t t58 = -21240030290137871LL;
static int32_t x280 = -186251730;
int32_t t59 = 26108;
static int32_t x288 = -1;
volatile int64_t x303 = -1LL;
static uint16_t x313 = 195U;
int8_t x314 = -1;
int8_t x320 = INT8_MAX;
volatile uint32_t t66 = 1U;
volatile uint16_t x333 = 57U;
static int64_t x337 = -45332252LL;
int8_t x339 = INT8_MIN;
int32_t x340 = INT32_MIN;
static int64_t t68 = -334478425344482LL;
volatile int32_t x341 = INT32_MAX;
static int8_t x342 = -1;
uint64_t x343 = UINT64_MAX;
static uint64_t t72 = 35560482LLU;
int32_t x365 = INT32_MIN;
volatile int32_t t74 = -395;
static int32_t x384 = INT32_MAX;
static volatile uint64_t t76 = 0LLU;
uint8_t x391 = 51U;
int16_t x392 = -1;
uint32_t x396 = 363109U;
int64_t t79 = 302389LL;
int64_t x401 = -1LL;
volatile int64_t x402 = -1LL;
static int64_t x403 = -1LL;
int8_t x406 = -2;
static volatile uint64_t x407 = 956065013LLU;
volatile int8_t x412 = 0;
static volatile int8_t x414 = 56;
volatile int32_t t84 = -14098;
int8_t x423 = INT8_MAX;
uint16_t x426 = UINT16_MAX;
int16_t x434 = INT16_MIN;
int16_t x436 = -1669;
int32_t t88 = 371076523;
volatile int8_t x445 = 0;
int64_t x446 = INT64_MAX;
uint16_t x464 = 45U;
volatile int32_t x465 = -1;
volatile int16_t x467 = -7456;
int16_t x468 = INT16_MIN;
int32_t x479 = 1;
volatile uint32_t t96 = 3U;
int16_t x492 = INT16_MIN;
static uint32_t x506 = UINT32_MAX;
int16_t x511 = INT16_MIN;
int16_t x512 = INT16_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x3 = -3LL;
	volatile int64_t t0 = 411718404LL;

	t0 = (((x1+x2)/x3)-x4);

	if (t0 != 715809570LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 1U;
	int32_t x10 = 75694;
	static int8_t x11 = -1;
	int64_t x12 = -2255325800LL;
	volatile int64_t t1 = -2154090478956319LL;

	t1 = (((x9+x10)/x11)-x12);

	if (t1 != 2255250105LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 26515U;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = 100U;
	uint16_t x16 = UINT16_MAX;

	t2 = (((x13+x14)/x15)-x16);

	if (t2 != -65268) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = 52LLU;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = UINT32_MAX;
	static volatile uint64_t t3 = 7313096171984632854LLU;

	t3 = (((x17+x18)/x19)-x20);

	if (t3 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	static volatile int64_t x22 = 618263367153LL;
	int32_t x23 = 205;
	int64_t x24 = 6230785754798483LL;

	t4 = (((x21+x22)/x23)-x24);

	if (t4 != -6230782738879619LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 7LLU;
	int64_t x26 = 64596484246774118LL;
	int32_t x27 = INT32_MAX;
	int8_t x28 = -1;
	volatile uint64_t t5 = 116354736LLU;

	t5 = (((x25+x26)/x27)-x28);

	if (t5 != 30080083LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	int32_t x30 = INT32_MIN;
	uint64_t x31 = 4771731LLU;
	uint32_t x32 = 3663U;
	volatile uint64_t t6 = 1842LLU;

	t6 = (((x29+x30)/x31)-x32);

	if (t6 != 3865839053811LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = 13;
	int64_t x38 = 0LL;
	int8_t x39 = INT8_MAX;
	volatile uint16_t x40 = UINT16_MAX;
	volatile int64_t t7 = -1471417618780LL;

	t7 = (((x37+x38)/x39)-x40);

	if (t7 != -65535LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x42 = INT16_MIN;
	volatile uint8_t x43 = 2U;
	volatile uint16_t x44 = UINT16_MAX;

	t8 = (((x41+x42)/x43)-x44);

	if (t8 != -7792832LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 81U;
	int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MIN;
	uint64_t x48 = 6LLU;
	volatile uint64_t t9 = 0LLU;

	t9 = (((x45+x46)/x47)-x48);

	if (t9 != 16777209LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x49 = -1;
	uint32_t x50 = UINT32_MAX;
	volatile int32_t x51 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;
	static volatile uint32_t t10 = 7819009U;

	t10 = (((x49+x50)/x51)-x52);

	if (t10 != 4294967042U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -7;
	int16_t x54 = -1;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 6539605078195LLU;
	uint64_t t11 = 51555733849494025LLU;

	t11 = (((x53+x54)/x55)-x56);

	if (t11 != 18446737534104473421LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	static volatile int32_t x58 = -349061;
	volatile int8_t x59 = -1;
	int8_t x60 = -1;
	int64_t t12 = -3LL;

	t12 = (((x57+x58)/x59)-x60);

	if (t12 != 349063LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x61 = INT8_MIN;
	volatile int64_t x62 = -1LL;
	int8_t x63 = 43;
	int32_t x64 = -1;
	int64_t t13 = 2LL;

	t13 = (((x61+x62)/x63)-x64);

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = INT16_MIN;
	volatile uint32_t x66 = 17477U;
	volatile int64_t x67 = INT64_MIN;
	volatile uint32_t x68 = 2U;
	int64_t t14 = 3795093125245LL;

	t14 = (((x65+x66)/x67)-x68);

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = 1;
	uint8_t x70 = UINT8_MAX;
	int16_t x71 = INT16_MIN;
	volatile int32_t t15 = 170;

	t15 = (((x69+x70)/x71)-x72);

	if (t15 != -5860540) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 42U;
	uint32_t x74 = UINT32_MAX;
	static int8_t x75 = INT8_MAX;
	static uint32_t x76 = 133408964U;

	t16 = (((x73+x74)/x75)-x76);

	if (t16 != 4161558332U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = 35;
	int8_t x80 = 10;
	volatile int32_t t17 = -133454528;

	t17 = (((x77+x78)/x79)-x80);

	if (t17 != -172) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x85 = 44278075U;
	int8_t x87 = -1;
	volatile int16_t x88 = INT16_MAX;

	t18 = (((x85+x86)/x87)-x88);

	if (t18 != 4294934529U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x89 = 32U;
	static int8_t x90 = 0;
	uint8_t x92 = 6U;

	t19 = (((x89+x90)/x91)-x92);

	if (t19 != 4294967290U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -1;
	int16_t x95 = 319;
	int32_t t20 = 60266;

	t20 = (((x93+x94)/x95)-x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 17;
	uint64_t x98 = 88924866086474702LLU;
	int16_t x99 = INT16_MIN;
	static uint64_t t21 = 6LLU;

	t21 = (((x97+x98)/x99)-x100);

	if (t21 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	int8_t x104 = -1;
	volatile int64_t t22 = 4081057LL;

	t22 = (((x101+x102)/x103)-x104);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x107 = -4210140187LL;
	int64_t t23 = -13261LL;

	t23 = (((x105+x106)/x107)-x108);

	if (t23 != -21LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x109 = UINT16_MAX;
	static uint32_t x110 = 86U;
	static volatile int64_t t24 = -17941281069LL;

	t24 = (((x109+x110)/x111)-x112);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 9U;
	int16_t x115 = -66;
	int32_t x116 = -1;
	int64_t t25 = -1LL;

	t25 = (((x113+x114)/x115)-x116);

	if (t25 != 139748061164466300LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x117 = 1U;
	volatile uint64_t x118 = UINT64_MAX;
	static int16_t x119 = INT16_MIN;

	t26 = (((x117+x118)/x119)-x120);

	if (t26 != 18446744073707225559LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = 803754030071259LL;
	uint16_t x122 = 553U;
	volatile uint16_t x123 = 15U;
	int32_t x124 = -13396960;
	volatile int64_t t27 = 169806228210559840LL;

	t27 = (((x121+x122)/x123)-x124);

	if (t27 != 53583615401747LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -1;
	uint8_t x126 = UINT8_MAX;
	static int32_t x127 = -1;
	static int64_t x128 = INT64_MIN;
	volatile int64_t t28 = -41LL;

	t28 = (((x125+x126)/x127)-x128);

	if (t28 != 9223372036854775554LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = 45;
	int16_t x130 = -5380;
	int64_t x131 = 10732533827419421LL;
	volatile uint16_t x132 = 24U;
	static volatile int64_t t29 = 1881623LL;

	t29 = (((x129+x130)/x131)-x132);

	if (t29 != -24LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x133 = UINT8_MAX;
	int32_t x135 = -1;
	uint64_t x136 = 9829932217LLU;
	volatile uint64_t t30 = 24349883148LLU;

	t30 = (((x133+x134)/x135)-x136);

	if (t30 != 18446744063879619399LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 80U;
	uint16_t x138 = 446U;
	volatile int32_t x139 = INT32_MIN;
	static int32_t t31 = 206;

	t31 = (((x137+x138)/x139)-x140);

	if (t31 != -33081) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x143 = 3154;
	int8_t x144 = -1;
	volatile int32_t t32 = 95254126;

	t32 = (((x141+x142)/x143)-x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x147 = 20;
	int32_t x148 = 175;
	int32_t t33 = -186078;

	t33 = (((x145+x146)/x147)-x148);

	if (t33 != 1463) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MIN;
	uint32_t x154 = UINT32_MAX;
	int32_t x155 = 1;
	int16_t x156 = 177;
	uint32_t t34 = 1863811U;

	t34 = (((x153+x154)/x155)-x156);

	if (t34 != 4294934350U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = 169040268883453898LLU;
	static volatile uint32_t x158 = 173818109U;
	static uint64_t x159 = UINT64_MAX;
	int32_t x160 = INT32_MAX;
	uint64_t t35 = 136783368405176LLU;

	t35 = (((x157+x158)/x159)-x160);

	if (t35 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -1;
	static int32_t x164 = -1;
	int32_t t36 = -39536202;

	t36 = (((x161+x162)/x163)-x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x179 = -89;
	volatile int16_t x180 = -18;
	volatile uint32_t t37 = 43875534U;

	t37 = (((x177+x178)/x179)-x180);

	if (t37 != 18U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x182 = INT8_MAX;
	int64_t x183 = 54936LL;
	uint64_t x184 = 7551466178LLU;

	t38 = (((x181+x182)/x183)-x184);

	if (t38 != 18446744066158085438LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MIN;
	static uint8_t x186 = UINT8_MAX;
	static uint8_t x187 = 1U;
	static int8_t x188 = -1;
	volatile int32_t t39 = -435989;

	t39 = (((x185+x186)/x187)-x188);

	if (t39 != -2147483392) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x189 = UINT64_MAX;
	int16_t x190 = INT16_MIN;
	static int32_t x191 = INT32_MAX;
	volatile int32_t x192 = INT32_MAX;
	uint64_t t40 = 197161607543127934LLU;

	t40 = (((x189+x190)/x191)-x192);

	if (t40 != 6442450948LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = INT64_MAX;
	int64_t x194 = -1LL;
	static int16_t x196 = INT16_MIN;
	int64_t t41 = 41169879001329476LL;

	t41 = (((x193+x194)/x195)-x196);

	if (t41 != -10113557197979LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x199 = INT64_MAX;
	int8_t x200 = -1;
	volatile int64_t t42 = 158650248LL;

	t42 = (((x197+x198)/x199)-x200);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = UINT8_MAX;
	static int16_t x202 = -58;
	static volatile uint16_t x204 = 0U;
	static uint64_t t43 = 48961LLU;

	t43 = (((x201+x202)/x203)-x204);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x209 = -1LL;
	volatile int16_t x211 = -1;
	int64_t x212 = -6LL;
	volatile int64_t t44 = -37855361051757LL;

	t44 = (((x209+x210)/x211)-x212);

	if (t44 != 7LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x217 = 7555547115720217023LLU;
	uint32_t x218 = UINT32_MAX;
	volatile int32_t x219 = -1;

	t45 = (((x217+x218)/x219)-x220);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x221 = 29U;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t46 = 23697094LLU;

	t46 = (((x221+x222)/x223)-x224);

	if (t46 != 32768LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x225 = 1;
	uint32_t x226 = UINT32_MAX;
	int16_t x228 = 65;
	uint32_t t47 = 142770U;

	t47 = (((x225+x226)/x227)-x228);

	if (t47 != 4294967231U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x229 = -1;
	volatile int32_t x230 = INT32_MAX;
	static uint16_t x231 = 41U;
	volatile int32_t t48 = -77581;

	t48 = (((x229+x230)/x231)-x232);

	if (t48 != 52344882) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = 2949513066718030630LL;
	static uint64_t x235 = 20173945181LLU;
	static int32_t x236 = -1;
	volatile uint64_t t49 = 909LLU;

	t49 = (((x233+x234)/x235)-x236);

	if (t49 != 146204079LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x241 = INT16_MIN;
	volatile int32_t x243 = INT32_MIN;
	uint64_t x244 = UINT64_MAX;
	uint64_t t50 = 5593LLU;

	t50 = (((x241+x242)/x243)-x244);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x245 = -1;
	int64_t x246 = INT64_MAX;
	uint32_t x247 = 66740118U;
	uint32_t x248 = 391294U;
	static int64_t t51 = 12172053048590LL;

	t51 = (((x245+x246)/x247)-x248);

	if (t51 != 138197926498LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x249 = -4199770832LL;
	int8_t x250 = -7;
	volatile uint16_t x251 = UINT16_MAX;
	volatile int16_t x252 = INT16_MAX;
	volatile int64_t t52 = -13LL;

	t52 = (((x249+x250)/x251)-x252);

	if (t52 != -96851LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x253 = INT8_MIN;
	volatile int16_t x254 = 0;
	volatile uint32_t x255 = 9884U;

	t53 = (((x253+x254)/x255)-x256);

	if (t53 != 434481U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x259 = 7;
	int32_t x260 = -1;
	int32_t t54 = -724;

	t54 = (((x257+x258)/x259)-x260);

	if (t54 != 9370) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x261 = UINT8_MAX;
	volatile int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MAX;
	uint32_t x264 = 4359U;

	t55 = (((x261+x262)/x263)-x264);

	if (t55 != -4359LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x265 = UINT8_MAX;
	uint32_t x266 = UINT32_MAX;
	static int8_t x267 = INT8_MAX;
	int32_t x268 = -1;

	t56 = (((x265+x266)/x267)-x268);

	if (t56 != 3U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = -1LL;
	uint16_t x271 = UINT16_MAX;
	uint64_t x272 = 13284795686LLU;

	t57 = (((x269+x270)/x271)-x272);

	if (t57 != 18446744060424755930LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x273 = UINT32_MAX;
	int64_t x274 = -165255519828069003LL;
	int16_t x275 = INT16_MIN;
	static int32_t x276 = INT32_MIN;

	t58 = (((x273+x274)/x275)-x276);

	if (t58 != 5045345589516LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = INT32_MIN;
	uint16_t x278 = 1611U;
	uint8_t x279 = 1U;

	t59 = (((x277+x278)/x279)-x280);

	if (t59 != -1961230307) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = 1;
	int32_t x282 = INT32_MIN;
	volatile uint64_t x283 = 74421040787313LLU;
	volatile uint16_t x284 = UINT16_MAX;
	volatile uint64_t t60 = 21783582632619765LLU;

	t60 = (((x281+x282)/x283)-x284);

	if (t60 != 182335LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MAX;
	static uint16_t x287 = 1U;
	int32_t t61 = -2;

	t61 = (((x285+x286)/x287)-x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x289 = 7332;
	static uint64_t x290 = 2305422903107371213LLU;
	static int32_t x291 = INT32_MAX;
	static int8_t x292 = INT8_MIN;
	uint64_t t62 = 778586020321LLU;

	t62 = (((x289+x290)/x291)-x292);

	if (t62 != 1073546325LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x301 = UINT8_MAX;
	static int8_t x302 = -1;
	int8_t x304 = INT8_MAX;
	volatile int64_t t63 = -4473263079227502LL;

	t63 = (((x301+x302)/x303)-x304);

	if (t63 != -381LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x309 = UINT8_MAX;
	volatile uint16_t x310 = 40U;
	uint32_t x311 = 1397645U;
	int8_t x312 = INT8_MIN;
	static uint32_t t64 = 1265452805U;

	t64 = (((x309+x310)/x311)-x312);

	if (t64 != 128U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x315 = 159773136013890529LLU;
	static int32_t x316 = INT32_MAX;
	volatile uint64_t t65 = 1LLU;

	t65 = (((x313+x314)/x315)-x316);

	if (t65 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x317 = 28;
	static uint32_t x318 = UINT32_MAX;
	volatile uint8_t x319 = UINT8_MAX;

	t66 = (((x317+x318)/x319)-x320);

	if (t66 != 4294967169U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x334 = 20U;
	uint64_t x335 = UINT64_MAX;
	static volatile uint32_t x336 = 174217980U;
	volatile uint64_t t67 = 12132459613417LLU;

	t67 = (((x333+x334)/x335)-x336);

	if (t67 != 18446744073535333636LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x338 = -1;

	t68 = (((x337+x338)/x339)-x340);

	if (t68 != 2147837806LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x344 = 29;
	volatile uint64_t t69 = 1376693008LLU;

	t69 = (((x341+x342)/x343)-x344);

	if (t69 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x345 = UINT64_MAX;
	volatile uint32_t x346 = 1285U;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = UINT16_MAX;
	volatile uint64_t t70 = 32733154LLU;

	t70 = (((x345+x346)/x347)-x348);

	if (t70 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x353 = UINT32_MAX;
	volatile int8_t x354 = INT8_MIN;
	uint64_t x355 = 37211764LLU;
	int8_t x356 = -13;
	uint64_t t71 = 46088472238023LLU;

	t71 = (((x353+x354)/x355)-x356);

	if (t71 != 128LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x357 = -109;
	uint64_t x358 = 5314463883686LLU;
	volatile uint32_t x359 = 316985671U;
	uint32_t x360 = 2625U;

	t72 = (((x357+x358)/x359)-x360);

	if (t72 != 14140LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x366 = UINT8_MAX;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MAX;
	uint32_t t73 = 8951442U;

	t73 = (((x365+x366)/x367)-x368);

	if (t73 != 4294967169U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x369 = 446705;
	int8_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int16_t x372 = -9;

	t74 = (((x369+x370)/x371)-x372);

	if (t74 != -4) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x373 = -1;
	volatile int16_t x374 = INT16_MIN;
	uint8_t x375 = 25U;
	uint64_t x376 = UINT64_MAX;
	uint64_t t75 = 5LLU;

	t75 = (((x373+x374)/x375)-x376);

	if (t75 != 18446744073709550307LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x381 = -1;
	volatile uint64_t x382 = 16068117661048512LLU;
	uint32_t x383 = 173443590U;

	t76 = (((x381+x382)/x383)-x384);

	if (t76 != 18446744071654709718LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = INT32_MIN;
	static uint16_t x386 = 8061U;
	uint16_t x387 = 369U;
	int32_t x388 = -1;
	volatile int32_t t77 = 10221442;

	t77 = (((x385+x386)/x387)-x388);

	if (t77 != -5819716) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x390 = -1;
	int32_t t78 = -51126;

	t78 = (((x389+x390)/x391)-x392);

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = -1555022166405093046LL;
	uint32_t x395 = UINT32_MAX;

	t79 = (((x393+x394)/x395)-x396);

	if (t79 != -362419920LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x397 = 18197U;
	int16_t x398 = INT16_MIN;
	static volatile uint8_t x399 = 51U;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t80 = 2059366367LLU;

	t80 = (((x397+x398)/x399)-x400);

	if (t80 != 84214760LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x404 = -1;
	volatile int64_t t81 = 31021269045721180LL;

	t81 = (((x401+x402)/x403)-x404);

	if (t81 != 3LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x405 = 3913296U;
	uint64_t x408 = 51306888LLU;
	static volatile uint64_t t82 = 2LLU;

	t82 = (((x405+x406)/x407)-x408);

	if (t82 != 18446744073658244728LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x409 = INT16_MIN;
	int8_t x410 = 1;
	static int16_t x411 = 159;
	int32_t t83 = 765474;

	t83 = (((x409+x410)/x411)-x412);

	if (t83 != -206) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x413 = -11;
	int8_t x415 = INT8_MIN;
	uint16_t x416 = 1U;

	t84 = (((x413+x414)/x415)-x416);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x417 = 5;
	static int16_t x418 = 359;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = INT8_MIN;
	uint32_t t85 = 11904663U;

	t85 = (((x417+x418)/x419)-x420);

	if (t85 != 128U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x421 = -1LL;
	volatile uint64_t x422 = UINT64_MAX;
	int32_t x424 = -26798;
	static volatile uint64_t t86 = 15410219LLU;

	t86 = (((x421+x422)/x423)-x424);

	if (t86 != 145249953336322480LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x425 = 28U;
	uint64_t x427 = UINT64_MAX;
	static uint64_t x428 = UINT64_MAX;
	static volatile uint64_t t87 = 14LLU;

	t87 = (((x425+x426)/x427)-x428);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x433 = 5U;
	int16_t x435 = 43;

	t88 = (((x433+x434)/x435)-x436);

	if (t88 != 908) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = -1;
	uint8_t x438 = UINT8_MAX;
	volatile int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MIN;
	int64_t t89 = INT64_MAX;

	t89 = (((x437+x438)/x439)-x440);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x447 = 5927LLU;
	volatile int8_t x448 = INT8_MIN;
	static uint64_t t90 = 105344871LLU;

	t90 = (((x445+x446)/x447)-x448);

	if (t90 != 1556161976861065LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x457 = INT8_MIN;
	volatile int32_t x458 = 104200;
	int8_t x459 = INT8_MIN;
	uint64_t x460 = 7774605575LLU;
	volatile uint64_t t91 = 426611750040058108LLU;

	t91 = (((x457+x458)/x459)-x460);

	if (t91 != 18446744065934945228LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x461 = UINT32_MAX;
	uint8_t x462 = 55U;
	static volatile int16_t x463 = INT16_MAX;
	uint32_t t92 = 17401U;

	t92 = (((x461+x462)/x463)-x464);

	if (t92 != 4294967251U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x466 = INT16_MIN;
	int32_t t93 = 5361118;

	t93 = (((x465+x466)/x467)-x468);

	if (t93 != 32772) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x473 = 883;
	int8_t x474 = INT8_MAX;
	int64_t x475 = INT64_MAX;
	uint64_t x476 = 61665793118116726LLU;
	static volatile uint64_t t94 = 2LLU;

	t94 = (((x473+x474)/x475)-x476);

	if (t94 != 18385078280591434890LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x477 = 560326006228955LLU;
	uint16_t x478 = UINT16_MAX;
	uint64_t x480 = UINT64_MAX;
	static volatile uint64_t t95 = 171549537038LLU;

	t95 = (((x477+x478)/x479)-x480);

	if (t95 != 560326006294491LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x481 = INT32_MAX;
	uint32_t x482 = UINT32_MAX;
	int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MAX;

	t96 = (((x481+x482)/x483)-x484);

	if (t96 != 2147483649U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = 0;
	int64_t x490 = INT64_MAX;
	uint8_t x491 = 8U;
	int64_t t97 = 1079220340337476LL;

	t97 = (((x489+x490)/x491)-x492);

	if (t97 != 1152921504606879743LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x505 = INT16_MIN;
	int64_t x507 = INT64_MAX;
	uint32_t x508 = 583283U;
	int64_t t98 = 92LL;

	t98 = (((x505+x506)/x507)-x508);

	if (t98 != -583283LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x509 = INT32_MAX;
	uint32_t x510 = UINT32_MAX;
	volatile uint32_t t99 = 21010419U;

	t99 = (((x509+x510)/x511)-x512);

	if (t99 != 32768U) { NG(); } else { ; }
	
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

