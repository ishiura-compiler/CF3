#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x4 = 6932U;
int64_t x7 = INT64_MAX;
volatile int16_t x10 = INT16_MAX;
static int32_t x15 = -396289;
static int32_t t3 = 791;
int16_t x20 = -1;
int32_t t4 = -20743715;
uint64_t x23 = UINT64_MAX;
uint16_t x27 = 25U;
volatile int32_t t6 = -788218277;
uint64_t x29 = 732696780286632559LLU;
int64_t x31 = 41178926351LL;
int32_t x35 = 565941737;
static volatile uint16_t x36 = UINT16_MAX;
volatile uint64_t x37 = UINT64_MAX;
volatile int32_t t9 = -23099;
volatile uint64_t x43 = 29966864571673LLU;
int64_t x49 = INT64_MAX;
int64_t x50 = -18991121LL;
int32_t x53 = -1;
int32_t x55 = INT32_MIN;
int32_t x58 = INT32_MAX;
volatile int32_t t15 = 3;
int32_t t16 = 15;
static int16_t x70 = INT16_MIN;
uint16_t x76 = UINT16_MAX;
static int16_t x78 = 12621;
int64_t x80 = INT64_MIN;
int8_t x82 = INT8_MIN;
int16_t x86 = 8470;
volatile int16_t x89 = INT16_MIN;
int32_t t22 = -23;
volatile uint16_t x95 = UINT16_MAX;
volatile uint16_t x98 = 78U;
int16_t x99 = INT16_MIN;
static int16_t x107 = INT16_MAX;
int8_t x109 = INT8_MAX;
uint16_t x113 = 3U;
static int8_t x126 = 15;
int64_t x139 = INT64_MIN;
int32_t x146 = INT32_MIN;
volatile int32_t t36 = -4983052;
static volatile int32_t t37 = 3;
volatile int32_t t38 = 1510595;
int64_t x167 = INT64_MIN;
int16_t x168 = 219;
static volatile int16_t x171 = INT16_MIN;
static int8_t x176 = INT8_MIN;
int32_t x178 = 67516294;
volatile int32_t t42 = 912;
int16_t x183 = 1404;
uint32_t x190 = 1490540U;
int32_t t44 = 5;
static volatile int16_t x193 = -1;
uint8_t x196 = 2U;
static int64_t x197 = -1LL;
static int64_t x199 = INT64_MIN;
static int16_t x200 = -14;
uint32_t x202 = UINT32_MAX;
static uint64_t x209 = 959447882688LLU;
volatile int32_t t48 = -140121677;
uint32_t x213 = 706133U;
int8_t x223 = INT8_MIN;
int16_t x224 = -1;
volatile int32_t t51 = 359995029;
static volatile int8_t x226 = 16;
int16_t x234 = -1;
uint32_t x235 = 2092348U;
static volatile int32_t x239 = INT32_MAX;
volatile int8_t x243 = -1;
uint64_t x248 = 7788750064938574602LLU;
int8_t x250 = -2;
uint8_t x262 = 10U;
int32_t t61 = 732591;
volatile int64_t x267 = -81512LL;
int64_t x272 = INT64_MIN;
int32_t x279 = INT32_MIN;
int16_t x281 = 222;
int8_t x287 = -1;
int32_t x288 = INT32_MIN;
int32_t t67 = 339210046;
uint16_t x291 = 6453U;
int32_t x292 = 94;
int64_t x293 = -112120578311LL;
volatile uint16_t x310 = UINT16_MAX;
int8_t x318 = INT8_MIN;
volatile int32_t t79 = -44835034;
int32_t t80 = -87;
volatile int32_t t81 = -55;
int16_t x355 = INT16_MAX;
int8_t x357 = INT8_MIN;
volatile int32_t t86 = -32327;
int64_t x367 = -7LL;
static int32_t x368 = 15052660;
volatile int32_t t87 = -751175502;
int32_t x371 = INT32_MIN;
uint32_t x372 = 26623U;
volatile uint8_t x374 = 89U;
static int16_t x376 = INT16_MAX;
volatile int32_t t89 = -90;
int32_t x379 = -1;
volatile int32_t t91 = -1926003;
volatile int32_t x388 = -251020850;
uint64_t x393 = 124889973LLU;
static int16_t x399 = INT16_MAX;
int32_t t94 = 233;
int8_t x406 = INT8_MIN;
int32_t x410 = 2040;
int32_t x414 = INT32_MAX;
int8_t x419 = INT8_MIN;


