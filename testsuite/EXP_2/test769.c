#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -37;
static uint8_t x13 = UINT8_MAX;
uint8_t x16 = 0U;
int16_t x19 = INT16_MIN;
uint8_t x20 = 1U;
uint8_t x24 = 93U;
uint8_t x29 = 16U;
uint32_t x31 = 895U;
int64_t t5 = -11LL;
static uint64_t x48 = 7256068629123LLU;
uint32_t x51 = UINT32_MAX;
volatile int32_t t10 = -54;
static int8_t x56 = 21;
static volatile int32_t t11 = -29756;
int32_t x61 = INT32_MIN;
int16_t x63 = -1;
volatile uint64_t t13 = 31599741328956253LLU;
uint64_t x69 = 466093004546462LLU;
static int16_t x70 = -1;
static int8_t x72 = INT8_MIN;
int8_t x76 = -1;
int32_t x85 = -756;
int32_t x91 = INT32_MIN;
uint32_t t18 = 3258U;
static int8_t x94 = 22;
volatile uint8_t x96 = UINT8_MAX;
int32_t x98 = 537;
volatile int8_t x99 = -11;
volatile int32_t t20 = -859362;
volatile int64_t x104 = -1LL;
volatile uint64_t x109 = 350LLU;
int16_t x115 = INT16_MAX;
static int32_t x126 = INT32_MIN;
static int32_t x133 = INT32_MIN;
int64_t x137 = 0LL;
static uint64_t x140 = 1031523310454144LLU;
int16_t x147 = -1;
uint64_t t32 = 142306104520575934LLU;
static int64_t x149 = 27LL;
static int8_t x150 = 13;
static uint32_t t33 = 6814U;
int16_t x159 = -901;
volatile int32_t x169 = INT32_MAX;
int16_t x172 = 6;
volatile int32_t x173 = -187;
int32_t t38 = 516804;
int8_t x190 = 1;
int64_t x197 = INT64_MIN;
volatile uint64_t t42 = 0LLU;
volatile uint32_t t44 = 1686085U;
uint8_t x216 = 16U;
uint32_t x225 = 5692U;
static int64_t x226 = -1LL;
int32_t x230 = 6299;
volatile uint32_t x232 = UINT32_MAX;
static volatile uint32_t t50 = 7U;
volatile uint64_t t51 = 69469386998791LLU;
volatile int16_t x260 = -7;
int8_t x261 = INT8_MIN;
uint32_t x263 = 3839485U;
int16_t x273 = INT16_MIN;
int16_t x275 = INT16_MAX;
int32_t x283 = 561920558;
int32_t t61 = -38183;
volatile uint64_t x287 = 48659158073909945LLU;
volatile int32_t t62 = 3874;
int32_t t63 = -2781;
uint64_t x300 = 10873LLU;
static volatile uint64_t t65 = 7820LLU;
int16_t x313 = INT16_MIN;
volatile uint64_t x317 = 62200LLU;
volatile int16_t x320 = INT16_MIN;
volatile uint32_t x324 = 279379U;
static uint16_t x334 = UINT16_MAX;
volatile uint16_t x335 = 6U;
int32_t t73 = -1285;
int32_t t74 = 12987399;
static int8_t x344 = INT8_MIN;
int32_t x353 = -23386;
int32_t t78 = -13450;
uint8_t x359 = UINT8_MAX;
uint64_t x361 = 1742030295816074550LLU;
int16_t x362 = INT16_MAX;
uint16_t x370 = 48U;
volatile uint64_t t84 = 14917358556985145LLU;
int64_t x390 = 59418765889305LL;
volatile int16_t x393 = 1996;
int16_t x403 = -6;
static uint32_t x405 = 31U;
int8_t x418 = INT8_MIN;
int8_t x421 = INT8_MIN;
int8_t x422 = INT8_MIN;
int32_t t92 = 56;
static uint16_t x429 = UINT16_MAX;
uint32_t x430 = 34U;
static int32_t t95 = 65621865;
int32_t t97 = 64;
static int8_t x447 = INT8_MAX;


