#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -2;
uint64_t x5 = UINT64_MAX;
uint16_t x15 = 560U;
uint8_t x17 = 51U;
static int32_t t4 = 221361461;
int16_t x31 = INT16_MAX;
uint64_t t7 = 17337950742327LLU;
volatile int64_t t11 = 15396LL;
int16_t x49 = 22;
uint16_t x50 = UINT16_MAX;
int32_t x56 = INT32_MIN;
uint32_t t14 = 237031U;
int64_t x61 = INT64_MIN;
int16_t x63 = -3922;
volatile int16_t x66 = -113;
int8_t x68 = 12;
static uint32_t x72 = UINT32_MAX;
int64_t x80 = INT64_MAX;
static uint16_t x82 = UINT16_MAX;
int32_t t22 = INT32_MAX;
int32_t x100 = 5724;
uint32_t x107 = 9504U;
int32_t t26 = -81907;
static volatile int16_t x116 = -1;
volatile int32_t t28 = 2328833;
static uint64_t t29 = 2480090785LLU;
volatile uint32_t x121 = UINT32_MAX;
int8_t x123 = -40;
volatile int64_t t30 = 457085294480LL;
static uint32_t x127 = UINT32_MAX;
uint8_t x129 = 1U;
uint8_t x133 = UINT8_MAX;
uint8_t x144 = 5U;
int8_t x147 = INT8_MIN;
static uint32_t x148 = 6077394U;
int32_t t36 = -446376;
int8_t x152 = -6;
int64_t x155 = 79276550997517136LL;
static volatile uint64_t x156 = 285153264787851LLU;
volatile uint32_t t38 = 1316097U;
volatile int32_t t40 = 1;
static int32_t x167 = -320563;
static uint32_t x168 = UINT32_MAX;
static uint64_t t41 = 12621LLU;
uint16_t x178 = 10997U;
int16_t x179 = -1;
volatile int64_t x180 = -1LL;
static int32_t x182 = INT32_MAX;
uint8_t x186 = UINT8_MAX;
volatile uint16_t x187 = UINT16_MAX;
int8_t x193 = 5;
int8_t x202 = INT8_MIN;
uint32_t x205 = UINT32_MAX;
volatile int16_t x209 = INT16_MIN;
static volatile int32_t t52 = -1973217;
uint64_t x215 = 28896209771LLU;
uint32_t x216 = 7655286U;
volatile int32_t x219 = INT32_MIN;
static uint32_t x222 = 189954461U;
static uint16_t x224 = 68U;
uint32_t t58 = 261U;
static int64_t t60 = -74241143794875LL;
static int32_t t61 = 9;
int16_t x257 = -9537;
uint16_t x276 = 18232U;
int16_t x277 = INT16_MIN;
uint32_t x287 = UINT32_MAX;
uint16_t x288 = UINT16_MAX;
int16_t x292 = INT16_MIN;
volatile int16_t x294 = INT16_MAX;
int32_t x297 = -1;
static uint8_t x308 = 124U;
static uint8_t x313 = UINT8_MAX;
static int32_t t78 = 0;
uint16_t x317 = 193U;
int64_t x318 = -255571LL;
int32_t x321 = INT32_MIN;
int8_t x322 = 12;
volatile int8_t x326 = -12;
volatile int16_t x327 = INT16_MAX;
int8_t x329 = -1;
static int64_t x335 = INT64_MIN;
uint64_t x336 = 8869645532135533652LLU;
static volatile int32_t t84 = 253616341;
uint8_t x341 = 2U;
volatile int32_t t85 = -55783900;
int32_t x347 = INT32_MIN;
uint32_t x350 = 108231596U;
volatile int8_t x356 = -1;
int8_t x358 = -1;
int8_t x363 = 0;
int16_t x364 = INT16_MAX;
volatile int64_t x369 = -330841LL;
int32_t x376 = INT32_MIN;
volatile int8_t x377 = 4;
int8_t x378 = -1;
int32_t x382 = INT32_MIN;
int8_t x386 = -1;
int32_t x388 = -3;
static int32_t x391 = -674372;
static volatile int32_t t97 = -8224;
int32_t t98 = -1;
int8_t x400 = -1;