void f0(void) {
	static int16_t x1 = 214;
	uint8_t x2 = 9U;
	int32_t x3 = -24771860;
	volatile int32_t t0 = 25105;

	t0 = (((x1/x2)|x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 236U;
	uint32_t x6 = 340591249U;
	volatile uint64_t x8 = 890171600046765LLU;
	volatile int32_t t1 = -5790;

	t1 = (((x5/x6)|x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile int32_t x11 = 1880;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -500064;

	t2 = (((x9/x10)|x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	static uint32_t x14 = UINT32_MAX;
	int8_t x16 = 8;

	t3 = (((x13/x14)|x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int8_t x18 = INT8_MIN;
	int32_t x19 = -1;

	t4 = (((x17/x18)|x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 398U;
	static int64_t x22 = -3658675329176LL;
	uint8_t x24 = 1U;
	int32_t t5 = 474086;

	t5 = (((x21/x22)|x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	uint32_t x26 = 221668U;
	static volatile int16_t x28 = 0;

	t6 = (((x25/x26)|x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -24;
	static int32_t x32 = -38498936;
	static volatile int32_t t7 = 928;

	t7 = (((x29/x30)|x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint16_t x34 = UINT16_MAX;
	volatile int32_t t8 = -1;

	t8 = (((x33/x34)|x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x38 = 50U;
	static int64_t x39 = 19666288724LL;
	volatile uint16_t x40 = 13011U;

	t9 = (((x37/x38)|x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	int32_t x42 = INT32_MIN;
	int32_t x44 = -1;
	volatile int32_t t10 = 42355648;

	t10 = (((x41/x42)|x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 554848U;
	int8_t x46 = INT8_MIN;
	static volatile int64_t x47 = INT64_MIN;
	int16_t x48 = -1882;
	volatile int32_t t11 = 15;

	t11 = (((x45/x46)|x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x51 = INT16_MAX;
	int32_t x52 = 301;
	int32_t t12 = -219;

	t12 = (((x49/x50)|x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MAX;
	int64_t x56 = -476LL;
	int32_t t13 = -298017415;

	t13 = (((x53/x54)|x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	uint8_t x59 = 6U;
	volatile uint32_t x60 = 265U;
	int32_t t14 = 886;

	t14 = (((x57/x58)|x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 51;
	int8_t x62 = -1;
	int64_t x63 = 1LL;
	int8_t x64 = -2;

	t15 = (((x61/x62)|x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -1LL;
	volatile uint16_t x66 = 60U;
	volatile int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MIN;

	t16 = (((x65/x66)|x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	uint16_t x71 = 149U;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -89;

	t17 = (((x69/x70)|x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 5U;
	int8_t x74 = INT8_MIN;
	static uint16_t x75 = 58U;
	volatile int32_t t18 = 397;

	t18 = (((x73/x74)|x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint16_t x79 = UINT16_MAX;
	volatile int32_t t19 = -525293074;

	t19 = (((x77/x78)|x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x81 = UINT64_MAX;
	uint64_t x83 = 3113146427LLU;
	static int8_t x84 = -1;
	volatile int32_t t20 = -263;

	t20 = (((x81/x82)|x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 10936U;
	uint32_t x87 = UINT32_MAX;
	int8_t x88 = INT8_MAX;
	int32_t t21 = 577747468;

	t21 = (((x85/x86)|x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 457775595385LLU;

	t22 = (((x89/x90)|x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 24448U;
	uint64_t x94 = 58699618LLU;
	volatile int64_t x96 = INT64_MAX;
	int32_t t23 = 2;

	t23 = (((x93/x94)|x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 3U;
	uint16_t x100 = 111U;
	int32_t t24 = 373907;

	t24 = (((x97/x98)|x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = -49;
	static volatile int32_t x103 = -7623;
	int8_t x104 = 0;
	volatile int32_t t25 = 17;

	t25 = (((x101/x102)|x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 3;
	int64_t x106 = 256443808LL;
	int32_t x108 = -1;
	volatile int32_t t26 = -5800;

	t26 = (((x105/x106)|x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = 9;
	int16_t x111 = INT16_MIN;
	static uint32_t x112 = 15013U;
	int32_t t27 = 12573;

	t27 = (((x109/x110)|x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = UINT32_MAX;
	static uint16_t x115 = 6U;
	static int8_t x116 = -1;
	volatile int32_t t28 = 0;

	t28 = (((x113/x114)|x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = -1;
	uint16_t x118 = 1U;
	static volatile int64_t x119 = INT64_MAX;
	static int64_t x120 = -3654443095293662965LL;
	int32_t t29 = 167726;

	t29 = (((x117/x118)|x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static int64_t x122 = INT64_MIN;
	int8_t x123 = 1;
	static int16_t x124 = INT16_MAX;
	static volatile int32_t t30 = -58;

	t30 = (((x121/x122)|x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 286391051209737459LLU;
	int32_t x127 = INT32_MIN;
	uint32_t x128 = 30493345U;
	volatile int32_t t31 = -2;

	t31 = (((x125/x126)|x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = -3;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = -1;
	static volatile int32_t t32 = -3204;

	t32 = (((x129/x130)|x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1398;
	static int32_t x134 = INT32_MIN;
	int16_t x135 = -1;
	int8_t x136 = -1;
	static volatile int32_t t33 = -22;

	t33 = (((x133/x134)|x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -1;
	int8_t x138 = -1;
	uint32_t x140 = 7666U;
	int32_t t34 = 150539230;

	t34 = (((x137/x138)|x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x145 = UINT8_MAX;
	int8_t x147 = -1;
	int8_t x148 = -1;
	volatile int32_t t35 = 24676;

	t35 = (((x145/x146)|x147)<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x153 = UINT8_MAX;
	static int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	int8_t x156 = -1;

	t36 = (((x153/x154)|x155)<x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 324;
	int16_t x158 = INT16_MAX;
	static uint64_t x159 = UINT64_MAX;
	static int64_t x160 = 2219109522953LL;

	t37 = (((x157/x158)|x159)<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MIN;
	uint16_t x163 = 48U;
	static int32_t x164 = INT32_MIN;

	t38 = (((x161/x162)|x163)<x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = 15257U;
	static int32_t t39 = -957;

	t39 = (((x165/x166)|x167)<x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = -1;
	int32_t x170 = 156053942;
	int16_t x172 = -169;
	volatile int32_t t40 = -2738643;

	t40 = (((x169/x170)|x171)<x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int8_t x174 = INT8_MIN;
	static int8_t x175 = 1;
	static int32_t t41 = -451561;

	t41 = (((x173/x174)|x175)<x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = UINT64_MAX;
	uint8_t x179 = 1U;
	volatile uint32_t x180 = UINT32_MAX;

	t42 = (((x177/x178)|x179)<x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MIN;
	volatile uint8_t x182 = 9U;
	int64_t x184 = 300740536940LL;
	volatile int32_t t43 = 4;

	t43 = (((x181/x182)|x183)<x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x189 = 3U;
	int16_t x191 = -86;
	int8_t x192 = INT8_MAX;

	t44 = (((x189/x190)|x191)<x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x194 = INT16_MAX;
	int64_t x195 = -1LL;
	int32_t t45 = 217;

	t45 = (((x193/x194)|x195)<x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x198 = 58U;
	volatile int32_t t46 = -50;

	t46 = (((x197/x198)|x199)<x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x201 = UINT8_MAX;
	static int8_t x203 = 0;
	int64_t x204 = INT64_MIN;
	volatile int32_t t47 = -348;

	t47 = (((x201/x202)|x203)<x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x210 = INT16_MIN;
	int8_t x211 = -15;
	volatile int32_t x212 = -1;

	t48 = (((x209/x210)|x211)<x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x214 = INT8_MIN;
	int16_t x215 = 3183;
	int64_t x216 = INT64_MAX;
	int32_t t49 = 0;

	t49 = (((x213/x214)|x215)<x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = 7207U;
	static volatile int16_t x218 = INT16_MIN;
	volatile int16_t x219 = -149;
	uint8_t x220 = 9U;
	static int32_t t50 = 27;

	t50 = (((x217/x218)|x219)<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x221 = -1;
	uint32_t x222 = 1U;

	t51 = (((x221/x222)|x223)<x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	volatile uint8_t x228 = UINT8_MAX;
	volatile int32_t t52 = -90182130;

	t52 = (((x225/x226)|x227)<x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = 337970LLU;
	uint16_t x230 = UINT16_MAX;
	uint64_t x231 = 215120986328LLU;
	uint16_t x232 = 6633U;
	volatile int32_t t53 = 0;

	t53 = (((x229/x230)|x231)<x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 63867707LLU;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t54 = -2534;

	t54 = (((x233/x234)|x235)<x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x237 = UINT32_MAX;
	static volatile uint64_t x238 = 229070924175LLU;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t55 = 21560562;

	t55 = (((x237/x238)|x239)<x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = -11174;
	int64_t x242 = 7414457LL;
	int16_t x244 = INT16_MIN;
	volatile int32_t t56 = -472428668;

	t56 = (((x241/x242)|x243)<x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x245 = 27U;
	int64_t x246 = -24493LL;
	volatile int16_t x247 = -1;
	volatile int32_t t57 = 241;

	t57 = (((x245/x246)|x247)<x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	volatile int16_t x251 = INT16_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t58 = -1;

	t58 = (((x249/x250)|x251)<x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -1;
	int16_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = -1;
	static int32_t t59 = -1;

	t59 = (((x253/x254)|x255)<x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = 0;
	int16_t x258 = INT16_MIN;
	int16_t x259 = -1;
	uint16_t x260 = 110U;
	static volatile int32_t t60 = 22523;

	t60 = (((x257/x258)|x259)<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x261 = INT64_MIN;
	static int64_t x263 = 84592531LL;
	int64_t x264 = -100LL;

	t61 = (((x261/x262)|x263)<x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = INT32_MIN;
	int16_t x268 = INT16_MAX;
	static int32_t t62 = 1;

	t62 = (((x265/x266)|x267)<x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -24;
	volatile uint64_t x270 = UINT64_MAX;
	int32_t x271 = INT32_MAX;
	int32_t t63 = 4079;

	t63 = (((x269/x270)|x271)<x272);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MIN;
	volatile int64_t x274 = -1LL;
	volatile uint8_t x275 = 14U;
	uint16_t x276 = UINT16_MAX;
	static volatile int32_t t64 = 285;

	t64 = (((x273/x274)|x275)<x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x277 = 577U;
	int64_t x278 = INT64_MAX;
	static int8_t x280 = 0;
	int32_t t65 = -67;

	t65 = (((x277/x278)|x279)<x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x282 = -1;
	static int32_t x283 = -1;
	int32_t x284 = INT32_MIN;
	int32_t t66 = 117;

	t66 = (((x281/x282)|x283)<x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MIN;

	t67 = (((x285/x286)|x287)<x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x289 = 34450346U;
	uint8_t x290 = 1U;
	volatile int32_t t68 = 25960351;

	t68 = (((x289/x290)|x291)<x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MIN;
	static uint16_t x296 = 0U;
	int32_t t69 = -4262696;

	t69 = (((x293/x294)|x295)<x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x297 = INT8_MIN;
	int16_t x298 = 811;
	static volatile uint8_t x299 = 7U;
	static uint32_t x300 = 758980749U;
	volatile int32_t t70 = 654637;

	t70 = (((x297/x298)|x299)<x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x301 = -1LL;
	int64_t x302 = INT64_MIN;
	int64_t x303 = -1LL;
	static int8_t x304 = -1;
	static volatile int32_t t71 = 24551;

	t71 = (((x301/x302)|x303)<x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x305 = UINT16_MAX;
	uint8_t x306 = UINT8_MAX;
	static volatile int16_t x307 = -1;
	volatile int16_t x308 = 1;
	int32_t t72 = -2;

	t72 = (((x305/x306)|x307)<x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x309 = 2U;
	volatile int8_t x311 = 1;
	volatile int64_t x312 = INT64_MIN;
	volatile int32_t t73 = -195;

	t73 = (((x309/x310)|x311)<x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = 16489457516481LLU;
	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	int16_t x316 = INT16_MAX;
	volatile int32_t t74 = -292464580;

	t74 = (((x313/x314)|x315)<x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -1;
	int8_t x319 = -15;
	int8_t x320 = -1;
	int32_t t75 = -150;

	t75 = (((x317/x318)|x319)<x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x321 = 2268LLU;
	static int64_t x322 = INT64_MIN;
	static uint16_t x323 = 42U;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t76 = -14007734;

	t76 = (((x321/x322)|x323)<x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = 3264485093860LL;
	volatile uint32_t x326 = UINT32_MAX;
	int64_t x327 = INT64_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t77 = 43;

	t77 = (((x325/x326)|x327)<x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x329 = INT8_MAX;
	int8_t x330 = INT8_MIN;
	int32_t x331 = -53031835;
	int16_t x332 = -1;
	static int32_t t78 = -6108;

	t78 = (((x329/x330)|x331)<x332);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = INT64_MAX;
	static uint16_t x335 = 4597U;
	int8_t x336 = 12;

	t79 = (((x333/x334)|x335)<x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = UINT8_MAX;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = -1LL;
	volatile int8_t x340 = 0;

	t80 = (((x337/x338)|x339)<x340);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = UINT64_MAX;
	int32_t x342 = -5;
	uint8_t x343 = 0U;
	int64_t x344 = INT64_MIN;

	t81 = (((x341/x342)|x343)<x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = 1988U;
	static volatile uint64_t x347 = UINT64_MAX;
	volatile uint16_t x348 = 24U;
	int32_t t82 = -97;

	t82 = (((x345/x346)|x347)<x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x349 = UINT64_MAX;
	static int8_t x350 = 1;
	static int16_t x351 = 1;
	volatile uint64_t x352 = 29248184015930777LLU;
	volatile int32_t t83 = 13906;

	t83 = (((x349/x350)|x351)<x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = -1;
	int8_t x354 = -1;
	static int32_t x356 = INT32_MIN;
	static int32_t t84 = 20552;

	t84 = (((x353/x354)|x355)<x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MAX;
	int32_t x360 = 77836;
	volatile int32_t t85 = 9698;

	t85 = (((x357/x358)|x359)<x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x361 = UINT8_MAX;
	static int8_t x362 = INT8_MAX;
	static int8_t x363 = INT8_MAX;
	int32_t x364 = -1;

	t86 = (((x361/x362)|x363)<x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x365 = INT16_MIN;
	volatile uint8_t x366 = UINT8_MAX;

	t87 = (((x365/x366)|x367)<x368);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	volatile int32_t x370 = INT32_MIN;
	int32_t t88 = 147097506;

	t88 = (((x369/x370)|x371)<x372);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x373 = UINT64_MAX;
	static volatile int16_t x375 = -1;

	t89 = (((x373/x374)|x375)<x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = 40180231;
	int32_t x378 = INT32_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t90 = -38427686;

	t90 = (((x377/x378)|x379)<x380);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x381 = INT32_MIN;
	uint64_t x382 = 64844LLU;
	static uint32_t x383 = UINT32_MAX;
	uint64_t x384 = UINT64_MAX;

	t91 = (((x381/x382)|x383)<x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 90973941677052LLU;
	uint16_t x386 = 8U;
	int32_t x387 = 35663;
	int32_t t92 = -2945;

	t92 = (((x385/x386)|x387)<x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t93 = 38248603;

	t93 = (((x393/x394)|x395)<x396);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x397 = 790788LLU;
	int64_t x398 = -57708804019954LL;
	volatile int64_t x400 = -1LL;

	t94 = (((x397/x398)|x399)<x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = -1;
	static uint64_t x407 = 4050LLU;
	static int32_t x408 = INT32_MIN;
	int32_t t95 = -87327;

	t95 = (((x405/x406)|x407)<x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = 30;
	static uint8_t x411 = 0U;
	volatile int32_t x412 = INT32_MAX;
	int32_t t96 = -1067589251;

	t96 = (((x409/x410)|x411)<x412);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x413 = 2309823521465785292LLU;
	int8_t x415 = 0;
	int64_t x416 = 4730778148587576LL;
	int32_t t97 = -1841007;

	t97 = (((x413/x414)|x415)<x416);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x417 = UINT8_MAX;
	static int64_t x418 = INT64_MIN;
	int8_t x420 = -1;
	int32_t t98 = -3504;

	t98 = (((x417/x418)|x419)<x420);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int16_t x422 = INT16_MIN;
	static uint8_t x423 = 1U;
	int32_t x424 = -5;
	int32_t t99 = -48;

	t99 = (((x421/x422)|x423)<x424);

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

