#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x11 = INT16_MAX;
int64_t x20 = INT64_MAX;
static int64_t x22 = 0LL;
int32_t t5 = -462;
int32_t x26 = 7356503;
volatile int64_t x35 = INT64_MIN;
uint8_t x36 = UINT8_MAX;
int64_t x38 = INT64_MIN;
int32_t x39 = 6991093;
static int8_t x51 = -1;
uint16_t x56 = 19636U;
int32_t t15 = 347;
static uint16_t x65 = 633U;
int64_t x69 = -1LL;
uint64_t x71 = 11LLU;
volatile int8_t x75 = 0;
static int32_t x78 = -1;
volatile uint8_t x79 = 34U;
int8_t x85 = INT8_MIN;
int16_t x86 = INT16_MIN;
static int32_t t22 = 16;
int16_t x98 = -3;
uint32_t x99 = 287314681U;
uint64_t x102 = 4272426728352210995LLU;
static int32_t t25 = -31550;
uint8_t x110 = UINT8_MAX;
static volatile int8_t x112 = -1;
uint16_t x116 = UINT16_MAX;
static volatile int8_t x118 = INT8_MIN;
int32_t t29 = 202568;
volatile int32_t t31 = -33;
static int64_t x144 = -1LL;
static int32_t t37 = 24562;
uint16_t x153 = UINT16_MAX;
uint64_t x160 = 6224938396586812LLU;
static int32_t x164 = -169850893;
static uint8_t x167 = 6U;
int32_t x170 = -1031539;
volatile int8_t x172 = INT8_MIN;
int16_t x176 = INT16_MAX;
uint16_t x181 = UINT16_MAX;
int32_t t46 = 12614379;
int32_t x190 = INT32_MIN;
int32_t t47 = -117;
static volatile int8_t x194 = INT8_MIN;
int64_t x195 = 21433775LL;
int8_t x196 = INT8_MAX;
int8_t x200 = -1;
volatile int32_t t50 = -822;
uint8_t x206 = 22U;
static volatile int32_t t52 = 924678;
int64_t x214 = -1LL;
volatile uint16_t x215 = 1345U;
static int32_t x216 = INT32_MIN;
volatile int32_t t56 = -175713959;
int64_t x233 = INT64_MAX;
int8_t x234 = INT8_MAX;
int64_t x238 = -1LL;
int8_t x240 = -1;
volatile int32_t t60 = 973755;
int16_t x246 = 6;
uint16_t x252 = 441U;
uint16_t x255 = 23348U;
int32_t t67 = 38172786;
volatile int32_t t69 = -171263145;
uint32_t x284 = 13483873U;
uint32_t x291 = UINT32_MAX;
static int8_t x292 = INT8_MIN;
int64_t x295 = INT64_MAX;
int32_t x297 = INT32_MAX;
static uint8_t x298 = UINT8_MAX;
volatile int32_t t74 = 48882;
static int32_t x302 = INT32_MIN;
static int16_t x304 = INT16_MAX;
uint8_t x307 = UINT8_MAX;
int16_t x313 = -1;
int8_t x324 = INT8_MIN;
int16_t x325 = INT16_MIN;
static volatile int32_t t81 = 14972913;
int8_t x331 = INT8_MIN;
uint16_t x334 = UINT16_MAX;
static int64_t x335 = INT64_MAX;
int16_t x336 = INT16_MIN;
uint64_t x337 = 4798120012LLU;
int32_t x355 = INT32_MIN;
int32_t t88 = 46416702;
int8_t x357 = INT8_MAX;
uint8_t x360 = UINT8_MAX;
static volatile uint16_t x363 = 1073U;
uint16_t x364 = 10191U;
static volatile int32_t t91 = 112488086;
int16_t x369 = 1066;
int32_t x372 = 750793330;
int64_t x376 = 9075LL;
int32_t x389 = -1;
int8_t x390 = INT8_MIN;
volatile int32_t t99 = 946881;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	volatile int64_t x2 = -1LL;
	static uint8_t x3 = 7U;
	static int16_t x4 = INT16_MIN;
	static int32_t t0 = -1007;

	t0 = (x1==(x2^(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	int16_t x7 = -6294;
	volatile int64_t x8 = INT64_MIN;
	int32_t t1 = 29;

	t1 = (x5==(x6^(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int8_t x10 = INT8_MAX;
	volatile int32_t x12 = -1;
	int32_t t2 = 17;

	t2 = (x9==(x10^(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int16_t x14 = -10110;
	int8_t x15 = -1;
	uint32_t x16 = 245892145U;
	int32_t t3 = 20;

	t3 = (x13==(x14^(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = 11;
	uint32_t x18 = 1329405U;
	volatile int32_t x19 = -1;
	volatile int32_t t4 = -1;

	t4 = (x17==(x18^(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 166007050121362652LLU;
	static int16_t x23 = INT16_MIN;
	int32_t x24 = 158116315;

	t5 = (x21==(x22^(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static volatile int32_t x27 = 49059217;
	int16_t x28 = -1;
	volatile int32_t t6 = -33;

	t6 = (x25==(x26^(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 40761732LL;
	uint16_t x30 = 15U;
	uint64_t x31 = 1227096478LLU;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = -3070546;

	t7 = (x29==(x30^(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MAX;
	volatile int32_t t8 = 459530;

	t8 = (x33==(x34^(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	static int32_t x40 = INT32_MAX;
	volatile int32_t t9 = -61802;

	t9 = (x37==(x38^(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 5U;
	static uint8_t x42 = UINT8_MAX;
	static int64_t x43 = -1LL;
	static volatile uint32_t x44 = 46376502U;
	int32_t t10 = 144189169;

	t10 = (x41==(x42^(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 7U;
	static uint16_t x46 = UINT16_MAX;
	int32_t x47 = INT32_MIN;
	int8_t x48 = 17;
	volatile int32_t t11 = 16353484;

	t11 = (x45==(x46^(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MAX;
	uint16_t x50 = UINT16_MAX;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = -24;

	t12 = (x49==(x50^(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = UINT64_MAX;
	int64_t x54 = INT64_MIN;
	int64_t x55 = INT64_MIN;
	static volatile int32_t t13 = -1621368;

	t13 = (x53==(x54^(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 8;
	int32_t x58 = -13069;
	uint16_t x59 = 199U;
	volatile uint16_t x60 = 866U;
	volatile int32_t t14 = -424330;

	t14 = (x57==(x58^(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 24615U;
	uint8_t x62 = UINT8_MAX;
	uint16_t x63 = 7U;
	int32_t x64 = INT32_MIN;

	t15 = (x61==(x62^(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x66 = 3010636700455652843LLU;
	uint64_t x67 = 24204200LLU;
	int64_t x68 = INT64_MAX;
	static int32_t t16 = -657703;

	t16 = (x65==(x66^(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 10183133U;
	int16_t x72 = -1;
	static volatile int32_t t17 = -929923;

	t17 = (x69==(x70^(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	volatile int64_t x74 = INT64_MIN;
	volatile int16_t x76 = INT16_MIN;
	static int32_t t18 = 6;

	t18 = (x73==(x74^(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 2U;
	int8_t x80 = 32;
	int32_t t19 = -552635556;

	t19 = (x77==(x78^(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	int64_t x82 = -7202559995133LL;
	uint8_t x83 = UINT8_MAX;
	uint64_t x84 = UINT64_MAX;
	int32_t t20 = 2726;

	t20 = (x81==(x82^(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x87 = 0U;
	int16_t x88 = INT16_MIN;
	static int32_t t21 = -435409086;

	t21 = (x85==(x86^(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = 1864015;
	int64_t x90 = INT64_MIN;
	int16_t x91 = 31;
	int32_t x92 = 1;

	t22 = (x89==(x90^(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	volatile uint8_t x94 = 5U;
	uint64_t x95 = 33835457610LLU;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = 251848365;

	t23 = (x93==(x94^(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 382013426929LL;
	int64_t x100 = -1LL;
	int32_t t24 = -5877;

	t24 = (x97==(x98^(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	uint16_t x103 = 3U;
	int8_t x104 = INT8_MIN;

	t25 = (x101==(x102^(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MAX;
	int8_t x106 = INT8_MIN;
	volatile uint32_t x107 = 14U;
	static int32_t x108 = INT32_MAX;
	int32_t t26 = 707639288;

	t26 = (x105==(x106^(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 1U;
	int16_t x111 = -12690;
	volatile int32_t t27 = 0;

	t27 = (x109==(x110^(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MAX;
	int32_t x115 = 39747;
	volatile int32_t t28 = 13;

	t28 = (x113==(x114^(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 15U;
	int16_t x119 = INT16_MIN;
	int64_t x120 = 529598621493874238LL;

	t29 = (x117==(x118^(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	static uint8_t x122 = 4U;
	static int8_t x123 = -41;
	static int32_t x124 = -6970557;
	volatile int32_t t30 = 12528939;

	t30 = (x121==(x122^(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x125 = INT64_MIN;
	int16_t x126 = 564;
	int16_t x127 = INT16_MIN;
	int16_t x128 = -3;

	t31 = (x125==(x126^(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	static int8_t x130 = 1;
	int16_t x131 = 37;
	int16_t x132 = -1;
	static volatile int32_t t32 = -233776670;

	t32 = (x129==(x130^(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = 46049901;
	int8_t x134 = -1;
	volatile uint64_t x135 = UINT64_MAX;
	static uint32_t x136 = 462149U;
	int32_t t33 = 3544492;

	t33 = (x133==(x134^(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	volatile int16_t x138 = INT16_MIN;
	volatile int32_t x139 = INT32_MIN;
	int16_t x140 = -1;
	volatile int32_t t34 = 9507235;

	t34 = (x137==(x138^(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	uint16_t x142 = 8U;
	int32_t x143 = -1;
	static volatile int32_t t35 = 7340078;

	t35 = (x141==(x142^(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	uint64_t x146 = 6930830994LLU;
	static int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MAX;
	volatile int32_t t36 = -41653779;

	t36 = (x145==(x146^(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 1;
	int16_t x150 = INT16_MIN;
	static int64_t x151 = -1LL;
	int64_t x152 = INT64_MIN;

	t37 = (x149==(x150^(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	int64_t x155 = -1LL;
	int8_t x156 = INT8_MIN;
	int32_t t38 = 6;

	t38 = (x153==(x154^(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int16_t x158 = -1;
	int8_t x159 = 6;
	int32_t t39 = -67573517;

	t39 = (x157==(x158^(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	static uint32_t x162 = UINT32_MAX;
	static int16_t x163 = 4145;
	volatile int32_t t40 = -1;

	t40 = (x161==(x162^(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 1U;
	volatile int16_t x166 = INT16_MIN;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -648;

	t41 = (x165==(x166^(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 110U;
	int16_t x171 = INT16_MIN;
	volatile int32_t t42 = -2;

	t42 = (x169==(x170^(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = UINT32_MAX;
	static int32_t x174 = INT32_MAX;
	int64_t x175 = INT64_MAX;
	int32_t t43 = 5;

	t43 = (x173==(x174^(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x177 = INT8_MIN;
	uint64_t x178 = 926971290884596LLU;
	volatile int16_t x179 = 281;
	int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 1014331129;

	t44 = (x177==(x178^(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = -4099;
	uint8_t x183 = 1U;
	uint16_t x184 = 52U;
	int32_t t45 = -98811038;

	t45 = (x181==(x182^(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = UINT16_MAX;
	static int8_t x186 = INT8_MIN;
	int8_t x187 = 25;
	uint16_t x188 = 23U;

	t46 = (x185==(x186^(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x189 = INT8_MIN;
	volatile int8_t x191 = INT8_MAX;
	volatile int8_t x192 = -1;

	t47 = (x189==(x190^(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 2;
	static volatile int32_t t48 = 1;

	t48 = (x193==(x194^(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	static int16_t x198 = INT16_MIN;
	static uint64_t x199 = 229660579LLU;
	volatile int32_t t49 = 1656589;

	t49 = (x197==(x198^(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = 32841337U;
	int64_t x202 = INT64_MIN;
	volatile uint32_t x203 = UINT32_MAX;
	int64_t x204 = INT64_MIN;

	t50 = (x201==(x202^(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 37;
	uint64_t x207 = UINT64_MAX;
	static volatile int32_t x208 = -4505;
	volatile int32_t t51 = -1;

	t51 = (x205==(x206^(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MIN;
	static int32_t x211 = INT32_MAX;
	int64_t x212 = 147507800LL;

	t52 = (x209==(x210^(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	volatile int32_t t53 = -7268788;

	t53 = (x213==(x214^(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	int64_t x218 = -1LL;
	volatile int8_t x219 = 54;
	int64_t x220 = INT64_MAX;
	static int32_t t54 = 1695515;

	t54 = (x217==(x218^(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 7U;
	int8_t x222 = -1;
	volatile uint64_t x223 = 9552134899LLU;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 12;

	t55 = (x221==(x222^(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1864251518709920LL;
	static volatile int8_t x226 = INT8_MAX;
	int8_t x227 = -7;
	int32_t x228 = -1;

	t56 = (x225==(x226^(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = UINT32_MAX;
	static volatile uint64_t x230 = 1265876240251744599LLU;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MAX;
	volatile int32_t t57 = 5255;

	t57 = (x229==(x230^(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x235 = 5U;
	int32_t x236 = -18;
	volatile int32_t t58 = 4344;

	t58 = (x233==(x234^(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 1705U;
	int16_t x239 = -1;
	volatile int32_t t59 = 28563;

	t59 = (x237==(x238^(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	static int64_t x242 = 983842448813779353LL;
	uint16_t x243 = 6U;
	volatile uint8_t x244 = 0U;

	t60 = (x241==(x242^(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	volatile int8_t x247 = -6;
	int32_t x248 = 25420;
	volatile int32_t t61 = -15722;

	t61 = (x245==(x246^(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -71;
	uint8_t x250 = 23U;
	int8_t x251 = 41;
	static volatile int32_t t62 = -7;

	t62 = (x249==(x250^(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = 1;
	volatile int16_t x254 = -1;
	int8_t x256 = 5;
	static volatile int32_t t63 = -31507254;

	t63 = (x253==(x254^(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = -1;
	int16_t x259 = INT16_MIN;
	static int64_t x260 = 1LL;
	volatile int32_t t64 = 1815565;

	t64 = (x257==(x258^(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 0U;
	volatile int32_t x262 = 68860;
	volatile uint16_t x263 = 246U;
	static uint64_t x264 = 433781252580661LLU;
	static volatile int32_t t65 = 0;

	t65 = (x261==(x262^(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 36U;
	int64_t x266 = INT64_MAX;
	volatile int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MAX;
	int32_t t66 = -4;

	t66 = (x265==(x266^(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -1LL;
	static uint64_t x270 = UINT64_MAX;
	int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;

	t67 = (x269==(x270^(x271==x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	volatile int32_t x274 = -1036738705;
	int64_t x275 = -1LL;
	int8_t x276 = -3;
	volatile int32_t t68 = 2344643;

	t68 = (x273==(x274^(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	volatile int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MAX;
	int8_t x280 = -1;

	t69 = (x277==(x278^(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	int8_t x282 = -57;
	volatile int64_t x283 = -77469LL;
	int32_t t70 = 25488723;

	t70 = (x281==(x282^(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 32151U;
	static uint8_t x286 = 1U;
	volatile int8_t x287 = -52;
	int64_t x288 = INT64_MIN;
	int32_t t71 = 16;

	t71 = (x285==(x286^(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static uint8_t x290 = 31U;
	int32_t t72 = 61026;

	t72 = (x289==(x290^(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MAX;
	static int32_t x294 = INT32_MIN;
	int64_t x296 = 1798LL;
	static int32_t t73 = 994823;

	t73 = (x293==(x294^(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = 0;
	static int16_t x300 = INT16_MIN;

	t74 = (x297==(x298^(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x303 = 63U;
	volatile int32_t t75 = -14;

	t75 = (x301==(x302^(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int64_t x306 = -1961LL;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -273211175;

	t76 = (x305==(x306^(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = UINT64_MAX;
	int64_t x311 = -1LL;
	volatile int32_t x312 = -1;
	int32_t t77 = -14098;

	t77 = (x309==(x310^(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x314 = UINT64_MAX;
	static uint32_t x315 = UINT32_MAX;
	static int16_t x316 = INT16_MIN;
	int32_t t78 = 5402;

	t78 = (x313==(x314^(x315==x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 677;
	static uint8_t x318 = 53U;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = 1U;
	volatile int32_t t79 = 48078;

	t79 = (x317==(x318^(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = 287293121714161941LL;
	volatile int32_t t80 = 382;

	t80 = (x321==(x322^(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x326 = 44U;
	int16_t x327 = INT16_MAX;
	uint64_t x328 = 573329402480LLU;

	t81 = (x325==(x326^(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 27411U;
	int64_t x330 = 527264861LL;
	int16_t x332 = -2876;
	static volatile int32_t t82 = -297;

	t82 = (x329==(x330^(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x333 = UINT16_MAX;
	int32_t t83 = 15590396;

	t83 = (x333==(x334^(x335==x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = -31;
	int32_t x339 = 18192;
	int16_t x340 = INT16_MIN;
	static volatile int32_t t84 = 9201066;

	t84 = (x337==(x338^(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	int64_t x342 = INT64_MIN;
	volatile int32_t x343 = -1;
	volatile int64_t x344 = INT64_MIN;
	int32_t t85 = 104;

	t85 = (x341==(x342^(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 3756LLU;
	uint16_t x346 = 166U;
	int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MAX;
	int32_t t86 = 3;

	t86 = (x345==(x346^(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 3U;
	volatile int64_t x350 = 0LL;
	static int32_t x351 = -1;
	int32_t x352 = -1;
	static int32_t t87 = -1;

	t87 = (x349==(x350^(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 15300;
	int16_t x354 = INT16_MAX;
	int64_t x356 = -1LL;

	t88 = (x353==(x354^(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MIN;
	static uint8_t x359 = 27U;
	volatile int32_t t89 = 102961;

	t89 = (x357==(x358^(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int8_t x362 = INT8_MIN;
	static int32_t t90 = 833069;

	t90 = (x361==(x362^(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = UINT8_MAX;
	int8_t x366 = 30;
	uint8_t x367 = 33U;
	static int64_t x368 = 5731299482281977LL;

	t91 = (x365==(x366^(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = 46;
	int8_t x371 = -1;
	int32_t t92 = -8461;

	t92 = (x369==(x370^(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	uint8_t x374 = 63U;
	int32_t x375 = -627841969;
	int32_t t93 = 12493;

	t93 = (x373==(x374^(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MIN;
	int8_t x378 = INT8_MAX;
	int8_t x379 = -3;
	volatile int8_t x380 = INT8_MAX;
	volatile int32_t t94 = -78;

	t94 = (x377==(x378^(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	static uint16_t x382 = UINT16_MAX;
	int16_t x383 = 484;
	uint16_t x384 = 430U;
	int32_t t95 = 10342897;

	t95 = (x381==(x382^(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MAX;
	int32_t x386 = -347305;
	uint8_t x387 = UINT8_MAX;
	volatile int16_t x388 = INT16_MIN;
	int32_t t96 = 24213253;

	t96 = (x385==(x386^(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x391 = 1;
	volatile uint16_t x392 = UINT16_MAX;
	int32_t t97 = -14307;

	t97 = (x389==(x390^(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 3U;
	uint32_t x394 = 0U;
	int16_t x395 = -15879;
	uint32_t x396 = 68U;
	volatile int32_t t98 = 154105248;

	t98 = (x393==(x394^(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	uint8_t x398 = UINT8_MAX;
	uint64_t x399 = 31637142763LLU;
	static int8_t x400 = 27;

	t99 = (x397==(x398^(x399==x400)));

	if (t99 != 0) { NG(); } else { ; }
	
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