void f0(void) {
	int8_t x1 = 16;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 33352940;

	t0 = (x1^(x2^(x3==x4)));

	if (t0 != -18) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = 0U;
	static uint8_t x7 = 17U;
	volatile uint8_t x8 = 1U;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5^(x6^(x7==x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	volatile uint32_t x10 = 65U;
	static int8_t x11 = -1;
	int16_t x12 = -12461;
	int64_t t2 = -4634602041453101LL;

	t2 = (x9^(x10^(x11==x12)));

	if (t2 != -9223372036854775743LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1436198071808LL;
	int8_t x14 = INT8_MIN;
	int16_t x16 = -1;
	volatile int64_t t3 = -29LL;

	t3 = (x13^(x14^(x15==x16)));

	if (t3 != -1436198071936LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	volatile uint64_t x19 = 20375336444185115LLU;
	int8_t x20 = 0;

	t4 = (x17^(x18^(x19==x20)));

	if (t4 != -2147483597) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 1260;
	volatile int8_t x22 = -1;
	uint16_t x23 = 13U;
	static int16_t x24 = 370;
	static volatile int32_t t5 = 2165664;

	t5 = (x21^(x22^(x23==x24)));

	if (t5 != -1261) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int64_t x26 = -283399698838120374LL;
	int16_t x27 = 636;
	uint8_t x28 = 0U;
	int64_t t6 = -3891627890457595127LL;

	t6 = (x25^(x26^(x27==x28)));

	if (t6 != 283399698479126602LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	uint64_t x30 = 4504222105477LLU;
	volatile int16_t x32 = INT16_MAX;

	t7 = (x29^(x30^(x31==x32)));

	if (t7 != 18446739569487478660LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = 1U;
	static uint8_t x35 = 2U;
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = 1;

	t8 = (x33^(x34^(x35==x36)));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 43930LLU;
	volatile int8_t x38 = -1;
	int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MAX;
	static uint64_t t9 = 24LLU;

	t9 = (x37^(x38^(x39==x40)));

	if (t9 != 18446744073709507685LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint8_t x42 = 16U;
	uint8_t x43 = 15U;
	volatile uint64_t x44 = 145LLU;
	int32_t t10 = -15;

	t10 = (x41^(x42^(x43==x44)));

	if (t10 != -17) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	int8_t x46 = -1;
	static int64_t x47 = -1LL;
	volatile int16_t x48 = -1;

	t11 = (x45^(x46^(x47==x48)));

	if (t11 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x51 = -1;
	volatile uint32_t x52 = 9234U;
	static volatile int32_t t12 = -874916;

	t12 = (x49^(x50^(x51==x52)));

	if (t12 != 65513) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static int8_t x54 = INT8_MAX;
	static int16_t x55 = 2;
	volatile int64_t t13 = -148LL;

	t13 = (x53^(x54^(x55==x56)));

	if (t13 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -5372028;
	volatile uint32_t x58 = UINT32_MAX;
	static int32_t x59 = -1;
	uint32_t x60 = 42740U;

	t14 = (x57^(x58^(x59==x60)));

	if (t14 != 5372027U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MAX;
	int8_t x64 = INT8_MAX;
	volatile int64_t t15 = 713207773LL;

	t15 = (x61^(x62^(x63==x64)));

	if (t15 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	static int64_t x67 = 15676LL;
	int32_t t16 = -200638;

	t16 = (x65^(x66^(x67==x68)));

	if (t16 != 112) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	uint32_t x70 = 44U;
	uint32_t x71 = 1505549U;
	uint32_t t17 = 475U;

	t17 = (x69^(x70^(x71==x72)));

	if (t17 != 4294967251U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 28U;
	static volatile int64_t x74 = INT64_MIN;
	uint16_t x75 = 31U;
	volatile int8_t x76 = INT8_MAX;
	int64_t t18 = 12424769049246LL;

	t18 = (x73^(x74^(x75==x76)));

	if (t18 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -22;
	uint64_t x78 = UINT64_MAX;
	int16_t x79 = 2881;
	uint64_t t19 = 4786149761LLU;

	t19 = (x77^(x78^(x79==x80)));

	if (t19 != 21LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	uint16_t x83 = UINT16_MAX;
	static uint64_t x84 = UINT64_MAX;
	int32_t t20 = 9578;

	t20 = (x81^(x82^(x83==x84)));

	if (t20 != -65536) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -1;
	int64_t x86 = -2969406351LL;
	volatile int32_t x87 = -2574851;
	int32_t x88 = INT32_MIN;
	static volatile int64_t t21 = 1632556187350426LL;

	t21 = (x85^(x86^(x87==x88)));

	if (t21 != 2969406350LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static volatile int8_t x90 = -1;
	uint16_t x91 = 250U;
	int64_t x92 = INT64_MIN;

	t22 = (x89^(x90^(x91==x92)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	volatile uint16_t x94 = 7U;
	int64_t x95 = 68LL;
	uint32_t x96 = 47974557U;
	volatile int32_t t23 = 15678;

	t23 = (x93^(x94^(x95==x96)));

	if (t23 != -8) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = 11;
	uint64_t x98 = 23465439397399842LLU;
	static int16_t x99 = 0;
	static volatile uint64_t t24 = 5632521948LLU;

	t24 = (x97^(x98^(x99==x100)));

	if (t24 != 23465439397399849LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	uint64_t x102 = 266097585267LLU;
	static uint32_t x103 = 28U;
	static int64_t x104 = INT64_MAX;
	volatile uint64_t t25 = 62924676765219832LLU;

	t25 = (x101^(x102^(x103==x104)));

	if (t25 != 18446743807611966451LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -27;
	volatile int8_t x106 = INT8_MAX;
	static int16_t x108 = INT16_MIN;

	t26 = (x105^(x106^(x107==x108)));

	if (t26 != -102) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	int64_t x110 = INT64_MAX;
	static int64_t x111 = -1LL;
	volatile int8_t x112 = -5;
	int64_t t27 = INT64_MIN;

	t27 = (x109^(x110^(x111==x112)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 16U;
	int16_t x114 = -1;
	int8_t x115 = INT8_MIN;

	t28 = (x113^(x114^(x115==x116)));

	if (t28 != -17) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int32_t x118 = 110;
	uint32_t x119 = UINT32_MAX;
	int32_t x120 = -1;

	t29 = (x117^(x118^(x119==x120)));

	if (t29 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	int64_t x124 = 191055007085315348LL;

	t30 = (x121^(x122^(x123==x124)));

	if (t30 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -132LL;
	uint8_t x126 = 1U;
	static int8_t x128 = -1;
	int64_t t31 = 740LL;

	t31 = (x125^(x126^(x127==x128)));

	if (t31 != -132LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = 2320LLU;
	static int64_t x131 = INT64_MIN;
	int8_t x132 = -1;
	static volatile uint64_t t32 = 41958652827LLU;

	t32 = (x129^(x130^(x131==x132)));

	if (t32 != 2321LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 2182U;
	static int8_t x135 = 5;
	static volatile uint32_t x136 = UINT32_MAX;
	int32_t t33 = 11985;

	t33 = (x133^(x134^(x135==x136)));

	if (t33 != 2169) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	static volatile uint16_t x138 = UINT16_MAX;
	uint8_t x139 = UINT8_MAX;
	static uint16_t x140 = UINT16_MAX;
	int64_t t34 = -225632827LL;

	t34 = (x137^(x138^(x139==x140)));

	if (t34 != -65536LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	volatile uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	uint32_t t35 = 0U;

	t35 = (x141^(x142^(x143==x144)));

	if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int16_t x146 = INT16_MAX;

	t36 = (x145^(x146^(x147==x148)));

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	static int8_t x150 = -10;
	uint64_t x151 = UINT64_MAX;
	int32_t t37 = -1;

	t37 = (x149^(x150^(x151==x152)));

	if (t37 != -65527) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 148943993U;
	int8_t x154 = INT8_MIN;

	t38 = (x153^(x154^(x155==x156)));

	if (t38 != 4146023417U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MAX;
	volatile uint32_t x160 = 2134U;
	volatile int64_t t39 = 46968519658298589LL;

	t39 = (x157^(x158^(x159==x160)));

	if (t39 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -63;
	int32_t x162 = 55237;
	int16_t x163 = INT16_MIN;
	int64_t x164 = -209273LL;

	t40 = (x161^(x162^(x163==x164)));

	if (t40 != -55292) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	uint64_t x166 = 32LLU;

	t41 = (x165^(x166^(x167==x168)));

	if (t41 != 9223372036854775775LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 1223U;
	int64_t x170 = INT64_MIN;
	volatile uint8_t x171 = 117U;
	volatile uint16_t x172 = 0U;
	int64_t t42 = 2154177799886336332LL;

	t42 = (x169^(x170^(x171==x172)));

	if (t42 != -9223372036854774585LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	static uint16_t x174 = 8115U;
	volatile uint32_t x175 = UINT32_MAX;
	static uint8_t x176 = 37U;
	volatile int32_t t43 = 1;

	t43 = (x173^(x174^(x175==x176)));

	if (t43 != -2147475533) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	static int32_t t44 = -23896378;

	t44 = (x177^(x178^(x179==x180)));

	if (t44 != 54539) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 7081228180316LLU;
	static uint32_t x183 = 1092U;
	static int32_t x184 = INT32_MIN;
	volatile uint64_t t45 = 1535390875439003255LLU;

	t45 = (x181^(x182^(x183==x184)));

	if (t45 != 7081426478243LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = -7;
	int8_t x188 = -1;
	volatile int32_t t46 = -17749505;

	t46 = (x185^(x186^(x187==x188)));

	if (t46 != -250) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 4924U;
	int8_t x190 = -1;
	int16_t x191 = INT16_MAX;
	int16_t x192 = 8143;
	static volatile int32_t t47 = -553;

	t47 = (x189^(x190^(x191==x192)));

	if (t47 != -4925) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x194 = -1LL;
	uint64_t x195 = UINT64_MAX;
	uint32_t x196 = UINT32_MAX;
	int64_t t48 = 2147814777960405LL;

	t48 = (x193^(x194^(x195==x196)));

	if (t48 != -6LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MIN;
	static uint16_t x198 = 1U;
	volatile uint8_t x199 = 92U;
	int32_t x200 = INT32_MAX;
	int32_t t49 = -5;

	t49 = (x197^(x198^(x199==x200)));

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 376144U;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	uint32_t t50 = 51538497U;

	t50 = (x201^(x202^(x203==x204)));

	if (t50 != 4294591184U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = INT16_MIN;
	int64_t x207 = -1LL;
	uint16_t x208 = 19076U;
	uint32_t t51 = 389445212U;

	t51 = (x205^(x206^(x207==x208)));

	if (t51 != 32767U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = -4;
	int16_t x211 = -1;
	volatile int32_t x212 = -1;

	t52 = (x209^(x210^(x211==x212)));

	if (t52 != 32765) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -28;
	volatile uint32_t x214 = 1021U;
	uint32_t t53 = 134455418U;

	t53 = (x213^(x214^(x215==x216)));

	if (t53 != 4294966297U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -1LL;
	uint32_t x218 = 51U;
	volatile int64_t x220 = -1LL;
	int64_t t54 = -1696801LL;

	t54 = (x217^(x218^(x219==x220)));

	if (t54 != -52LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 1U;
	int32_t x223 = -1;
	volatile uint32_t t55 = 25460U;

	t55 = (x221^(x222^(x223==x224)));

	if (t55 != 189954460U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	static int64_t x226 = INT64_MAX;
	int16_t x227 = INT16_MIN;
	volatile uint64_t x228 = 33721650394LLU;
	int64_t t56 = 12475583724LL;

	t56 = (x225^(x226^(x227==x228)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	static uint32_t x230 = 11081806U;
	int32_t x231 = -1;
	uint64_t x232 = 16024538298939223LLU;
	static volatile uint32_t t57 = 85U;

	t57 = (x229^(x230^(x231==x232)));

	if (t57 != 11081777U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	static uint32_t x234 = 7009U;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = INT64_MIN;

	t58 = (x233^(x234^(x235==x236)));

	if (t58 != 4294960353U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -8376;
	static uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MIN;
	static volatile uint8_t x240 = 0U;
	static uint64_t t59 = 34906537151LLU;

	t59 = (x237^(x238^(x239==x240)));

	if (t59 != 8375LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 59741U;
	int64_t x242 = -100LL;
	volatile uint32_t x243 = 2313U;
	static int64_t x244 = INT64_MAX;

	t60 = (x241^(x242^(x243==x244)));

	if (t60 != -59711LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -6;
	int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MAX;

	t61 = (x245^(x246^(x247==x248)));

	if (t61 != 32762) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	uint64_t x250 = 743969678083LLU;
	uint8_t x251 = UINT8_MAX;
	int32_t x252 = -1;
	volatile uint64_t t62 = 17218944867498LLU;

	t62 = (x249^(x250^(x251==x252)));

	if (t62 != 743969678204LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -1;
	uint32_t x254 = 33396449U;
	uint8_t x255 = UINT8_MAX;
	int16_t x256 = -1;
	uint32_t t63 = 260U;

	t63 = (x253^(x254^(x255==x256)));

	if (t63 != 4261570846U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = 83U;
	int32_t x259 = INT32_MIN;
	static volatile uint8_t x260 = UINT8_MAX;
	static int32_t t64 = 711018;

	t64 = (x257^(x258^(x259==x260)));

	if (t64 != -9492) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = 489504003;
	int16_t x263 = INT16_MAX;
	int16_t x264 = -1;
	int32_t t65 = 443143;

	t65 = (x261^(x262^(x263==x264)));

	if (t65 != -1657979645) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = -1;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 15U;
	int64_t t66 = INT64_MIN;

	t66 = (x265^(x266^(x267==x268)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = 267;
	int64_t x270 = -86767LL;
	int16_t x271 = INT16_MIN;
	int64_t x272 = 15115288511807LL;
	int64_t t67 = 1197073119644524658LL;

	t67 = (x269^(x270^(x271==x272)));

	if (t67 != -87014LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 32U;
	int32_t x274 = -1;
	int64_t x275 = 8096LL;
	static int32_t t68 = -3073132;

	t68 = (x273^(x274^(x275==x276)));

	if (t68 != -33) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = 540LL;
	static volatile int16_t x279 = -1;
	volatile int64_t x280 = 377617804917624961LL;
	int64_t t69 = -661110830281348324LL;

	t69 = (x277^(x278^(x279==x280)));

	if (t69 != -32228LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = 19;
	static int32_t x282 = -1;
	int64_t x283 = INT64_MIN;
	uint8_t x284 = 9U;
	volatile int32_t t70 = -7;

	t70 = (x281^(x282^(x283==x284)));

	if (t70 != -20) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	static uint64_t x286 = 6168613355033604LLU;
	static uint64_t t71 = 28159073LLU;

	t71 = (x285^(x286^(x287==x288)));

	if (t71 != 9229540650209809412LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MAX;
	uint32_t x291 = UINT32_MAX;
	int32_t t72 = 32345329;

	t72 = (x289^(x290^(x291==x292)));

	if (t72 != -2147483521) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -1;
	uint8_t x295 = 121U;
	volatile int16_t x296 = INT16_MAX;
	int32_t t73 = -795172;

	t73 = (x293^(x294^(x295==x296)));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = -1;
	volatile int16_t x299 = INT16_MAX;
	static int32_t x300 = INT32_MIN;
	int32_t t74 = -87062805;

	t74 = (x297^(x298^(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -296;
	int16_t x302 = -4893;
	int8_t x303 = INT8_MIN;
	static int8_t x304 = INT8_MIN;
	volatile int32_t t75 = -121442;

	t75 = (x301^(x302^(x303==x304)));

	if (t75 != 4666) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	int8_t x306 = 19;
	static uint32_t x307 = 6U;
	int32_t t76 = 743812;

	t76 = (x305^(x306^(x307==x308)));

	if (t76 != 65516) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 2675LL;
	static volatile uint16_t x310 = UINT16_MAX;
	int16_t x311 = -1;
	volatile uint16_t x312 = 12U;
	volatile int64_t t77 = 253457886LL;

	t77 = (x309^(x310^(x311==x312)));

	if (t77 != 62860LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -2540500;
	int16_t x315 = INT16_MIN;
	static volatile int16_t x316 = INT16_MAX;

	t78 = (x313^(x314^(x315==x316)));

	if (t78 != -2540333) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x319 = 41524062215920LLU;
	uint32_t x320 = 16369381U;
	int64_t t79 = 357842LL;

	t79 = (x317^(x318^(x319==x320)));

	if (t79 != -255636LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x323 = 371102329705LL;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t80 = -3692531;

	t80 = (x321^(x322^(x323==x324)));

	if (t80 != -2147483636) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 14926749U;
	uint64_t x328 = 54088695265LLU;
	static uint32_t t81 = 62932904U;

	t81 = (x325^(x326^(x327==x328)));

	if (t81 != 4280040553U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = -14;
	uint32_t x331 = 304U;
	uint16_t x332 = 10334U;
	volatile int32_t t82 = 699850;

	t82 = (x329^(x330^(x331==x332)));

	if (t82 != 13) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	int32_t x334 = -1;
	int32_t t83 = 5439;

	t83 = (x333^(x334^(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	static uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MIN;
	int8_t x340 = 0;

	t84 = (x337^(x338^(x339==x340)));

	if (t84 != -256) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x342 = INT8_MIN;
	uint8_t x343 = UINT8_MAX;
	volatile int8_t x344 = INT8_MIN;

	t85 = (x341^(x342^(x343==x344)));

	if (t85 != -126) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x345 = UINT32_MAX;
	int8_t x346 = -3;
	int32_t x348 = INT32_MIN;
	uint32_t t86 = 133060735U;

	t86 = (x345^(x346^(x347==x348)));

	if (t86 != 3U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -39164366;
	volatile int64_t x351 = INT64_MIN;
	int32_t x352 = -1;
	volatile uint32_t t87 = 2959U;

	t87 = (x349^(x350^(x351==x352)));

	if (t87 != 4225310110U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -508;
	uint32_t x354 = 126564565U;
	uint32_t x355 = 10658U;
	volatile uint32_t t88 = 57U;

	t88 = (x353^(x354^(x355==x356)));

	if (t88 != 4168402641U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 26U;
	int32_t x359 = -1;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -13627;

	t89 = (x357^(x358^(x359==x360)));

	if (t89 != -27) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 56U;
	int32_t x362 = INT32_MIN;
	int32_t t90 = 128522474;

	t90 = (x361^(x362^(x363==x364)));

	if (t90 != -2147483592) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MAX;
	uint64_t x366 = 2LLU;
	volatile uint64_t x367 = 3865229890018569468LLU;
	int8_t x368 = -1;
	uint64_t t91 = 117520985LLU;

	t91 = (x365^(x366^(x367==x368)));

	if (t91 != 32765LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MAX;
	uint16_t x372 = 13612U;
	uint64_t t92 = 338741LLU;

	t92 = (x369^(x370^(x371==x372)));

	if (t92 != 330840LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	int8_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	int32_t t93 = 0;

	t93 = (x373^(x374^(x375==x376)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x379 = -1LL;
	int8_t x380 = -1;
	int32_t t94 = -146450;

	t94 = (x377^(x378^(x379==x380)));

	if (t94 != -6) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	static int16_t x383 = INT16_MIN;
	uint16_t x384 = 132U;
	volatile int32_t t95 = -12;

	t95 = (x381^(x382^(x383==x384)));

	if (t95 != -2147483393) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = UINT64_MAX;
	uint16_t x387 = 243U;
	static uint64_t t96 = 14438LLU;

	t96 = (x385^(x386^(x387==x388)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -56;
	static int16_t x390 = -1;
	uint32_t x392 = 7586743U;

	t97 = (x389^(x390^(x391==x392)));

	if (t97 != 55) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = UINT16_MAX;
	uint16_t x394 = 13996U;
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MIN;

	t98 = (x393^(x394^(x395==x396)));

	if (t98 != 51539) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 238U;
	static volatile int64_t x398 = 61822751988164LL;
	volatile int32_t x399 = -1;
	volatile int64_t t99 = -34394223168955LL;

	t99 = (x397^(x398^(x399==x400)));

	if (t99 != 61822751988011LL) { NG(); } else { ; }
	
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

