#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
volatile uint16_t x4 = 212U;
volatile int8_t x13 = INT8_MAX;
uint64_t x16 = 2128234311555600974LLU;
int32_t x20 = INT32_MIN;
volatile int64_t t8 = -26174LL;
int16_t x44 = INT16_MIN;
int64_t x48 = INT64_MIN;
volatile int8_t x50 = -1;
volatile uint32_t t13 = 382456783U;
static uint64_t x73 = UINT64_MAX;
uint8_t x79 = 15U;
static int32_t t20 = -31556;
volatile uint16_t x86 = 14U;
volatile uint64_t x96 = 3425223921LLU;
uint64_t t24 = 968834079LLU;
int64_t x111 = INT64_MAX;
int64_t x114 = 243228155398863LL;
int64_t t29 = INT64_MIN;
int16_t x121 = -379;
volatile int8_t x122 = -12;
static int32_t x123 = INT32_MIN;
uint64_t x124 = UINT64_MAX;
static int16_t x128 = INT16_MIN;
volatile uint64_t t31 = 4545810104389617834LLU;
uint8_t x140 = UINT8_MAX;
int64_t x149 = 6514LL;
int64_t t38 = -4116377624926924384LL;
uint8_t x163 = UINT8_MAX;
int32_t x165 = INT32_MIN;
volatile int8_t x166 = 1;
static uint64_t x168 = 34167355398LLU;
static uint64_t t40 = 30116019047158806LLU;
static int8_t x170 = INT8_MIN;
int8_t x172 = INT8_MAX;
int32_t t41 = -37404;
uint64_t t42 = 86576LLU;
int16_t x177 = -1;
static volatile int64_t t46 = 881877587345767LL;
volatile int32_t x200 = INT32_MIN;
int64_t t49 = -4733123LL;
uint64_t x205 = UINT64_MAX;
static volatile int32_t x207 = INT32_MIN;
int32_t x211 = -244;
int64_t x215 = 36192779254190LL;
volatile int64_t t52 = -63396LL;
int32_t t53 = 0;
static int32_t x221 = -284765347;
int8_t x223 = -1;
int32_t x225 = INT32_MIN;
int32_t x227 = INT32_MIN;
static int64_t t55 = -1694984735576895LL;
int16_t x231 = INT16_MAX;
uint64_t t56 = UINT64_MAX;
int8_t x233 = INT8_MIN;
int32_t x241 = -1;
static uint8_t x243 = 9U;
static volatile int64_t x244 = INT64_MAX;
static int8_t x246 = INT8_MIN;
volatile uint64_t t61 = 2063674537LLU;
static uint16_t x254 = UINT16_MAX;
int8_t x256 = -1;
int32_t x257 = 73095;
uint8_t x260 = 10U;
volatile int32_t x266 = -1272364;
uint8_t x273 = UINT8_MAX;
uint64_t t68 = 5353444168745LLU;
int64_t x289 = INT64_MIN;
volatile int16_t x291 = INT16_MIN;
int64_t t71 = 19935LL;
static int16_t x293 = INT16_MIN;
int16_t x307 = -1;
uint64_t x310 = 8414448558LLU;
int16_t x312 = INT16_MAX;
int64_t x319 = INT64_MIN;
volatile int16_t x325 = INT16_MIN;
uint32_t t78 = 4172U;
uint16_t x329 = UINT16_MAX;
int32_t x331 = 445075762;
static uint32_t t80 = 5520U;
int32_t t82 = 3726063;
volatile int64_t t83 = INT64_MIN;
uint64_t t84 = 239483LLU;
static int8_t x360 = -1;
int64_t x361 = -56359LL;
volatile int64_t x363 = INT64_MIN;
int64_t x368 = INT64_MIN;
volatile int64_t t88 = 0LL;
int8_t x371 = -1;
static volatile uint64_t t89 = 254725665199121221LLU;
volatile uint64_t x376 = UINT64_MAX;
uint8_t x377 = 42U;
int64_t x379 = INT64_MIN;
static int32_t x382 = INT32_MIN;
int32_t x384 = INT32_MIN;
uint8_t x390 = UINT8_MAX;
volatile int8_t x395 = INT8_MAX;
volatile int32_t t94 = 341464;
int8_t x399 = -1;
static int8_t x406 = INT8_MAX;
volatile int32_t x407 = 22732;
int32_t t99 = -1;