void f0(void) {
	uint64_t x5 = 264668916565337LLU;
	static int8_t x6 = -1;
	int16_t x7 = 9482;
	static uint8_t x8 = 0U;

	t0 = ((x5==(x6%x7))-x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x14 = 110U;
	volatile uint16_t x15 = 613U;
	static volatile int32_t t1 = 55;

	t1 = ((x13==(x14%x15))-x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MAX;
	static int32_t t2 = -442;

	t2 = ((x17==(x18%x19))-x20);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 6U;
	volatile int16_t x22 = INT16_MIN;
	volatile int32_t x23 = -118;
	volatile int32_t t3 = 545842862;

	t3 = ((x21==(x22%x23))-x24);

	if (t3 != -93) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 81358831U;
	uint16_t x26 = 3283U;
	int8_t x27 = 31;
	static uint64_t x28 = 40461433345LLU;
	volatile uint64_t t4 = 1353228727441LLU;

	t4 = ((x25==(x26%x27))-x28);

	if (t4 != 18446744033248118271LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x30 = -382735737;
	int64_t x32 = 96019339LL;

	t5 = ((x29==(x30%x31))-x32);

	if (t5 != -96019339LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	volatile int32_t x34 = INT32_MAX;
	static int64_t x35 = INT64_MAX;
	int16_t x36 = INT16_MAX;
	int32_t t6 = -192279;

	t6 = ((x33==(x34%x35))-x36);

	if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x37 = 2820U;
	int8_t x38 = 1;
	int32_t x39 = INT32_MIN;
	int8_t x40 = -1;
	int32_t t7 = -22;

	t7 = ((x37==(x38%x39))-x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = 28U;
	static uint16_t x42 = UINT16_MAX;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 60U;
	static int32_t t8 = -2421;

	t8 = ((x41==(x42%x43))-x44);

	if (t8 != -60) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -61LL;
	int32_t x46 = 15446427;
	int8_t x47 = -1;
	uint64_t t9 = 141052018821LLU;

	t9 = ((x45==(x46%x47))-x48);

	if (t9 != 18446736817640922493LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = INT64_MAX;
	int16_t x50 = 2039;
	int8_t x52 = -1;

	t10 = ((x49==(x50%x51))-x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 12038U;
	int16_t x54 = 8;
	int8_t x55 = -2;

	t11 = ((x53==(x54%x55))-x56);

	if (t11 != -21) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 945U;
	volatile int64_t x58 = -1LL;
	volatile int16_t x59 = -1;
	uint8_t x60 = 4U;
	volatile int32_t t12 = -6688579;

	t12 = ((x57==(x58%x59))-x60);

	if (t12 != -4) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x62 = -27494457;
	uint64_t x64 = 13691347LLU;

	t13 = ((x61==(x62%x63))-x64);

	if (t13 != 18446744073695860269LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x71 = 2439U;
	volatile int32_t t14 = 438227;

	t14 = ((x69==(x70%x71))-x72);

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = 2209;
	int16_t x74 = INT16_MAX;
	volatile int64_t x75 = -1LL;
	volatile int32_t t15 = -697;

	t15 = ((x73==(x74%x75))-x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -4249;
	int64_t x82 = INT64_MIN;
	static volatile int16_t x83 = -1;
	uint32_t x84 = 53105U;
	uint32_t t16 = 679U;

	t16 = ((x81==(x82%x83))-x84);

	if (t16 != 4294914191U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x86 = 5U;
	uint64_t x87 = UINT64_MAX;
	static int64_t x88 = -1LL;
	int64_t t17 = 195333LL;

	t17 = ((x85==(x86%x87))-x88);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MIN;
	static int16_t x90 = 15910;
	static uint32_t x92 = 416U;

	t18 = ((x89==(x90%x91))-x92);

	if (t18 != 4294966880U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = -37;
	uint64_t x95 = 176055664LLU;
	volatile int32_t t19 = -54115732;

	t19 = ((x93==(x94%x95))-x96);

	if (t19 != -255) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x97 = UINT64_MAX;
	uint8_t x100 = 1U;

	t20 = ((x97==(x98%x99))-x100);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = 13870LLU;
	uint8_t x102 = 0U;
	static int16_t x103 = 493;
	static volatile int64_t t21 = 608602492LL;

	t21 = ((x101==(x102%x103))-x104);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x105 = INT64_MIN;
	int16_t x106 = -1;
	uint8_t x107 = 1U;
	uint32_t x108 = 88710759U;
	volatile uint32_t t22 = 2U;

	t22 = ((x105==(x106%x107))-x108);

	if (t22 != 4206256537U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	static uint8_t x112 = 63U;
	int32_t t23 = -436493136;

	t23 = ((x109==(x110%x111))-x112);

	if (t23 != -63) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = 9;
	int16_t x114 = INT16_MIN;
	int8_t x116 = 1;
	int32_t t24 = -8;

	t24 = ((x113==(x114%x115))-x116);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = INT16_MIN;
	volatile uint64_t x118 = UINT64_MAX;
	volatile int64_t x119 = -1LL;
	uint8_t x120 = 3U;
	int32_t t25 = 0;

	t25 = ((x117==(x118%x119))-x120);

	if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x121 = UINT32_MAX;
	uint64_t x122 = UINT64_MAX;
	uint8_t x123 = 1U;
	int64_t x124 = -13LL;
	volatile int64_t t26 = 1LL;

	t26 = ((x121==(x122%x123))-x124);

	if (t26 != 13LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	static int16_t x127 = -357;
	uint16_t x128 = 3U;
	int32_t t27 = 327;

	t27 = ((x125==(x126%x127))-x128);

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x129 = -1;
	int16_t x130 = INT16_MAX;
	static int64_t x131 = INT64_MIN;
	volatile uint64_t x132 = 927LLU;
	uint64_t t28 = 21502418LLU;

	t28 = ((x129==(x130%x131))-x132);

	if (t28 != 18446744073709550689LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x134 = -75732765LL;
	int64_t x135 = -1LL;
	uint16_t x136 = 0U;
	volatile int32_t t29 = -2;

	t29 = ((x133==(x134%x135))-x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x138 = 0U;
	uint32_t x139 = UINT32_MAX;
	static uint64_t t30 = 93045175LLU;

	t30 = ((x137==(x138%x139))-x140);

	if (t30 != 18445712550399097473LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = -6;
	uint8_t x142 = 90U;
	static int8_t x143 = INT8_MIN;
	static uint64_t x144 = UINT64_MAX;
	volatile uint64_t t31 = 4314734928349352076LLU;

	t31 = ((x141==(x142%x143))-x144);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = -1LL;
	static uint32_t x146 = UINT32_MAX;
	uint64_t x148 = 9630LLU;

	t32 = ((x145==(x146%x147))-x148);

	if (t32 != 18446744073709541986LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x151 = 2U;
	uint32_t x152 = 5U;

	t33 = ((x149==(x150%x151))-x152);

	if (t33 != 4294967291U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x153 = UINT64_MAX;
	int64_t x154 = 16902902266422LL;
	volatile int8_t x155 = INT8_MIN;
	uint64_t x156 = UINT64_MAX;
	uint64_t t34 = 11855068277085LLU;

	t34 = ((x153==(x154%x155))-x156);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	static volatile uint8_t x160 = 20U;
	static volatile int32_t t35 = -501400144;

	t35 = ((x157==(x158%x159))-x160);

	if (t35 != -20) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x170 = 2;
	volatile int16_t x171 = INT16_MIN;
	volatile int32_t t36 = 1120;

	t36 = ((x169==(x170%x171))-x172);

	if (t36 != -6) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x174 = 0;
	static uint32_t x175 = 1200694U;
	static uint16_t x176 = 152U;
	static volatile int32_t t37 = -517497859;

	t37 = ((x173==(x174%x175))-x176);

	if (t37 != -152) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x177 = 14U;
	static uint16_t x178 = 305U;
	uint16_t x179 = 4U;
	uint8_t x180 = 20U;

	t38 = ((x177==(x178%x179))-x180);

	if (t38 != -20) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MIN;
	uint8_t x182 = 2U;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = 721537U;
	volatile uint32_t t39 = 140U;

	t39 = ((x181==(x182%x183))-x184);

	if (t39 != 4294245759U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x185 = INT16_MIN;
	uint32_t x186 = 310166123U;
	int32_t x187 = INT32_MAX;
	int8_t x188 = INT8_MIN;
	volatile int32_t t40 = 1;

	t40 = ((x185==(x186%x187))-x188);

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x189 = 5401878011987LLU;
	int8_t x191 = -1;
	uint32_t x192 = 14656538U;
	volatile uint32_t t41 = 0U;

	t41 = ((x189==(x190%x191))-x192);

	if (t41 != 4280310758U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x198 = -1;
	static volatile uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 751092LLU;

	t42 = ((x197==(x198%x199))-x200);

	if (t42 != 18446744073708800524LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = INT16_MIN;
	volatile int8_t x202 = INT8_MIN;
	volatile uint32_t x203 = 2386U;
	uint32_t x204 = 684U;
	uint32_t t43 = 45392614U;

	t43 = ((x201==(x202%x203))-x204);

	if (t43 != 4294966612U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = -1LL;
	int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MIN;
	volatile uint32_t x208 = 98U;

	t44 = ((x205==(x206%x207))-x208);

	if (t44 != 4294967198U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = 2;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MAX;
	static int8_t x212 = -1;
	int32_t t45 = 3768108;

	t45 = ((x209==(x210%x211))-x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x213 = -447;
	volatile int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MIN;
	volatile int32_t t46 = 216390;

	t46 = ((x213==(x214%x215))-x216);

	if (t46 != -16) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x217 = -311716946LL;
	volatile int64_t x218 = -88134LL;
	static volatile int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t47 = 138727540;

	t47 = ((x217==(x218%x219))-x220);

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = 1;
	int8_t x222 = -1;
	int16_t x223 = -120;
	int32_t x224 = 64;
	int32_t t48 = 11194;

	t48 = ((x221==(x222%x223))-x224);

	if (t48 != -64) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x227 = -1LL;
	int8_t x228 = INT8_MIN;
	int32_t t49 = 13726421;

	t49 = ((x225==(x226%x227))-x228);

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 494113427U;
	int32_t x231 = -1;

	t50 = ((x229==(x230%x231))-x232);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = INT32_MAX;
	int64_t x234 = 48737521298517LL;
	int64_t x235 = -1LL;
	volatile uint64_t x236 = 3199357016LLU;

	t51 = ((x233==(x234%x235))-x236);

	if (t51 != 18446744070510194600LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = -1;
	int16_t x238 = -1;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = -1;
	int32_t t52 = 206;

	t52 = ((x237==(x238%x239))-x240);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x241 = INT64_MAX;
	static int16_t x242 = -1;
	int16_t x243 = -1;
	uint16_t x244 = 1U;
	int32_t t53 = -27741;

	t53 = ((x241==(x242%x243))-x244);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x245 = 50989172LLU;
	uint32_t x246 = UINT32_MAX;
	int64_t x247 = -1LL;
	volatile int8_t x248 = 1;
	static int32_t t54 = 1713;

	t54 = ((x245==(x246%x247))-x248);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x249 = 2177074U;
	uint64_t x250 = 208750LLU;
	int8_t x251 = 2;
	static uint64_t x252 = 1323LLU;
	volatile uint64_t t55 = 13452019964LLU;

	t55 = ((x249==(x250%x251))-x252);

	if (t55 != 18446744073709550293LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x254 = 1U;
	int16_t x255 = -1;
	uint64_t x256 = 6979LLU;
	uint64_t t56 = 39497333692742121LLU;

	t56 = ((x253==(x254%x255))-x256);

	if (t56 != 18446744073709544637LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = 413U;
	static int32_t x258 = INT32_MAX;
	static int32_t x259 = 7;
	int32_t t57 = -66882732;

	t57 = ((x257==(x258%x259))-x260);

	if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x262 = -1;
	int32_t x264 = INT32_MAX;
	volatile int32_t t58 = -30703027;

	t58 = ((x261==(x262%x263))-x264);

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = INT16_MIN;
	volatile int64_t x270 = INT64_MIN;
	uint8_t x271 = UINT8_MAX;
	int64_t x272 = INT64_MAX;
	volatile int64_t t59 = 837626LL;

	t59 = ((x269==(x270%x271))-x272);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x274 = UINT32_MAX;
	int8_t x276 = INT8_MIN;
	volatile int32_t t60 = -125339299;

	t60 = ((x273==(x274%x275))-x276);

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MIN;
	uint32_t x282 = 142458U;
	int16_t x284 = -1;

	t61 = ((x281==(x282%x283))-x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MIN;
	uint8_t x288 = 1U;

	t62 = ((x285==(x286%x287))-x288);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x289 = 223747;
	int64_t x290 = INT64_MIN;
	uint16_t x291 = 2291U;
	volatile int8_t x292 = INT8_MAX;

	t63 = ((x289==(x290%x291))-x292);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x293 = 2114260919864252495LL;
	int8_t x294 = INT8_MIN;
	int16_t x295 = -16;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t64 = 534930501;

	t64 = ((x293==(x294%x295))-x296);

	if (t64 != -65535) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x297 = 56U;
	int16_t x298 = INT16_MAX;
	int16_t x299 = -1;

	t65 = ((x297==(x298%x299))-x300);

	if (t65 != 18446744073709540743LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x301 = 0U;
	int32_t x302 = -6500;
	int32_t x303 = -1;
	static int8_t x304 = 4;
	int32_t t66 = -1269;

	t66 = ((x301==(x302%x303))-x304);

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = INT64_MAX;
	int32_t x306 = INT32_MIN;
	int32_t x307 = 8138575;
	int32_t x308 = INT32_MAX;
	int32_t t67 = -16;

	t67 = ((x305==(x306%x307))-x308);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = -1;
	static int32_t x310 = INT32_MIN;
	int8_t x311 = -1;
	uint8_t x312 = 6U;
	static int32_t t68 = -791405;

	t68 = ((x309==(x310%x311))-x312);

	if (t68 != -6) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x314 = INT8_MIN;
	static uint16_t x315 = 1314U;
	int16_t x316 = -60;
	static int32_t t69 = -99550;

	t69 = ((x313==(x314%x315))-x316);

	if (t69 != 60) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x318 = -1;
	int32_t x319 = -783;
	static int32_t t70 = 2;

	t70 = ((x317==(x318%x319))-x320);

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x321 = 1U;
	volatile int16_t x322 = -142;
	int16_t x323 = -7;
	volatile uint32_t t71 = 0U;

	t71 = ((x321==(x322%x323))-x324);

	if (t71 != 4294687917U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = -30;
	int64_t x330 = -1LL;
	uint64_t x331 = 500906855104LLU;
	volatile int8_t x332 = 0;
	int32_t t72 = -11185511;

	t72 = ((x329==(x330%x331))-x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = 27749;
	int16_t x336 = 54;

	t73 = ((x333==(x334%x335))-x336);

	if (t73 != -54) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = -7247;
	uint8_t x338 = 0U;
	static int32_t x339 = -1;
	int16_t x340 = -1;

	t74 = ((x337==(x338%x339))-x340);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x341 = INT64_MIN;
	int16_t x342 = -1;
	volatile int32_t x343 = INT32_MIN;
	volatile int32_t t75 = 531888835;

	t75 = ((x341==(x342%x343))-x344);

	if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x345 = -43409;
	volatile uint64_t x346 = UINT64_MAX;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t76 = 128552138;

	t76 = ((x345==(x346%x347))-x348);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x349 = 0U;
	static int16_t x350 = INT16_MIN;
	int16_t x351 = -1;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t77 = -4790;

	t77 = ((x349==(x350%x351))-x352);

	if (t77 != 32769) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x354 = 298U;
	static volatile int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;

	t78 = ((x353==(x354%x355))-x356);

	if (t78 != -255) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x357 = 6160U;
	volatile int8_t x358 = 3;
	int16_t x360 = INT16_MIN;
	int32_t t79 = -4;

	t79 = ((x357==(x358%x359))-x360);

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x363 = -22;
	volatile uint32_t x364 = 590508707U;
	uint32_t t80 = 6312151U;

	t80 = ((x361==(x362%x363))-x364);

	if (t80 != 3704458589U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = INT32_MAX;
	uint16_t x366 = 1U;
	int64_t x367 = INT64_MAX;
	int8_t x368 = -1;
	int32_t t81 = -7038;

	t81 = ((x365==(x366%x367))-x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = -2;
	int16_t x371 = -1;
	static uint64_t x372 = 498903LLU;
	uint64_t t82 = 1472893891323LLU;

	t82 = ((x369==(x370%x371))-x372);

	if (t82 != 18446744073709052713LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x378 = 2;
	int16_t x379 = INT16_MIN;
	int64_t x380 = -1LL;
	volatile int64_t t83 = -24LL;

	t83 = ((x377==(x378%x379))-x380);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x385 = 250U;
	static uint64_t x386 = UINT64_MAX;
	static uint64_t x387 = 308067402334445857LLU;
	uint64_t x388 = UINT64_MAX;

	t84 = ((x385==(x386%x387))-x388);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x391 = 187616U;
	int64_t x392 = -2009LL;
	volatile int64_t t85 = 101921447965709646LL;

	t85 = ((x389==(x390%x391))-x392);

	if (t85 != 2009LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x394 = 371;
	volatile uint64_t x395 = 6861LLU;
	uint32_t x396 = 7U;
	uint32_t t86 = 1U;

	t86 = ((x393==(x394%x395))-x396);

	if (t86 != 4294967289U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MAX;
	static int16_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t87 = -2765;

	t87 = ((x397==(x398%x399))-x400);

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x401 = 5;
	uint64_t x402 = 446LLU;
	uint32_t x404 = 121399U;
	uint32_t t88 = 651116044U;

	t88 = ((x401==(x402%x403))-x404);

	if (t88 != 4294845897U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x406 = INT32_MAX;
	volatile int8_t x407 = 17;
	int64_t x408 = INT64_MAX;
	static volatile int64_t t89 = -469275985943LL;

	t89 = ((x405==(x406%x407))-x408);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x413 = 14043U;
	int32_t x414 = INT32_MIN;
	static int32_t x415 = INT32_MAX;
	uint8_t x416 = 25U;
	volatile int32_t t90 = 848974858;

	t90 = ((x413==(x414%x415))-x416);

	if (t90 != -25) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x417 = 51870LLU;
	uint8_t x419 = UINT8_MAX;
	volatile int8_t x420 = -1;
	volatile int32_t t91 = -2906696;

	t91 = ((x417==(x418%x419))-x420);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x423 = INT64_MAX;
	volatile int8_t x424 = 0;

	t92 = ((x421==(x422%x423))-x424);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x425 = -1LL;
	static uint8_t x426 = 3U;
	volatile uint32_t x427 = UINT32_MAX;
	static volatile uint32_t x428 = 26134U;
	volatile uint32_t t93 = 18735708U;

	t93 = ((x425==(x426%x427))-x428);

	if (t93 != 4294941162U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x431 = -1;
	int16_t x432 = INT16_MIN;
	static int32_t t94 = 1426895;

	t94 = ((x429==(x430%x431))-x432);

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = INT32_MAX;
	static int32_t x434 = 26920845;
	int64_t x435 = INT64_MIN;
	volatile int8_t x436 = INT8_MIN;

	t95 = ((x433==(x434%x435))-x436);

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x437 = UINT64_MAX;
	volatile uint8_t x438 = 0U;
	uint16_t x439 = UINT16_MAX;
	int8_t x440 = -1;
	volatile int32_t t96 = 1;

	t96 = ((x437==(x438%x439))-x440);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = INT64_MIN;
	uint64_t x442 = 1LLU;
	uint64_t x443 = UINT64_MAX;
	volatile int16_t x444 = INT16_MAX;

	t97 = ((x441==(x442%x443))-x444);

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = -1426489894254LL;
	int16_t x446 = -1;
	static int16_t x448 = -1;
	int32_t t98 = -483137;

	t98 = ((x445==(x446%x447))-x448);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = 45;
	int32_t x450 = 1803989;
	int64_t x451 = 55765807857LL;
	volatile int64_t x452 = INT64_MAX;
	static int64_t t99 = -24602207707489LL;

	t99 = ((x449==(x450%x451))-x452);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

