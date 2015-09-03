#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
volatile int8_t x16 = INT8_MIN;
uint8_t x19 = 3U;
uint32_t t4 = 178403333U;
int32_t t6 = -6947;
static int16_t x30 = 2790;
uint64_t t7 = 9932176358942129LLU;
static int32_t x37 = INT32_MIN;
static volatile int32_t x40 = -26601;
static int64_t x42 = -161494LL;
int8_t x49 = -1;
static int16_t x56 = INT16_MIN;
volatile uint64_t t13 = 383309553581164LLU;
volatile uint16_t x57 = UINT16_MAX;
static int32_t t14 = -2219821;
volatile int64_t x65 = 13724557414LL;
int64_t x71 = -34857771446337354LL;
int64_t x74 = 175821815019LL;
volatile int32_t x79 = 28707;
volatile int32_t t19 = -552;
volatile uint16_t x83 = 27520U;
uint64_t x86 = 1LLU;
volatile int32_t x91 = -1;
uint64_t t24 = 344LLU;
int8_t x104 = -1;
int32_t t25 = -5637;
int32_t x105 = INT32_MAX;
uint32_t x112 = UINT32_MAX;
uint32_t t27 = 877U;
int64_t x114 = INT64_MIN;
static uint16_t x118 = 17059U;
uint32_t x122 = 3894U;
volatile uint64_t t30 = 6157716LLU;
uint8_t x125 = UINT8_MAX;
static int64_t x128 = INT64_MIN;
static volatile int16_t x133 = 215;
int32_t x136 = INT32_MAX;
volatile uint64_t t35 = 5944040LLU;
volatile uint64_t x147 = 102535LLU;
volatile int64_t t38 = 2915029LL;
uint8_t x160 = 8U;
int32_t x164 = INT32_MAX;
int8_t x166 = INT8_MIN;
int16_t x168 = 16;
int16_t x176 = 585;
uint32_t x179 = 3U;
volatile uint64_t t44 = UINT64_MAX;
static int32_t x190 = INT32_MAX;
static volatile int64_t x208 = INT64_MIN;
volatile int32_t x218 = -1;
static uint16_t x221 = 4081U;
uint16_t x227 = 1U;
volatile uint32_t t54 = 11268U;
uint64_t t56 = 518227771326992LLU;
volatile int8_t x244 = INT8_MAX;
volatile int16_t x245 = -1;
uint16_t x246 = 8491U;
uint64_t t58 = 522520590424776041LLU;
static uint16_t x249 = UINT16_MAX;
int64_t x255 = INT64_MIN;
volatile int32_t t61 = -46464;
int16_t x261 = INT16_MIN;
int64_t x264 = 1090845472893874LL;
int64_t t62 = 1LL;
int8_t x267 = INT8_MIN;
uint64_t x268 = 3161LLU;
static uint32_t x271 = 239258U;
volatile int32_t x272 = 234055;
volatile uint32_t t64 = 797182144U;
static int8_t x273 = INT8_MAX;
int16_t x275 = -1;
int16_t x278 = -10295;
uint32_t x285 = 3260U;
static volatile uint32_t x287 = UINT32_MAX;
int16_t x290 = INT16_MIN;
int8_t x297 = -2;
int32_t x302 = INT32_MAX;
int16_t x305 = 1;
uint64_t t72 = 64346LLU;
int16_t x313 = INT16_MIN;
int64_t x314 = -20775344LL;
uint16_t x315 = UINT16_MAX;
volatile int8_t x319 = INT8_MIN;
static uint8_t x320 = 0U;
volatile int64_t t77 = 383LL;
static int64_t x329 = INT64_MIN;
volatile uint64_t x334 = UINT64_MAX;
volatile uint8_t x336 = 1U;
uint64_t x337 = 252076699917611LLU;
uint8_t x341 = 17U;
int8_t x343 = 1;
uint8_t x344 = 12U;
int8_t x355 = INT8_MIN;
int8_t x365 = 3;
int16_t x366 = -1;
int32_t x383 = INT32_MIN;
static uint32_t x389 = 6028U;
volatile int8_t x408 = -1;
static uint64_t x423 = 1329535647159025LLU;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x3 = -377;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -10;

	t0 = (((x1^x2)|x3)+x4);

	if (t0 != 2147483646) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1388601LL;
	int16_t x6 = INT16_MIN;
	static uint8_t x7 = 43U;
	uint64_t x8 = 362246LLU;
	volatile uint64_t t1 = 125070704024LLU;

	t1 = (((x5^x6)|x7)+x8);

	if (t1 != 1758965LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 289U;
	int16_t x10 = 13275;
	static int64_t x11 = INT64_MIN;
	volatile uint32_t x12 = UINT32_MAX;
	int64_t t2 = 19711789040006807LL;

	t2 = (((x9^x10)|x11)+x12);

	if (t2 != -9223372032559795463LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int8_t x14 = INT8_MAX;
	int16_t x15 = 0;
	volatile int64_t t3 = -24139755456407802LL;

	t3 = (((x13^x14)|x15)+x16);

	if (t3 != -256LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -150;
	static int16_t x18 = -1;
	volatile uint32_t x20 = 63807U;

	t4 = (((x17^x18)|x19)+x20);

	if (t4 != 63958U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	volatile uint32_t x22 = UINT32_MAX;
	volatile int64_t x23 = 1249LL;
	volatile int16_t x24 = 1;
	int64_t t5 = -261813470994LL;

	t5 = (((x21^x22)|x23)+x24);

	if (t5 != 1280LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	volatile int32_t x26 = INT32_MIN;
	static int16_t x27 = 23;
	int16_t x28 = -12;

	t6 = (((x25^x26)|x27)+x28);

	if (t6 != 2147483635) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 7U;
	uint16_t x31 = 75U;
	uint64_t x32 = UINT64_MAX;

	t7 = (((x29^x30)|x31)+x32);

	if (t7 != 2794LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	uint8_t x34 = 41U;
	volatile uint8_t x35 = 58U;
	volatile int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -1;

	t8 = (((x33^x34)|x35)+x36);

	if (t8 != -2147418114) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -3737880;
	int64_t x39 = 39169193370504077LL;
	int64_t t9 = -14458109LL;

	t9 = (((x37^x38)|x39)+x40);

	if (t9 != 39169195501328388LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MIN;
	int64_t t10 = -3563920831LL;

	t10 = (((x41^x42)|x43)+x44);

	if (t10 != -2147382998LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int32_t x46 = INT32_MAX;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = 3669368U;
	volatile uint32_t t11 = 49437U;

	t11 = (((x45^x46)|x47)+x48);

	if (t11 != 3669112U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 56U;
	static int16_t x51 = INT16_MIN;
	volatile uint32_t x52 = 899U;
	volatile uint32_t t12 = 0U;

	t12 = (((x49^x50)|x51)+x52);

	if (t12 != 842U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 511LLU;
	static int16_t x54 = -1;
	int32_t x55 = -1;

	t13 = (((x53^x54)|x55)+x56);

	if (t13 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = 11;
	int32_t x59 = -1;
	uint8_t x60 = 1U;

	t14 = (((x57^x58)|x59)+x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = -1;
	static volatile uint16_t x63 = 14U;
	volatile int8_t x64 = INT8_MIN;
	int32_t t15 = -21975139;

	t15 = (((x61^x62)|x63)+x64);

	if (t15 != 2147483519) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -1;
	int16_t x67 = INT16_MIN;
	volatile uint64_t x68 = 79LLU;
	uint64_t t16 = 10389LLU;

	t16 = (((x65^x66)|x67)+x68);

	if (t16 != 18446744073709543400LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	static int16_t x70 = -75;
	volatile int64_t x72 = 1368945138992LL;
	int64_t t17 = 17225766225274905LL;

	t17 = (((x69^x70)|x71)+x72);

	if (t17 != -34856402501198290LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -2272615383615LL;
	static int16_t x75 = -23;
	volatile uint32_t x76 = 805143U;
	int64_t t18 = 976698170573468926LL;

	t18 = (((x73^x74)|x75)+x76);

	if (t18 != 805122LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = 197;
	static int32_t x78 = INT32_MAX;
	int16_t x80 = -1;

	t19 = (((x77^x78)|x79)+x80);

	if (t19 != 2147483450) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	int16_t x82 = -1;
	int32_t x84 = -15;
	volatile int32_t t20 = 1206;

	t20 = (((x81^x82)|x83)+x84);

	if (t20 != 27632) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -915;
	uint32_t x87 = UINT32_MAX;
	static int32_t x88 = INT32_MIN;
	volatile uint64_t t21 = 1140307348LLU;

	t21 = (((x85^x86)|x87)+x88);

	if (t21 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MAX;
	static volatile int64_t x90 = INT64_MIN;
	int32_t x92 = INT32_MIN;
	volatile int64_t t22 = 2603975862208LL;

	t22 = (((x89^x90)|x91)+x92);

	if (t22 != -2147483649LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 32548899189LL;
	uint16_t x94 = 113U;
	static int16_t x95 = INT16_MAX;
	int32_t x96 = 3;
	volatile int64_t t23 = -100935659LL;

	t23 = (((x93^x94)|x95)+x96);

	if (t23 != 32548913154LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	volatile int16_t x99 = INT16_MAX;
	static volatile uint64_t x100 = 662513839708991LLU;

	t24 = (((x97^x98)|x99)+x100);

	if (t24 != 662513839741758LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x101 = UINT16_MAX;
	int32_t x102 = -1;
	int8_t x103 = INT8_MIN;

	t25 = (((x101^x102)|x103)+x104);

	if (t25 != -129) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MIN;
	volatile int32_t x107 = INT32_MIN;
	int8_t x108 = 1;
	static volatile int32_t t26 = -13495284;

	t26 = (((x105^x106)|x107)+x108);

	if (t26 != -2147450880) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 1U;
	static uint8_t x110 = 1U;
	uint32_t x111 = 67613U;

	t27 = (((x109^x110)|x111)+x112);

	if (t27 != 67612U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 3U;
	int8_t x115 = -1;
	uint64_t x116 = UINT64_MAX;
	static uint64_t t28 = 237627043064480LLU;

	t28 = (((x113^x114)|x115)+x116);

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static int8_t x119 = 3;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = -982414902;

	t29 = (((x117^x118)|x119)+x120);

	if (t29 != -16862) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x121 = UINT64_MAX;
	volatile int16_t x123 = INT16_MIN;
	uint32_t x124 = UINT32_MAX;

	t30 = (((x121^x122)|x123)+x124);

	if (t30 != 4294963400LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = 17453828LLU;
	volatile uint8_t x127 = UINT8_MAX;
	volatile uint64_t t31 = 14359824735LLU;

	t31 = (((x125^x126)|x127)+x128);

	if (t31 != 9223372036872229887LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = -2413953753638LL;
	int64_t x130 = -4272285019043LL;
	int32_t x131 = INT32_MAX;
	int16_t x132 = 1340;
	volatile int64_t t32 = -159024933886527913LL;

	t32 = (((x129^x130)|x131)+x132);

	if (t32 != 1997159793979LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x134 = -37;
	int8_t x135 = -1;
	volatile int32_t t33 = -33331201;

	t33 = (((x133^x134)|x135)+x136);

	if (t33 != 2147483646) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	volatile uint16_t x138 = 6700U;
	volatile uint8_t x139 = 113U;
	uint16_t x140 = 88U;
	int32_t t34 = -785176;

	t34 = (((x137^x138)|x139)+x140);

	if (t34 != 6859) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	static uint64_t x142 = 168142460580677570LLU;
	int16_t x143 = INT16_MIN;
	int8_t x144 = 0;

	t35 = (((x141^x142)|x143)+x144);

	if (t35 != 18446744073709533245LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = 3607;
	volatile int8_t x146 = INT8_MIN;
	int16_t x148 = INT16_MAX;
	volatile uint64_t t36 = 16079936514LLU;

	t36 = (((x145^x146)|x147)+x148);

	if (t36 != 29078LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	volatile int64_t x150 = 93568542609849LL;
	int8_t x151 = 21;
	int16_t x152 = INT16_MAX;
	int64_t t37 = -358LL;

	t37 = (((x149^x150)|x151)+x152);

	if (t37 != -93568542577092LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -1;
	int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MAX;
	static int16_t x156 = INT16_MIN;

	t38 = (((x153^x154)|x155)+x156);

	if (t38 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 0U;
	static volatile uint16_t x158 = UINT16_MAX;
	int8_t x159 = INT8_MAX;
	int32_t t39 = 0;

	t39 = (((x157^x158)|x159)+x160);

	if (t39 != 65543) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	volatile int8_t x162 = -5;
	int8_t x163 = -5;
	static volatile int64_t t40 = 592811LL;

	t40 = (((x161^x162)|x163)+x164);

	if (t40 != 2147483642LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 9003840U;
	int16_t x167 = INT16_MIN;
	volatile uint32_t t41 = 97816U;

	t41 = (((x165^x166)|x167)+x168);

	if (t41 != 4294941904U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	volatile int64_t x170 = INT64_MAX;
	static volatile uint64_t x171 = UINT64_MAX;
	static int8_t x172 = INT8_MAX;
	static volatile uint64_t t42 = 496428894830443LLU;

	t42 = (((x169^x170)|x171)+x172);

	if (t42 != 126LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MIN;
	static int64_t x175 = 11LL;
	volatile int64_t t43 = -498LL;

	t43 = (((x173^x174)|x175)+x176);

	if (t43 != -9223372036854774968LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	int64_t x180 = INT64_MIN;

	t44 = (((x177^x178)|x179)+x180);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MIN;
	uint64_t t45 = 18419154299548010LLU;

	t45 = (((x181^x182)|x183)+x184);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = UINT64_MAX;
	uint8_t x191 = UINT8_MAX;
	int32_t x192 = 1;
	uint64_t t46 = 611882680LLU;

	t46 = (((x189^x190)|x191)+x192);

	if (t46 != 18446744071562068224LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -3;
	uint16_t x194 = 243U;
	uint32_t x195 = 1885U;
	volatile int16_t x196 = -1;
	uint32_t t47 = 104225U;

	t47 = (((x193^x194)|x195)+x196);

	if (t47 != 4294967134U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = 1888044936LL;
	volatile int8_t x199 = 1;
	volatile uint32_t x200 = UINT32_MAX;
	static volatile int64_t t48 = -3428588436LL;

	t48 = (((x197^x198)|x199)+x200);

	if (t48 != 6183008374LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -140649773750192232LL;
	int32_t x206 = INT32_MIN;
	uint32_t x207 = UINT32_MAX;
	int64_t t49 = 13LL;

	t49 = (((x205^x206)|x207)+x208);

	if (t49 != -9082722260321566721LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -43600;
	int16_t x210 = INT16_MIN;
	int32_t x211 = -1;
	int8_t x212 = -1;
	int32_t t50 = 940013;

	t50 = (((x209^x210)|x211)+x212);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 0LLU;
	uint64_t t51 = 2161205900304604375LLU;

	t51 = (((x217^x218)|x219)+x220);

	if (t51 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x222 = 1059586185LLU;
	volatile uint8_t x223 = 0U;
	uint64_t x224 = 2164473165960364LLU;
	volatile uint64_t t52 = 21529LLU;

	t52 = (((x221^x222)|x223)+x224);

	if (t52 != 2164474225550372LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	int16_t x228 = 41;
	volatile int64_t t53 = 6475111881LL;

	t53 = (((x225^x226)|x227)+x228);

	if (t53 != 9223372036854775722LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x229 = UINT8_MAX;
	uint16_t x230 = 1U;
	uint32_t x231 = 2993U;
	int32_t x232 = -10456767;

	t54 = (((x229^x230)|x231)+x232);

	if (t54 != 4284513600U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -1;
	int64_t x234 = 5987101LL;
	volatile int8_t x235 = INT8_MIN;
	int64_t x236 = 258198198LL;
	volatile int64_t t55 = -1LL;

	t55 = (((x233^x234)|x235)+x236);

	if (t55 != 258198168LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 35572324184LLU;
	int64_t x238 = -1LL;
	uint16_t x239 = 36U;
	volatile int16_t x240 = 10218;

	t56 = (((x237^x238)|x239)+x240);

	if (t56 != 18446744038137237649LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x242 = 18LLU;
	static int64_t x243 = INT64_MIN;
	static volatile uint64_t t57 = 44825915115259LLU;

	t57 = (((x241^x242)|x243)+x244);

	if (t57 != 18446744073709518993LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x247 = INT8_MAX;
	uint64_t x248 = UINT64_MAX;

	t58 = (((x245^x246)|x247)+x248);

	if (t58 != 18446744073709543166LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x250 = 242475319799709LLU;
	static uint32_t x251 = 16973143U;
	uint64_t x252 = UINT64_MAX;
	static volatile uint64_t t59 = 498625LLU;

	t59 = (((x249^x250)|x251)+x252);

	if (t59 != 242475319950710LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x254 = INT32_MIN;
	static uint16_t x256 = 172U;
	static int64_t t60 = 4229LL;

	t60 = (((x253^x254)|x255)+x256);

	if (t60 != -2147417941LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = -1;
	static int32_t x258 = -1;
	static int8_t x259 = -1;
	int32_t x260 = 129195;

	t61 = (((x257^x258)|x259)+x260);

	if (t61 != 129194) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x262 = 3U;
	int16_t x263 = -10;

	t62 = (((x261^x262)|x263)+x264);

	if (t62 != 1090845472893865LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x265 = INT64_MIN;
	static uint16_t x266 = 2254U;
	uint64_t t63 = 2292284LLU;

	t63 = (((x265^x266)|x267)+x268);

	if (t63 != 3111LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -1;
	int8_t x270 = INT8_MIN;

	t64 = (((x269^x270)|x271)+x272);

	if (t64 != 473414U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x274 = 655098133LLU;
	static int8_t x276 = -1;
	static volatile uint64_t t65 = 4658LLU;

	t65 = (((x273^x274)|x275)+x276);

	if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = 203;
	int16_t x279 = -1;
	volatile int64_t x280 = 10826LL;
	int64_t t66 = -59952LL;

	t66 = (((x277^x278)|x279)+x280);

	if (t66 != 10825LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x281 = INT32_MAX;
	uint16_t x282 = 62U;
	static uint32_t x283 = 147770825U;
	uint16_t x284 = 214U;
	uint32_t t67 = 157202853U;

	t67 = (((x281^x282)|x283)+x284);

	if (t67 != 2147483807U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x286 = INT32_MIN;
	int64_t x288 = -58385010164401930LL;
	volatile int64_t t68 = -5817777LL;

	t68 = (((x285^x286)|x287)+x288);

	if (t68 != -58385005869434635LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x289 = 15715075U;
	int16_t x291 = -1;
	int64_t x292 = -1538581256087797047LL;
	volatile int64_t t69 = -436926241124885665LL;

	t69 = (((x289^x290)|x291)+x292);

	if (t69 != -1538581251792829752LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x298 = -3;
	int32_t x299 = -1;
	static int64_t x300 = INT64_MAX;
	static volatile int64_t t70 = 6269732782283LL;

	t70 = (((x297^x298)|x299)+x300);

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x301 = 3U;
	int64_t x303 = -11992LL;
	static int16_t x304 = INT16_MIN;
	int64_t t71 = -7LL;

	t71 = (((x301^x302)|x303)+x304);

	if (t71 != -32772LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MAX;
	static int16_t x308 = -31;

	t72 = (((x305^x306)|x307)+x308);

	if (t72 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x309 = INT32_MIN;
	int64_t x310 = -1LL;
	int64_t x311 = INT64_MAX;
	static int64_t x312 = -2940045386LL;
	volatile int64_t t73 = -917016840584LL;

	t73 = (((x309^x310)|x311)+x312);

	if (t73 != 9223372033914730421LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x316 = INT8_MIN;
	static volatile int64_t t74 = -4935152762727LL;

	t74 = (((x313^x314)|x315)+x316);

	if (t74 != 20840319LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = -1;
	int32_t x318 = -4768;
	volatile int32_t t75 = 1;

	t75 = (((x317^x318)|x319)+x320);

	if (t75 != -97) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = INT32_MIN;
	volatile uint8_t x322 = UINT8_MAX;
	uint64_t x323 = 2888LLU;
	uint64_t x324 = UINT64_MAX;
	uint64_t t76 = 36063706888LLU;

	t76 = (((x321^x322)|x323)+x324);

	if (t76 != 18446744071562071038LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MAX;
	int8_t x326 = INT8_MAX;
	uint16_t x327 = 1U;
	volatile int8_t x328 = INT8_MIN;

	t77 = (((x325^x326)|x327)+x328);

	if (t77 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x330 = -1;
	uint8_t x331 = 0U;
	static int64_t x332 = -1LL;
	int64_t t78 = 1710936538LL;

	t78 = (((x329^x330)|x331)+x332);

	if (t78 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x333 = -1;
	int32_t x335 = INT32_MIN;
	static uint64_t t79 = 50LLU;

	t79 = (((x333^x334)|x335)+x336);

	if (t79 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x338 = -31514999796748403LL;
	int16_t x339 = -1;
	int64_t x340 = -1LL;
	volatile uint64_t t80 = 726LLU;

	t80 = (((x337^x338)|x339)+x340);

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x342 = INT16_MAX;
	static volatile int32_t t81 = -28439951;

	t81 = (((x341^x342)|x343)+x344);

	if (t81 != 32763) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x349 = -3;
	int64_t x350 = -1LL;
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;
	volatile int64_t t82 = -2072656LL;

	t82 = (((x349^x350)|x351)+x352);

	if (t82 != -2147516414LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = -1;
	volatile int64_t x354 = -31491802456002LL;
	static int32_t x356 = -1;
	int64_t t83 = 3451897939415LL;

	t83 = (((x353^x354)|x355)+x356);

	if (t83 != -64LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x357 = 252;
	uint32_t x358 = 1098664U;
	uint64_t x359 = 233350600LLU;
	static uint16_t x360 = 28U;
	uint64_t t84 = 4453753447373492LLU;

	t84 = (((x357^x358)|x359)+x360);

	if (t84 != 234416120LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = 8U;
	int64_t x362 = -33LL;
	static volatile int64_t x363 = INT64_MIN;
	static volatile uint32_t x364 = 1773758798U;
	int64_t t85 = -6LL;

	t85 = (((x361^x362)|x363)+x364);

	if (t85 != 1773758757LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x367 = -3574;
	uint64_t x368 = 1920472819504041LLU;
	static uint64_t t86 = 56063650642LLU;

	t86 = (((x365^x366)|x367)+x368);

	if (t86 != 1920472819504039LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x369 = 1;
	int8_t x370 = INT8_MIN;
	int16_t x371 = -1;
	volatile uint64_t x372 = 14061013LLU;
	volatile uint64_t t87 = 243LLU;

	t87 = (((x369^x370)|x371)+x372);

	if (t87 != 14061012LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = 271463;
	int64_t x379 = 57601465LL;
	uint8_t x380 = 59U;
	volatile int64_t t88 = 582452795860412991LL;

	t88 = (((x377^x378)|x379)+x380);

	if (t88 != -4550LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t89 = 2802;

	t89 = (((x381^x382)|x383)+x384);

	if (t89 != -65409) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = INT64_MAX;
	static int8_t x386 = -1;
	int64_t x387 = INT64_MAX;
	uint32_t x388 = 1074122440U;
	int64_t t90 = -6LL;

	t90 = (((x385^x386)|x387)+x388);

	if (t90 != 1074122439LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x390 = 28U;
	volatile uint64_t x391 = 270736971763715LLU;
	int32_t x392 = INT32_MAX;
	volatile uint64_t t91 = 1555444573LLU;

	t91 = (((x389^x390)|x391)+x392);

	if (t91 != 270739119249298LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x393 = 642206213LLU;
	uint16_t x394 = 5U;
	static uint32_t x395 = 49933054U;
	int16_t x396 = INT16_MIN;
	uint64_t t92 = 954908015LLU;

	t92 = (((x393^x394)|x395)+x396);

	if (t92 != 654273278LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x397 = 123714487300322LL;
	int64_t x398 = -477272936274232LL;
	int64_t x399 = -1LL;
	static int16_t x400 = 248;
	static volatile int64_t t93 = -69526LL;

	t93 = (((x397^x398)|x399)+x400);

	if (t93 != 247LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x401 = INT8_MIN;
	uint32_t x402 = 1904U;
	static uint32_t x403 = UINT32_MAX;
	uint32_t x404 = UINT32_MAX;
	volatile uint32_t t94 = 2U;

	t94 = (((x401^x402)|x403)+x404);

	if (t94 != 4294967294U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x405 = INT64_MIN;
	uint32_t x406 = 1297292U;
	volatile int32_t x407 = INT32_MIN;
	static int64_t t95 = -32LL;

	t95 = (((x405^x406)|x407)+x408);

	if (t95 != -2146186357LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = INT64_MAX;
	int64_t x410 = INT64_MIN;
	int32_t x411 = INT32_MIN;
	int32_t x412 = 0;
	static int64_t t96 = 56536583511LL;

	t96 = (((x409^x410)|x411)+x412);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x413 = INT8_MAX;
	static uint64_t x414 = 11337279182757LLU;
	uint32_t x415 = 19U;
	int8_t x416 = -1;
	uint64_t t97 = 663306143042019LLU;

	t97 = (((x413^x414)|x415)+x416);

	if (t97 != 11337279182810LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x417 = INT64_MIN;
	uint64_t x418 = UINT64_MAX;
	int64_t x419 = -4494LL;
	static int32_t x420 = 33;
	uint64_t t98 = 773277825980825LLU;

	t98 = (((x417^x418)|x419)+x420);

	if (t98 != 32LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = UINT32_MAX;
	int16_t x422 = INT16_MAX;
	int16_t x424 = INT16_MIN;
	uint64_t t99 = 1825614891670917529LLU;

	t99 = (((x421^x422)|x423)+x424);

	if (t99 != 1329537191187185LLU) { NG(); } else { ; }
	
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