void f0(void) {
	int16_t x1 = -1;
	volatile int32_t x2 = INT32_MIN;
	volatile int32_t t0 = 475080;

	t0 = (x1+(x2&(x3/x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MAX;
	int64_t x7 = -1LL;
	int64_t x8 = -1LL;
	volatile int64_t t1 = 379511964LL;

	t1 = (x5+(x6&(x7/x8)));

	if (t1 != -2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	static uint16_t x10 = 6942U;
	uint16_t x11 = UINT16_MAX;
	static int16_t x12 = INT16_MIN;
	uint32_t t2 = 8351U;

	t2 = (x9+(x10&(x11/x12)));

	if (t2 != 6941U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -6;
	uint16_t x15 = UINT16_MAX;
	static volatile uint64_t t3 = 64648LLU;

	t3 = (x13+(x14&(x15/x16)));

	if (t3 != 127LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 0;
	uint64_t x18 = 102751867313501806LLU;
	int8_t x19 = 9;
	uint64_t t4 = 366LLU;

	t4 = (x17+(x18&(x19/x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int64_t x22 = INT64_MAX;
	volatile int64_t x23 = -1LL;
	uint32_t x24 = UINT32_MAX;
	int64_t t5 = 3LL;

	t5 = (x21+(x22&(x23/x24)));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	static uint16_t x26 = UINT16_MAX;
	static int64_t x27 = 27871LL;
	volatile uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25+(x26&(x27/x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MIN;
	volatile int64_t x32 = 1500299214519739212LL;
	volatile int64_t t7 = INT64_MIN;

	t7 = (x29+(x30&(x31/x32)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	uint32_t x34 = 4U;
	uint8_t x35 = 2U;
	int64_t x36 = INT64_MIN;

	t8 = (x33+(x34&(x35/x36)));

	if (t8 != 65535LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	volatile uint32_t x38 = UINT32_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	volatile int16_t x40 = INT16_MIN;
	volatile uint32_t t9 = 15078U;

	t9 = (x37+(x38&(x39/x40)));

	if (t9 != 255U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 99U;
	static int16_t x42 = INT16_MAX;
	uint64_t x43 = UINT64_MAX;
	uint64_t t10 = 3820263410217103LLU;

	t10 = (x41+(x42&(x43/x44)));

	if (t10 != 100LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int64_t x46 = -1LL;
	volatile int16_t x47 = 3;
	int64_t t11 = -111LL;

	t11 = (x45+(x46&(x47/x48)));

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 679318748U;
	uint64_t x51 = 3375716752169LLU;
	static uint8_t x52 = 2U;
	uint64_t t12 = 20799737547LLU;

	t12 = (x49+(x50&(x51/x52)));

	if (t12 != 1688537694832LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -4;
	volatile int8_t x54 = -3;
	int32_t x55 = -1;
	uint32_t x56 = 459588200U;

	t13 = (x53+(x54&(x55/x56)));

	if (t13 != 5U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	static int32_t x58 = -1;
	uint64_t x59 = 12534061524118LLU;
	int32_t x60 = INT32_MIN;
	volatile uint64_t t14 = 57537407799087LLU;

	t14 = (x57+(x58&(x59/x60)));

	if (t14 != 4294967295LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 13729U;
	uint64_t x62 = 7369812418LLU;
	int8_t x63 = INT8_MAX;
	int8_t x64 = INT8_MIN;
	volatile uint64_t t15 = 226362LLU;

	t15 = (x61+(x62&(x63/x64)));

	if (t15 != 13729LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MAX;
	uint64_t x66 = 99LLU;
	int32_t x67 = INT32_MAX;
	uint32_t x68 = 76U;
	volatile uint64_t t16 = 497669044160LLU;

	t16 = (x65+(x66&(x67/x68)));

	if (t16 != 2147483746LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint64_t x70 = UINT64_MAX;
	uint64_t x71 = 156294117083333LLU;
	int16_t x72 = -1;
	volatile uint64_t t17 = 22550368822LLU;

	t17 = (x69+(x70&(x71/x72)));

	if (t17 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x74 = -1;
	int64_t x75 = INT64_MIN;
	static uint64_t x76 = 8654014615740965LLU;
	volatile uint64_t t18 = 11LLU;

	t18 = (x73+(x74&(x75/x76)));

	if (t18 != 1064LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 0U;
	static int16_t x78 = -1;
	int64_t x80 = -3558962535056189922LL;
	volatile int64_t t19 = -1344540474LL;

	t19 = (x77+(x78&(x79/x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	int32_t x83 = -27238;
	int8_t x84 = INT8_MIN;

	t20 = (x81+(x82&(x83/x84)));

	if (t20 != 383) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 15U;
	int8_t x87 = -1;
	int16_t x88 = -1;
	int32_t t21 = 16382;

	t21 = (x85+(x86&(x87/x88)));

	if (t21 != 15) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MAX;
	static int64_t x92 = 16525474763LL;
	static volatile int64_t t22 = -450389306250220LL;

	t22 = (x89+(x90&(x91/x92)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 10475178268904LLU;
	uint8_t x94 = 45U;
	static int64_t x95 = 2189LL;
	static volatile uint64_t t23 = 47LLU;

	t23 = (x93+(x94&(x95/x96)));

	if (t23 != 10475178268904LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 373742LLU;
	static uint16_t x98 = 0U;
	uint16_t x99 = UINT16_MAX;
	int16_t x100 = 1;

	t24 = (x97+(x98&(x99/x100)));

	if (t24 != 373742LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 5U;
	static int16_t x102 = 12717;
	int8_t x103 = 9;
	static uint16_t x104 = UINT16_MAX;
	static volatile int32_t t25 = 6891;

	t25 = (x101+(x102&(x103/x104)));

	if (t25 != 5) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = -1;
	uint8_t x107 = 8U;
	uint64_t x108 = 2681179428722216427LLU;
	uint64_t t26 = 26LLU;

	t26 = (x105+(x106&(x107/x108)));

	if (t26 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x109 = UINT32_MAX;
	static volatile int16_t x110 = 7;
	uint64_t x112 = 6083161834LLU;
	uint64_t t27 = 12189445125LLU;

	t27 = (x109+(x110&(x111/x112)));

	if (t27 != 4294967297LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int32_t x115 = -1;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t28 = 5LLU;

	t28 = (x113+(x114&(x115/x116)));

	if (t28 != 32768LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint8_t x118 = 0U;
	int8_t x119 = -18;
	int16_t x120 = 16042;

	t29 = (x117+(x118&(x119/x120)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t t30 = 10063450606133LLU;

	t30 = (x121+(x122&(x123/x124)));

	if (t30 != 18446744073709551237LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 1;
	volatile int16_t x126 = 0;
	uint64_t x127 = 17LLU;

	t31 = (x125+(x126&(x127/x128)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static volatile uint8_t x130 = 124U;
	uint8_t x131 = 31U;
	volatile int8_t x132 = INT8_MAX;
	int32_t t32 = 234398364;

	t32 = (x129+(x130&(x131/x132)));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int64_t x134 = INT64_MAX;
	int16_t x135 = -1749;
	static uint8_t x136 = UINT8_MAX;
	int64_t t33 = 48LL;

	t33 = (x133+(x134&(x135/x136)));

	if (t33 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x137 = INT32_MIN;
	volatile int32_t x138 = INT32_MAX;
	int64_t x139 = INT64_MIN;
	static int64_t t34 = -1112119966512152392LL;

	t34 = (x137+(x138&(x139/x140)));

	if (t34 != -8421504LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint8_t x142 = UINT8_MAX;
	uint8_t x143 = 26U;
	static int8_t x144 = -1;
	int32_t t35 = 173;

	t35 = (x141+(x142&(x143/x144)));

	if (t35 != 102) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x150 = INT64_MAX;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int64_t t36 = -22353LL;

	t36 = (x149+(x150&(x151/x152)));

	if (t36 != 9223372036846360818LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	uint32_t x154 = UINT32_MAX;
	volatile int64_t x155 = INT64_MIN;
	volatile int32_t x156 = 453028426;
	static int64_t t37 = -16689647893LL;

	t37 = (x153+(x154&(x155/x156)));

	if (t37 != -1032014279LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	int8_t x158 = INT8_MIN;
	volatile int32_t x159 = -1;
	int64_t x160 = INT64_MAX;

	t38 = (x157+(x158&(x159/x160)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = -821922827318920LL;
	int16_t x162 = -1;
	int32_t x164 = INT32_MIN;
	static int64_t t39 = -53972766722148748LL;

	t39 = (x161+(x162&(x163/x164)));

	if (t39 != -821922827318920LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x167 = INT32_MAX;

	t40 = (x165+(x166&(x167/x168)));

	if (t40 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x169 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;

	t41 = (x169+(x170&(x171/x172)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 2161LL;
	uint32_t x174 = 230U;
	uint64_t x175 = 137736421134383567LLU;
	static uint64_t x176 = UINT64_MAX;

	t42 = (x173+(x174&(x175/x176)));

	if (t42 != 2161LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x178 = -24;
	int64_t x179 = 81572870469602LL;
	static int64_t x180 = INT64_MIN;
	int64_t t43 = -2062486401042373811LL;

	t43 = (x177+(x178&(x179/x180)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 65U;
	int16_t x182 = INT16_MIN;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = -1;
	uint64_t t44 = 7114LLU;

	t44 = (x181+(x182&(x183/x184)));

	if (t44 != 65LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = 1668920397291569LLU;
	int16_t x188 = -62;
	volatile uint64_t t45 = 155245221692076348LLU;

	t45 = (x185+(x186&(x187/x188)));

	if (t45 != 65535LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = -3052;
	int32_t x190 = INT32_MIN;
	int64_t x191 = 227667639826292842LL;
	uint32_t x192 = 185U;

	t46 = (x189+(x190&(x191/x192)));

	if (t46 != 1230634831836180LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x193 = 90U;
	int16_t x194 = INT16_MIN;
	volatile int64_t x195 = -1LL;
	int8_t x196 = -1;
	volatile int64_t t47 = -273687033985788LL;

	t47 = (x193+(x194&(x195/x196)));

	if (t47 != 90LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = -518307056;
	int32_t x198 = INT32_MIN;
	int64_t x199 = -59877427931456555LL;
	volatile int64_t t48 = 139915LL;

	t48 = (x197+(x198&(x199/x200)));

	if (t48 != -518307056LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x201 = 318LL;
	int8_t x202 = INT8_MIN;
	uint16_t x203 = 683U;
	volatile int8_t x204 = INT8_MIN;

	t49 = (x201+(x202&(x203/x204)));

	if (t49 != 190LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x206 = 1U;
	int16_t x208 = INT16_MIN;
	uint64_t t50 = UINT64_MAX;

	t50 = (x205+(x206&(x207/x208)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -1;
	static int32_t x210 = INT32_MIN;
	int32_t x212 = INT32_MAX;
	static int32_t t51 = 1;

	t51 = (x209+(x210&(x211/x212)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -426696571;
	static volatile int8_t x214 = INT8_MAX;
	int16_t x216 = INT16_MAX;

	t52 = (x213+(x214&(x215/x216)));

	if (t52 != -426696527LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MAX;
	int8_t x218 = 13;
	int16_t x219 = INT16_MIN;
	static int16_t x220 = -1;

	t53 = (x217+(x218&(x219/x220)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x222 = INT8_MIN;
	volatile int64_t x224 = -16038151306056LL;
	volatile int64_t t54 = -900544187512LL;

	t54 = (x221+(x222&(x223/x224)));

	if (t54 != -284765347LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x226 = 0;
	volatile int64_t x228 = INT64_MIN;

	t55 = (x225+(x226&(x227/x228)));

	if (t55 != -2147483648LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = UINT64_MAX;
	int16_t x230 = -1;
	int64_t x232 = 46540LL;

	t56 = (x229+(x230&(x231/x232)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x234 = -1;
	int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MAX;
	int64_t t57 = -48LL;

	t57 = (x233+(x234&(x235/x236)));

	if (t57 != -129LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x237 = 5032U;
	static int16_t x238 = INT16_MIN;
	volatile uint32_t x239 = 2592U;
	volatile int32_t x240 = INT32_MAX;
	uint32_t t58 = 325539U;

	t58 = (x237+(x238&(x239/x240)));

	if (t58 != 5032U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x242 = 63U;
	int64_t t59 = 168LL;

	t59 = (x241+(x242&(x243/x244)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -8;
	int16_t x247 = INT16_MAX;
	int64_t x248 = INT64_MAX;
	volatile int64_t t60 = 3045534LL;

	t60 = (x245+(x246&(x247/x248)));

	if (t60 != -8LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MIN;
	volatile uint64_t x250 = 1LLU;
	static uint32_t x251 = UINT32_MAX;
	int16_t x252 = 3001;

	t61 = (x249+(x250&(x251/x252)));

	if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = -1LL;
	int64_t x255 = 767285880410220LL;
	volatile int64_t t62 = 27928896696403953LL;

	t62 = (x253+(x254&(x255/x256)));

	if (t62 != 12179LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x258 = INT16_MAX;
	static volatile uint8_t x259 = 20U;
	static volatile int32_t t63 = -31805;

	t63 = (x257+(x258&(x259/x260)));

	if (t63 != 73097) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x261 = UINT16_MAX;
	volatile uint64_t x262 = UINT64_MAX;
	volatile uint64_t x263 = 4131888210795065666LLU;
	int16_t x264 = INT16_MIN;
	uint64_t t64 = 32915789922LLU;

	t64 = (x261+(x262&(x263/x264)));

	if (t64 != 65535LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -504;
	volatile int64_t x267 = -5617677454LL;
	uint64_t x268 = 672269009409693249LLU;
	volatile uint64_t t65 = 170002674LLU;

	t65 = (x265+(x266&(x267/x268)));

	if (t65 != 18446744073709551128LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1;
	int16_t x270 = INT16_MAX;
	int32_t x271 = 1;
	volatile uint32_t x272 = UINT32_MAX;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x269+(x270&(x271/x272)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x274 = 67458998720695053LLU;
	int32_t x275 = INT32_MIN;
	uint8_t x276 = UINT8_MAX;
	uint64_t t67 = 0LLU;

	t67 = (x273+(x274&(x275/x276)));

	if (t67 != 67458998712273919LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x277 = 12LLU;
	uint8_t x278 = 0U;
	int32_t x279 = -1;
	volatile uint32_t x280 = UINT32_MAX;

	t68 = (x277+(x278&(x279/x280)));

	if (t68 != 12LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x281 = UINT16_MAX;
	static int64_t x282 = -966756838528LL;
	volatile int64_t x283 = INT64_MIN;
	static int32_t x284 = 99;
	static int64_t t69 = -22851133LL;

	t69 = (x281+(x282&(x283/x284)));

	if (t69 != -93165928463400449LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = 0;
	volatile int32_t x286 = -1;
	volatile uint32_t x287 = 16056U;
	volatile uint8_t x288 = UINT8_MAX;
	uint32_t t70 = 11U;

	t70 = (x285+(x286&(x287/x288)));

	if (t70 != 62U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x290 = 650U;
	uint16_t x292 = 10U;

	t71 = (x289+(x290&(x291/x292)));

	if (t71 != -9223372036854775296LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x294 = 4595;
	int32_t x295 = INT32_MIN;
	static volatile int8_t x296 = -18;
	volatile int32_t t72 = -924641895;

	t72 = (x293+(x294&(x295/x296)));

	if (t72 != -28221) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x297 = 3011628U;
	uint16_t x298 = UINT16_MAX;
	volatile int32_t x299 = -1;
	static int8_t x300 = 15;
	static uint32_t t73 = 3057709U;

	t73 = (x297+(x298&(x299/x300)));

	if (t73 != 3011628U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MAX;
	volatile uint32_t x306 = 74387U;
	int8_t x308 = INT8_MAX;
	static uint32_t t74 = 5905U;

	t74 = (x305+(x306&(x307/x308)));

	if (t74 != 127U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x309 = 171U;
	static uint16_t x311 = 598U;
	volatile uint64_t t75 = 116724660654016281LLU;

	t75 = (x309+(x310&(x311/x312)));

	if (t75 != 171LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = UINT8_MAX;
	uint16_t x318 = UINT16_MAX;
	uint64_t x320 = 22LLU;
	uint64_t t76 = 45342097854659034LLU;

	t76 = (x317+(x318&(x319/x320)));

	if (t76 != 53875LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MIN;
	static uint8_t x322 = UINT8_MAX;
	uint64_t x323 = 2597488212030045169LLU;
	uint16_t x324 = UINT16_MAX;
	volatile uint64_t t77 = 124LLU;

	t77 = (x321+(x322&(x323/x324)));

	if (t77 != 18446744071562068001LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x326 = 452U;
	int16_t x327 = -2461;
	uint32_t x328 = 718447U;

	t78 = (x325+(x326&(x327/x328)));

	if (t78 != 4294934848U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x330 = INT64_MAX;
	uint32_t x332 = 52U;
	volatile int64_t t79 = 820LL;

	t79 = (x329+(x330&(x331/x332)));

	if (t79 != 8624684LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x333 = 1127U;
	static int32_t x334 = 6735;
	int16_t x335 = INT16_MAX;
	int32_t x336 = INT32_MIN;

	t80 = (x333+(x334&(x335/x336)));

	if (t80 != 1127U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x337 = 2U;
	int32_t x338 = INT32_MIN;
	volatile uint8_t x339 = 63U;
	int16_t x340 = INT16_MIN;
	int32_t t81 = 1241022;

	t81 = (x337+(x338&(x339/x340)));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = 0;
	static int16_t x342 = INT16_MIN;
	int16_t x343 = 669;
	volatile int8_t x344 = -1;

	t82 = (x341+(x342&(x343/x344)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MIN;
	static int64_t x347 = INT64_MIN;
	volatile int64_t x348 = INT64_MIN;

	t83 = (x345+(x346&(x347/x348)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x349 = 1742794762LLU;
	uint64_t x350 = UINT64_MAX;
	volatile uint16_t x351 = 5U;
	volatile int32_t x352 = -1;

	t84 = (x349+(x350&(x351/x352)));

	if (t84 != 1742794757LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x353 = 5881257LLU;
	static int64_t x354 = 1041LL;
	static int64_t x355 = 1724927497LL;
	static uint16_t x356 = 108U;
	volatile uint64_t t85 = 924LLU;

	t85 = (x353+(x354&(x355/x356)));

	if (t85 != 5882297LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x357 = INT32_MAX;
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = INT64_MAX;
	volatile int64_t t86 = 3584742617437866929LL;

	t86 = (x357+(x358&(x359/x360)));

	if (t86 != 2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x362 = INT64_MAX;
	int8_t x364 = INT8_MIN;
	static int64_t t87 = 40264LL;

	t87 = (x361+(x362&(x363/x364)));

	if (t87 != 72057594037871577LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = -1;
	volatile int16_t x367 = INT16_MAX;

	t88 = (x365+(x366&(x367/x368)));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -4122687LL;
	static int8_t x370 = INT8_MIN;
	uint64_t x372 = 80552568881350LLU;

	t89 = (x369+(x370&(x371/x372)));

	if (t89 != 18446744073705657921LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x373 = -1LL;
	volatile int16_t x374 = INT16_MIN;
	uint8_t x375 = UINT8_MAX;
	uint64_t t90 = UINT64_MAX;

	t90 = (x373+(x374&(x375/x376)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x378 = INT64_MIN;
	int16_t x380 = INT16_MIN;
	volatile int64_t t91 = 6014416LL;

	t91 = (x377+(x378&(x379/x380)));

	if (t91 != 42LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x381 = UINT16_MAX;
	static int64_t x383 = -1LL;
	int64_t t92 = -328490926102LL;

	t92 = (x381+(x382&(x383/x384)));

	if (t92 != 65535LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x389 = INT64_MAX;
	int64_t x391 = -1LL;
	static uint16_t x392 = UINT16_MAX;
	volatile int64_t t93 = INT64_MAX;

	t93 = (x389+(x390&(x391/x392)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = -14374;
	volatile int16_t x394 = INT16_MIN;
	int8_t x396 = INT8_MIN;

	t94 = (x393+(x394&(x395/x396)));

	if (t94 != -14374) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x397 = 6U;
	int32_t x398 = -5246;
	int64_t x400 = INT64_MIN;
	volatile int64_t t95 = 799096LL;

	t95 = (x397+(x398&(x399/x400)));

	if (t95 != 6LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = 14;
	int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MIN;
	uint64_t x404 = 187LLU;
	volatile uint64_t t96 = 291LLU;

	t96 = (x401+(x402&(x403/x404)));

	if (t96 != 98645690222257038LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x405 = 296U;
	int8_t x408 = -6;
	static int32_t t97 = 9527;

	t97 = (x405+(x406&(x407/x408)));

	if (t97 != 348) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x409 = 0LLU;
	int32_t x410 = 4163;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = -1;
	uint64_t t98 = 227872770LLU;

	t98 = (x409+(x410&(x411/x412)));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MAX;
	int16_t x415 = INT16_MIN;
	volatile int16_t x416 = INT16_MIN;

	t99 = (x413+(x414&(x415/x416)));

	if (t99 != -127) { NG(); } else { ; }
	
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

