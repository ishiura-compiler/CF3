#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = UINT64_MAX;
volatile uint64_t x13 = UINT64_MAX;
uint16_t x20 = UINT16_MAX;
uint16_t x21 = 193U;
int64_t x22 = INT64_MIN;
int8_t x27 = -1;
int16_t x28 = -1;
uint8_t x39 = UINT8_MAX;
uint64_t x43 = 12639683LLU;
uint32_t x44 = 1037491U;
static uint16_t x45 = 5129U;
volatile int64_t x48 = -87912048LL;
static volatile int32_t t12 = -1030;
int8_t x53 = -1;
static int32_t x56 = INT32_MIN;
static int8_t x57 = 1;
int16_t x62 = -1;
int8_t x76 = -1;
static volatile int32_t t19 = -858;
uint32_t x84 = 233U;
int8_t x89 = 10;
volatile int64_t x105 = INT64_MIN;
int8_t x112 = INT8_MAX;
static volatile int32_t t27 = 1;
static int8_t x119 = INT8_MIN;
uint16_t x120 = UINT16_MAX;
volatile int32_t x125 = -1955408;
volatile int32_t t30 = -535073;
int32_t x133 = -1;
int8_t x138 = INT8_MAX;
volatile uint16_t x140 = 157U;
int32_t x142 = INT32_MIN;
uint32_t x143 = UINT32_MAX;
int32_t t34 = 667744;
volatile int32_t t35 = 3;
uint16_t x149 = 11910U;
int32_t t36 = 2;
int64_t x154 = INT64_MIN;
int64_t x156 = INT64_MIN;
uint64_t x160 = UINT64_MAX;
int64_t x161 = INT64_MAX;
volatile int8_t x171 = -1;
uint32_t x175 = 7U;
int32_t x179 = INT32_MIN;
volatile uint64_t x180 = UINT64_MAX;
uint32_t x187 = UINT32_MAX;
static uint8_t x201 = 0U;
int32_t x202 = INT32_MIN;
uint64_t x208 = 213556LLU;
volatile uint16_t x221 = UINT16_MAX;
static int16_t x223 = INT16_MIN;
int16_t x224 = -1;
int64_t x227 = INT64_MIN;
volatile int32_t x233 = -1;
int16_t x239 = INT16_MIN;
int32_t x240 = INT32_MIN;
static int32_t t57 = 14;
uint64_t x247 = 15LLU;
uint8_t x255 = UINT8_MAX;
static uint64_t x258 = UINT64_MAX;
static int8_t x260 = INT8_MAX;
int32_t t61 = 3728;
static uint64_t x262 = 399381718LLU;
uint16_t x267 = 37U;
volatile int32_t t63 = 330777;
static volatile uint16_t x269 = 36U;
volatile uint64_t x271 = 646LLU;
volatile int32_t t64 = 3709;
volatile uint16_t x273 = 33U;
volatile int16_t x279 = -5259;
int8_t x280 = -1;
volatile int32_t t67 = -16532;
uint64_t x296 = 558728281112LLU;
volatile int32_t t70 = 2130368;
int16_t x300 = 1;
int64_t x301 = INT64_MAX;
uint16_t x302 = 115U;
int64_t x308 = -1LL;
int64_t x313 = INT64_MAX;
volatile int8_t x320 = INT8_MIN;
volatile int32_t t76 = -2346;
int8_t x327 = 14;
uint16_t x328 = UINT16_MAX;
int32_t t78 = 346894054;
int16_t x332 = -1;
int32_t t79 = -248;
int64_t x344 = -7719LL;
int32_t t82 = -211635902;
static uint16_t x366 = 134U;
static uint8_t x379 = 1U;
int32_t x383 = INT32_MIN;
uint8_t x392 = 13U;
int32_t t94 = 5;
int64_t x398 = -453605LL;
uint8_t x399 = 1U;
volatile int32_t t96 = -15;
volatile uint64_t x407 = 218703113897879229LLU;
int16_t x411 = INT16_MIN;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static uint32_t x2 = 1688U;
	int8_t x3 = -29;
	volatile int64_t x4 = INT64_MAX;
	int32_t t0 = -1968;

	t0 = ((x1|(x2%x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MIN;
	int32_t t1 = -21216;

	t1 = ((x5|(x6%x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -3;
	int64_t x10 = 1LL;
	volatile uint16_t x11 = 632U;
	uint64_t x12 = 29208480052LLU;
	int32_t t2 = 3;

	t2 = ((x9|(x10%x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	int16_t x15 = -1;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 2778923;

	t3 = ((x13|(x14%x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static volatile uint16_t x18 = 2970U;
	static uint32_t x19 = 29623U;
	volatile int32_t t4 = -159;

	t4 = ((x17|(x18%x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x23 = UINT32_MAX;
	int32_t x24 = -1;
	volatile int32_t t5 = -24026645;

	t5 = ((x21|(x22%x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 1754456U;
	volatile uint32_t x26 = 27977880U;
	int32_t t6 = -4706;

	t6 = ((x25|(x26%x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int64_t x30 = 23LL;
	int16_t x31 = INT16_MAX;
	int8_t x32 = 0;
	volatile int32_t t7 = -110944118;

	t7 = ((x29|(x30%x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	int64_t x34 = -76180LL;
	volatile int8_t x35 = -1;
	int8_t x36 = INT8_MAX;
	static volatile int32_t t8 = -8103;

	t8 = ((x33|(x34%x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 115LLU;
	static volatile uint32_t x38 = UINT32_MAX;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x37|(x38%x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int32_t x42 = -326;
	static volatile int32_t t10 = -97562;

	t10 = ((x41|(x42%x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = INT32_MIN;
	uint8_t x47 = 6U;
	int32_t t11 = -6;

	t11 = ((x45|(x46%x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 37;
	int64_t x50 = 40391668131841770LL;
	int8_t x51 = INT8_MAX;
	volatile int32_t x52 = 7828270;

	t12 = ((x49|(x50%x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x54 = INT16_MAX;
	volatile uint32_t x55 = 906U;
	int32_t t13 = 0;

	t13 = ((x53|(x54%x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 7U;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = 0;
	int32_t t14 = -357526506;

	t14 = ((x57|(x58%x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 139102U;
	int16_t x63 = 2697;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -15459763;

	t15 = ((x61|(x62%x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -14959244134LL;
	uint32_t x66 = 4U;
	volatile uint32_t x67 = UINT32_MAX;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = 9;

	t16 = ((x65|(x66%x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	uint64_t x70 = 467198772401349365LLU;
	volatile uint64_t x71 = UINT64_MAX;
	static uint8_t x72 = 125U;
	int32_t t17 = -62412053;

	t17 = ((x69|(x70%x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -37051055;
	int32_t x74 = 1011874820;
	uint32_t x75 = UINT32_MAX;
	static volatile int32_t t18 = -33530103;

	t18 = ((x73|(x74%x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int64_t x78 = -1LL;
	int32_t x79 = 231;
	int8_t x80 = INT8_MAX;

	t19 = ((x77|(x78%x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MAX;
	volatile int64_t x82 = 28044145LL;
	int64_t x83 = INT64_MIN;
	volatile int32_t t20 = -658847;

	t20 = ((x81|(x82%x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = INT32_MAX;
	volatile uint32_t x91 = 1068031U;
	int32_t x92 = INT32_MIN;
	int32_t t21 = -40270;

	t21 = ((x89|(x90%x91))<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 1;
	int32_t x94 = INT32_MIN;
	uint64_t x95 = UINT64_MAX;
	int8_t x96 = -1;
	volatile int32_t t22 = -4;

	t22 = ((x93|(x94%x95))<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	static uint64_t x98 = 186609260254LLU;
	static uint32_t x99 = 1232133393U;
	int32_t x100 = INT32_MIN;
	int32_t t23 = -12;

	t23 = ((x97|(x98%x99))<x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x101 = 7575806592451LLU;
	int16_t x102 = INT16_MIN;
	volatile int16_t x103 = INT16_MIN;
	volatile int16_t x104 = INT16_MAX;
	int32_t t24 = 61212222;

	t24 = ((x101|(x102%x103))<x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = 50;
	volatile uint16_t x107 = UINT16_MAX;
	static int8_t x108 = INT8_MAX;
	static int32_t t25 = -1268028;

	t25 = ((x105|(x106%x107))<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x109 = 7U;
	uint16_t x110 = 15U;
	int32_t x111 = INT32_MAX;
	volatile int32_t t26 = -148098457;

	t26 = ((x109|(x110%x111))<x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = -1;
	uint8_t x116 = UINT8_MAX;

	t27 = ((x113|(x114%x115))<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1;
	int16_t x118 = -1;
	volatile int32_t t28 = 423;

	t28 = ((x117|(x118%x119))<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x121 = 138593LLU;
	uint64_t x122 = 40921946813483LLU;
	volatile int8_t x123 = INT8_MAX;
	uint8_t x124 = UINT8_MAX;
	static int32_t t29 = 4790321;

	t29 = ((x121|(x122%x123))<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x126 = 1512U;
	uint16_t x127 = 20847U;
	int64_t x128 = 218245881948937109LL;

	t30 = ((x125|(x126%x127))<x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MAX;
	uint32_t x130 = 29327348U;
	int16_t x131 = INT16_MIN;
	volatile int64_t x132 = INT64_MIN;
	static int32_t t31 = -168772608;

	t31 = ((x129|(x130%x131))<x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x134 = 665U;
	uint64_t x135 = 14157LLU;
	int16_t x136 = -1;
	int32_t t32 = -870438207;

	t32 = ((x133|(x134%x135))<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int32_t x139 = -1;
	volatile int32_t t33 = -14168;

	t33 = ((x137|(x138%x139))<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	static int8_t x144 = INT8_MAX;

	t34 = ((x141|(x142%x143))<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = -6;
	volatile uint16_t x147 = 2053U;
	static int32_t x148 = INT32_MIN;

	t35 = ((x145|(x146%x147))<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;

	t36 = ((x149|(x150%x151))<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = 23938LL;
	int32_t x155 = INT32_MAX;
	int32_t t37 = -325067;

	t37 = ((x153|(x154%x155))<x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	static int16_t x158 = -837;
	int64_t x159 = INT64_MAX;
	int32_t t38 = -113555986;

	t38 = ((x157|(x158%x159))<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x162 = 1U;
	volatile uint16_t x163 = 4583U;
	int64_t x164 = -51651536LL;
	int32_t t39 = 240;

	t39 = ((x161|(x162%x163))<x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x165 = UINT16_MAX;
	static uint32_t x166 = 523109U;
	int64_t x167 = 3436690376753109529LL;
	int8_t x168 = -46;
	volatile int32_t t40 = -21228;

	t40 = ((x165|(x166%x167))<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 7U;
	uint8_t x170 = 72U;
	int16_t x172 = 1;
	int32_t t41 = 7083;

	t41 = ((x169|(x170%x171))<x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = -1LL;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int32_t t42 = -5017;

	t42 = ((x173|(x174%x175))<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MIN;
	int32_t t43 = 0;

	t43 = ((x177|(x178%x179))<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x181 = UINT16_MAX;
	static int16_t x182 = -2;
	static volatile int16_t x183 = INT16_MIN;
	volatile uint64_t x184 = 1691LLU;
	volatile int32_t t44 = 2913383;

	t44 = ((x181|(x182%x183))<x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = UINT32_MAX;
	uint8_t x186 = UINT8_MAX;
	int64_t x188 = -422978629371079LL;
	volatile int32_t t45 = 27191;

	t45 = ((x185|(x186%x187))<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	int32_t x190 = -1;
	volatile int64_t x191 = 136098691640515074LL;
	int8_t x192 = INT8_MIN;
	static int32_t t46 = 1522547;

	t46 = ((x189|(x190%x191))<x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = -1;
	uint64_t x199 = 275615253837031285LLU;
	uint32_t x200 = 125330389U;
	static volatile int32_t t47 = 52391980;

	t47 = ((x197|(x198%x199))<x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x203 = 15U;
	int16_t x204 = -393;
	static int32_t t48 = -138026;

	t48 = ((x201|(x202%x203))<x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x205 = 14;
	int32_t x206 = INT32_MIN;
	static uint16_t x207 = UINT16_MAX;
	int32_t t49 = 1;

	t49 = ((x205|(x206%x207))<x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = 107U;
	volatile uint64_t x210 = UINT64_MAX;
	int16_t x211 = INT16_MAX;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t50 = 3;

	t50 = ((x209|(x210%x211))<x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = INT16_MIN;
	int8_t x214 = 9;
	static int64_t x215 = INT64_MIN;
	uint8_t x216 = 87U;
	static volatile int32_t t51 = -977008237;

	t51 = ((x213|(x214%x215))<x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = INT32_MAX;
	int64_t x218 = -1LL;
	volatile uint32_t x219 = UINT32_MAX;
	uint16_t x220 = UINT16_MAX;
	int32_t t52 = -7;

	t52 = ((x217|(x218%x219))<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x222 = 52U;
	static volatile int32_t t53 = -409710412;

	t53 = ((x221|(x222%x223))<x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MAX;
	int8_t x226 = -1;
	uint64_t x228 = 8540530350946262LLU;
	int32_t t54 = 9218288;

	t54 = ((x225|(x226%x227))<x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x234 = INT8_MIN;
	static uint16_t x235 = UINT16_MAX;
	static uint32_t x236 = 3256461U;
	int32_t t55 = -49263;

	t55 = ((x233|(x234%x235))<x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x237 = -1;
	static int32_t x238 = INT32_MIN;
	int32_t t56 = -11;

	t56 = ((x237|(x238%x239))<x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x241 = 148845013663729168LL;
	volatile int64_t x242 = INT64_MIN;
	int8_t x243 = INT8_MIN;
	static int64_t x244 = -44173387539LL;

	t57 = ((x241|(x242%x243))<x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	uint64_t x246 = UINT64_MAX;
	static int32_t x248 = -580096;
	int32_t t58 = -206995;

	t58 = ((x245|(x246%x247))<x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x249 = UINT64_MAX;
	uint64_t x250 = 325286436LLU;
	volatile uint32_t x251 = 1U;
	int16_t x252 = -34;
	int32_t t59 = 1;

	t59 = ((x249|(x250%x251))<x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MIN;
	volatile uint8_t x254 = 20U;
	volatile uint16_t x256 = 10U;
	int32_t t60 = -1477880;

	t60 = ((x253|(x254%x255))<x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 291599U;
	static int8_t x259 = -1;

	t61 = ((x257|(x258%x259))<x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = 354413456103305587LL;
	volatile int32_t x263 = INT32_MIN;
	static int32_t x264 = INT32_MAX;
	static volatile int32_t t62 = 1072;

	t62 = ((x261|(x262%x263))<x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = -474814;
	uint64_t x266 = 312461118589416LLU;
	uint16_t x268 = 0U;

	t63 = ((x265|(x266%x267))<x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x270 = INT16_MIN;
	uint32_t x272 = UINT32_MAX;

	t64 = ((x269|(x270%x271))<x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x274 = INT16_MIN;
	volatile int64_t x275 = INT64_MIN;
	uint64_t x276 = 1073065997LLU;
	int32_t t65 = 168939;

	t65 = ((x273|(x274%x275))<x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x277 = -30;
	static int32_t x278 = INT32_MAX;
	int32_t t66 = -89862009;

	t66 = ((x277|(x278%x279))<x280);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = 1;
	int32_t x282 = 166621;
	uint32_t x283 = 28925097U;
	int8_t x284 = -1;

	t67 = ((x281|(x282%x283))<x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = -1;
	int8_t x286 = INT8_MIN;
	int16_t x287 = 16220;
	int64_t x288 = -1LL;
	int32_t t68 = -14812824;

	t68 = ((x285|(x286%x287))<x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MAX;
	uint64_t x291 = UINT64_MAX;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t69 = -1;

	t69 = ((x289|(x290%x291))<x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = 57;
	int32_t x294 = 38;
	int8_t x295 = INT8_MIN;

	t70 = ((x293|(x294%x295))<x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = 95U;
	int64_t x298 = INT64_MIN;
	uint8_t x299 = UINT8_MAX;
	int32_t t71 = 41;

	t71 = ((x297|(x298%x299))<x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x303 = 1216329733661428LLU;
	volatile int8_t x304 = INT8_MIN;
	volatile int32_t t72 = -1;

	t72 = ((x301|(x302%x303))<x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x305 = 304U;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = 1;
	int32_t t73 = 120587;

	t73 = ((x305|(x306%x307))<x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x309 = 1107695756LL;
	static uint8_t x310 = 14U;
	int8_t x311 = -5;
	uint64_t x312 = UINT64_MAX;
	int32_t t74 = -15;

	t74 = ((x309|(x310%x311))<x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x314 = INT8_MIN;
	uint64_t x315 = 86120238184LLU;
	uint32_t x316 = 43U;
	volatile int32_t t75 = 105586;

	t75 = ((x313|(x314%x315))<x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x317 = INT64_MIN;
	static uint16_t x318 = UINT16_MAX;
	uint16_t x319 = UINT16_MAX;

	t76 = ((x317|(x318%x319))<x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	static int32_t x323 = INT32_MIN;
	static int64_t x324 = INT64_MIN;
	volatile int32_t t77 = -63085;

	t77 = ((x321|(x322%x323))<x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = -1;
	int64_t x326 = INT64_MIN;

	t78 = ((x325|(x326%x327))<x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 322U;
	static int32_t x330 = 6919956;
	static int8_t x331 = -1;

	t79 = ((x329|(x330%x331))<x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x333 = -46;
	int32_t x334 = INT32_MIN;
	uint16_t x335 = 3245U;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t80 = 0;

	t80 = ((x333|(x334%x335))<x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MAX;
	int8_t x339 = INT8_MAX;
	int16_t x340 = 1640;
	volatile int32_t t81 = 661;

	t81 = ((x337|(x338%x339))<x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x341 = INT8_MAX;
	int8_t x342 = INT8_MIN;
	static uint32_t x343 = 5393936U;

	t82 = ((x341|(x342%x343))<x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = UINT64_MAX;
	uint64_t x346 = UINT64_MAX;
	int32_t x347 = -1;
	volatile uint16_t x348 = 245U;
	static int32_t t83 = 10;

	t83 = ((x345|(x346%x347))<x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = 15288;
	static volatile int16_t x350 = -1;
	static uint32_t x351 = 3374093U;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t84 = -62022320;

	t84 = ((x349|(x350%x351))<x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x353 = UINT8_MAX;
	volatile int16_t x354 = INT16_MIN;
	uint16_t x355 = 17822U;
	int8_t x356 = 4;
	int32_t t85 = -14972;

	t85 = ((x353|(x354%x355))<x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 35U;
	uint64_t x358 = 249760920803410LLU;
	uint64_t x359 = 33649267992987LLU;
	int16_t x360 = -18;
	int32_t t86 = -33;

	t86 = ((x357|(x358%x359))<x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x361 = 2U;
	static int8_t x362 = 1;
	int16_t x363 = INT16_MAX;
	volatile uint64_t x364 = 142600745LLU;
	volatile int32_t t87 = 2682;

	t87 = ((x361|(x362%x363))<x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x365 = 261U;
	static int32_t x367 = -891984;
	int16_t x368 = 6648;
	volatile int32_t t88 = -350766;

	t88 = ((x365|(x366%x367))<x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = UINT8_MAX;
	static int64_t x370 = INT64_MIN;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t89 = -3;

	t89 = ((x369|(x370%x371))<x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x373 = INT16_MIN;
	volatile uint32_t x374 = 80722057U;
	volatile int16_t x375 = -6;
	int16_t x376 = INT16_MIN;
	volatile int32_t t90 = -89173;

	t90 = ((x373|(x374%x375))<x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x377 = UINT32_MAX;
	uint32_t x378 = 6010U;
	int16_t x380 = INT16_MIN;
	int32_t t91 = -261012631;

	t91 = ((x377|(x378%x379))<x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x382 = 106852494LLU;
	int32_t x384 = -6;
	static int32_t t92 = -965547;

	t92 = ((x381|(x382%x383))<x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x389 = 8731U;
	volatile int8_t x390 = INT8_MAX;
	static int64_t x391 = INT64_MIN;
	int32_t t93 = -18165501;

	t93 = ((x389|(x390%x391))<x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -1LL;
	int64_t x394 = -1LL;
	int32_t x395 = -141;
	static uint8_t x396 = UINT8_MAX;

	t94 = ((x393|(x394%x395))<x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -1LL;
	uint16_t x400 = UINT16_MAX;
	static int32_t t95 = 2758197;

	t95 = ((x397|(x398%x399))<x400);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x401 = 15423887288LLU;
	static volatile int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MAX;
	int32_t x404 = -1;

	t96 = ((x401|(x402%x403))<x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x405 = 110U;
	int16_t x406 = -1;
	static int32_t x408 = -1;
	int32_t t97 = 0;

	t97 = ((x405|(x406%x407))<x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MIN;
	static int64_t x410 = 587LL;
	int64_t x412 = INT64_MIN;
	volatile int32_t t98 = 263255;

	t98 = ((x409|(x410%x411))<x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x413 = 313U;
	volatile uint64_t x414 = 16597417539LLU;
	static volatile uint16_t x415 = 3295U;
	uint16_t x416 = UINT16_MAX;
	int32_t t99 = 678158681;

	t99 = ((x413|(x414%x415))<x416);

	if (t99 != 1) { NG(); } else { ; }
	
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

