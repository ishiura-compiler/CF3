#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 39;
int8_t x6 = 1;
int64_t t1 = -4523986209547521LL;
volatile uint32_t t3 = 11U;
static int16_t x21 = -4925;
uint32_t x22 = 72845928U;
volatile int16_t x35 = INT16_MIN;
static volatile uint32_t t6 = 129U;
int8_t x41 = INT8_MIN;
int64_t x42 = 18742231814LL;
int64_t t8 = 23972518078919LL;
int32_t x51 = INT32_MIN;
int64_t t9 = -813079784069377455LL;
static int32_t x58 = -1;
volatile uint8_t x61 = 19U;
static volatile int8_t x67 = -23;
int32_t x78 = -1;
int8_t x80 = -61;
uint64_t x89 = 211370194737042281LLU;
int16_t x94 = INT16_MIN;
static uint16_t x95 = UINT16_MAX;
int32_t t18 = -505390699;
int64_t x98 = 4LL;
uint64_t t19 = 214448LLU;
static uint16_t x112 = 0U;
int32_t x122 = INT32_MAX;
static uint64_t t23 = UINT64_MAX;
int16_t x125 = INT16_MAX;
volatile uint8_t x133 = 14U;
int16_t x137 = INT16_MAX;
int16_t x140 = -1;
int32_t x149 = 1982;
int16_t x171 = INT16_MIN;
volatile int32_t x172 = INT32_MIN;
static volatile uint64_t t33 = UINT64_MAX;
int32_t x177 = INT32_MAX;
int32_t x178 = -6813;
volatile uint32_t x192 = 514929627U;
volatile uint32_t t38 = UINT32_MAX;
int32_t x203 = INT32_MAX;
uint64_t x213 = 9986617282043880LLU;
uint64_t t43 = 110430752393LLU;
int64_t x217 = -25702576164304472LL;
static int64_t x227 = -1245900932971LL;
static volatile uint8_t x232 = 2U;
static int32_t x235 = INT32_MAX;
uint16_t x240 = UINT16_MAX;
int8_t x242 = -4;
volatile uint16_t x244 = UINT16_MAX;
int32_t t50 = -232763541;
int16_t x246 = -1;
static volatile int64_t x247 = -1LL;
int8_t x248 = INT8_MIN;
volatile int64_t x251 = INT64_MIN;
volatile uint64_t t52 = 60308524221596LLU;
volatile int32_t x259 = INT32_MIN;
volatile int64_t t54 = -3218188560LL;
volatile int64_t x270 = 10866815284999LL;
static uint16_t x275 = 11716U;
int16_t x284 = -1;
int32_t t60 = -269999;
static uint64_t t63 = 20443901350106LLU;
int16_t x305 = -1;
int32_t x310 = INT32_MIN;
static int64_t x313 = 608360677143464LL;
volatile int64_t t66 = -3559123570515576660LL;
int32_t x319 = -1;
static int16_t x321 = 698;
static int64_t x323 = -1210222359106016LL;
uint16_t x327 = 10U;
int8_t x328 = INT8_MIN;
int32_t t69 = -31824;
static int64_t t70 = -1872259213516935636LL;
volatile int64_t x342 = INT64_MIN;
static int16_t x343 = INT16_MIN;
static volatile int64_t t72 = -3051984087486285LL;
volatile int32_t x346 = -1532260;
static uint32_t x366 = 613298U;
static int8_t x374 = 13;
uint64_t x375 = 47145632LLU;
volatile uint8_t x383 = 3U;
uint64_t t81 = UINT64_MAX;
uint32_t t82 = 1U;
static uint16_t x401 = UINT16_MAX;
volatile uint16_t x404 = UINT16_MAX;
int32_t x405 = INT32_MAX;
volatile int32_t t85 = -103;
volatile uint64_t x419 = UINT64_MAX;
uint64_t t87 = 2159148130965LLU;
int8_t x421 = -1;
int8_t x426 = INT8_MIN;
volatile uint64_t t89 = 619029LLU;
uint16_t x432 = 450U;
static volatile int32_t t90 = 707;
int64_t x440 = INT64_MIN;
int8_t x447 = INT8_MIN;
uint16_t x449 = 29368U;
static int32_t t93 = 1;
int8_t x458 = -1;
volatile int8_t x459 = -1;
volatile int32_t t95 = 319849311;
uint64_t x467 = 211511193468LLU;
int64_t t98 = 67765039370746LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	volatile int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MIN;
	volatile uint32_t t0 = 918215U;

	t0 = ((x1*(x2|x3))|x4);

	if (t0 != 32807U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	uint8_t x7 = 0U;
	volatile int64_t x8 = INT64_MIN;

	t1 = ((x5*(x6|x7))|x8);

	if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int8_t x10 = -2;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = 189U;
	static volatile int32_t t2 = 3;

	t2 = ((x9*(x10|x11))|x12);

	if (t2 != 191) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1116U;
	uint8_t x14 = 80U;
	int8_t x15 = INT8_MIN;
	uint32_t x16 = 805916414U;

	t3 = ((x13*(x14|x15))|x16);

	if (t3 != 4294930174U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x23 = -7;
	int32_t x24 = -1;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = ((x21*(x22|x23))|x24);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x29 = 19035343203LLU;
	volatile int8_t x30 = INT8_MIN;
	uint8_t x31 = 13U;
	int32_t x32 = 1;
	static volatile uint64_t t5 = 7LLU;

	t5 = ((x29*(x30|x31))|x32);

	if (t5 != 18446741884645083271LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 2U;
	static int8_t x34 = INT8_MIN;
	static uint32_t x36 = 2104877U;

	t6 = ((x33*(x34|x35))|x36);

	if (t6 != 4294967085U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 1668;
	volatile uint32_t x38 = UINT32_MAX;
	static int16_t x39 = -1;
	int32_t x40 = -1;
	uint32_t t7 = UINT32_MAX;

	t7 = ((x37*(x38|x39))|x40);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x43 = INT8_MAX;
	volatile int64_t x44 = -1LL;

	t8 = ((x41*(x42|x43))|x44);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x49 = 6;
	static int16_t x50 = -1;
	int64_t x52 = 3LL;

	t9 = ((x49*(x50|x51))|x52);

	if (t9 != -5LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x57 = 28519605U;
	static int64_t x59 = INT64_MIN;
	int16_t x60 = -45;
	volatile int64_t t10 = -523294054533LL;

	t10 = ((x57*(x58|x59))|x60);

	if (t10 != -37LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x62 = -798144852600LL;
	static int32_t x63 = 361137;
	int32_t x64 = INT32_MIN;
	volatile int64_t t11 = 800945LL;

	t11 = ((x61*(x62|x63))|x64);

	if (t11 != -1368282437LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x65 = 29;
	volatile uint8_t x66 = 2U;
	int8_t x68 = 1;
	int32_t t12 = -430886;

	t12 = ((x65*(x66|x67))|x68);

	if (t12 != -609) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x69 = 70996090560229413LLU;
	uint32_t x70 = 93939U;
	int32_t x71 = INT32_MIN;
	int8_t x72 = 7;
	static uint64_t t13 = 17411739215278780LLU;

	t13 = ((x69*(x70|x71))|x72);

	if (t13 != 5065396475267389727LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 5305072LLU;
	uint32_t x74 = UINT32_MAX;
	int64_t x75 = -9950LL;
	static int16_t x76 = INT16_MAX;
	uint64_t t14 = 10628LLU;

	t14 = ((x73*(x74|x75))|x76);

	if (t14 != 18446744073704275967LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 100659043U;
	volatile uint32_t x79 = 7U;
	uint32_t t15 = 35190196U;

	t15 = ((x77*(x78|x79))|x80);

	if (t15 != 4294967263U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x85 = INT8_MAX;
	uint8_t x86 = 43U;
	int16_t x87 = INT16_MAX;
	static uint32_t x88 = 760140U;
	uint32_t t16 = 306U;

	t16 = ((x85*(x86|x87))|x88);

	if (t16 != 4194253U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x90 = INT8_MIN;
	static uint32_t x91 = 14785981U;
	volatile int32_t x92 = INT32_MIN;
	volatile uint64_t t17 = 4206743586309311LLU;

	t17 = ((x89*(x90|x91))|x92);

	if (t17 != 18446744072329816965LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -1;
	int32_t x96 = INT32_MIN;

	t18 = ((x93*(x94|x95))|x96);

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = -1;
	uint64_t x99 = 25192323870LLU;
	uint32_t x100 = UINT32_MAX;

	t19 = ((x97*(x98|x99))|x100);

	if (t19 != 18446744052234715135LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = -1;
	volatile int8_t x103 = INT8_MIN;
	uint64_t x104 = 15LLU;
	uint64_t t20 = 1282139LLU;

	t20 = ((x101*(x102|x103))|x104);

	if (t20 != 18446744073709518863LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 8U;
	volatile int8_t x106 = -5;
	uint16_t x107 = 85U;
	int16_t x108 = 171;
	static volatile int32_t t21 = -8;

	t21 = ((x105*(x106|x107))|x108);

	if (t21 != -5) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = UINT16_MAX;
	uint16_t x110 = 6994U;
	static uint16_t x111 = 17U;
	int32_t t22 = -44155364;

	t22 = ((x109*(x110|x111))|x112);

	if (t22 != 458417325) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x121 = 24487LLU;
	uint64_t x123 = 5851128683169209342LLU;
	volatile uint64_t x124 = UINT64_MAX;

	t23 = ((x121*(x122|x123))|x124);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x126 = UINT64_MAX;
	uint32_t x127 = 215U;
	int16_t x128 = -1;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = ((x125*(x126|x127))|x128);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = -187185;
	volatile int8_t x130 = INT8_MAX;
	uint64_t x131 = UINT64_MAX;
	volatile uint32_t x132 = 1568863277U;
	uint64_t t25 = 104366850345921801LLU;

	t25 = ((x129*(x130|x131))|x132);

	if (t25 != 1568866109LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x134 = 6268U;
	int32_t x135 = -224022;
	uint16_t x136 = 611U;
	uint32_t t26 = 15270317U;

	t26 = ((x133*(x134|x135))|x136);

	if (t26 != 4291860455U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x138 = INT8_MIN;
	uint64_t x139 = UINT64_MAX;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = ((x137*(x138|x139))|x140);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x141 = -1;
	uint32_t x142 = 508U;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x141*(x142|x143))|x144);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x150 = -1;
	static int32_t x151 = -51;
	uint64_t x152 = 78639940582796782LLU;
	volatile uint64_t t29 = 1314088185173LLU;

	t29 = ((x149*(x150|x151))|x152);

	if (t29 != 18446744073709551086LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x157 = 0U;
	static uint32_t x158 = 20U;
	int8_t x159 = -1;
	int8_t x160 = -1;
	static volatile uint32_t t30 = UINT32_MAX;

	t30 = ((x157*(x158|x159))|x160);

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x165 = 0U;
	volatile int64_t x166 = INT64_MIN;
	uint32_t x167 = UINT32_MAX;
	int32_t x168 = -1;
	static int64_t t31 = -88170LL;

	t31 = ((x165*(x166|x167))|x168);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x169 = -1;
	volatile int16_t x170 = 253;
	int32_t t32 = 173;

	t32 = ((x169*(x170|x171))|x172);

	if (t32 != -2147451133) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x173 = 5419LLU;
	static int8_t x174 = INT8_MIN;
	uint16_t x175 = UINT16_MAX;
	uint32_t x176 = UINT32_MAX;

	t33 = ((x173*(x174|x175))|x176);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x179 = UINT32_MAX;
	int32_t x180 = 0;
	volatile uint32_t t34 = 3796323U;

	t34 = ((x177*(x178|x179))|x180);

	if (t34 != 2147483649U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x181 = 0U;
	uint32_t x182 = 252U;
	static volatile uint32_t x183 = UINT32_MAX;
	int16_t x184 = 1;
	uint32_t t35 = 137U;

	t35 = ((x181*(x182|x183))|x184);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x185 = INT32_MIN;
	int32_t x186 = 38;
	volatile uint32_t x187 = 1U;
	int64_t x188 = 20793434419LL;
	static int64_t t36 = -229255LL;

	t36 = ((x185*(x186|x187))|x188);

	if (t36 != 20793434419LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = INT64_MAX;
	volatile int16_t x190 = -1;
	static uint16_t x191 = UINT16_MAX;
	volatile int64_t t37 = -8543218168LL;

	t37 = ((x189*(x190|x191))|x192);

	if (t37 != -9223372036339846181LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x193 = INT16_MAX;
	uint32_t x194 = 1U;
	volatile uint16_t x195 = 30956U;
	volatile int8_t x196 = -1;

	t38 = ((x193*(x194|x195))|x196);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x197 = UINT32_MAX;
	volatile int32_t x198 = -74630;
	int16_t x199 = INT16_MAX;
	uint64_t x200 = 125525845LLU;
	uint64_t t39 = 5LLU;

	t39 = ((x197*(x198|x199))|x200);

	if (t39 != 125525845LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = -1LL;
	int8_t x202 = INT8_MAX;
	volatile uint8_t x204 = UINT8_MAX;
	static volatile int64_t t40 = -241788700LL;

	t40 = ((x201*(x202|x203))|x204);

	if (t40 != -2147483393LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = INT16_MIN;
	static int8_t x206 = INT8_MIN;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t41 = 287570545;

	t41 = ((x205*(x206|x207))|x208);

	if (t41 != 33023) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x209 = UINT32_MAX;
	static volatile uint32_t x210 = UINT32_MAX;
	static int16_t x211 = -1;
	static uint8_t x212 = 29U;
	volatile uint32_t t42 = 1607666U;

	t42 = ((x209*(x210|x211))|x212);

	if (t42 != 29U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x214 = UINT16_MAX;
	static volatile int64_t x215 = INT64_MIN;
	int8_t x216 = 24;

	t43 = ((x213*(x214|x215))|x216);

	if (t43 != 8836920998911369240LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x218 = 3187;
	static int32_t x219 = -1;
	static int16_t x220 = INT16_MIN;
	volatile int64_t t44 = -572038LL;

	t44 = ((x217*(x218|x219))|x220);

	if (t44 != -2472LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x222 = -1;
	static int64_t x223 = -59LL;
	int8_t x224 = INT8_MAX;
	volatile int64_t t45 = -91449664658807763LL;

	t45 = ((x221*(x222|x223))|x224);

	if (t45 != -65409LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = 347;
	int8_t x226 = -1;
	static uint16_t x228 = UINT16_MAX;
	int64_t t46 = 5506LL;

	t46 = ((x225*(x226|x227))|x228);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x229 = 0U;
	volatile uint8_t x230 = 7U;
	int16_t x231 = INT16_MIN;
	volatile int32_t t47 = 1393826;

	t47 = ((x229*(x230|x231))|x232);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x233 = 3U;
	uint32_t x234 = 1U;
	static uint8_t x236 = 0U;
	volatile uint32_t t48 = 2014975240U;

	t48 = ((x233*(x234|x235))|x236);

	if (t48 != 2147483645U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = -1;
	int8_t x238 = INT8_MAX;
	volatile uint32_t x239 = 30949U;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = ((x237*(x238|x239))|x240);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x241 = -30;
	static int16_t x243 = -1;

	t50 = ((x241*(x242|x243))|x244);

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x245 = 1869431LLU;
	volatile uint64_t t51 = 33180649043004104LLU;

	t51 = ((x245*(x246|x247))|x248);

	if (t51 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x249 = INT64_MAX;
	uint64_t x250 = 724605930480LLU;
	uint64_t x252 = 9701LLU;

	t52 = ((x249*(x250|x251))|x252);

	if (t52 != 9223371312248845813LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	volatile int8_t x255 = INT8_MIN;
	int32_t x256 = -396577;
	int32_t t53 = 1925;

	t53 = ((x253*(x254|x255))|x256);

	if (t53 != -396577) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x257 = -1;
	static uint16_t x258 = 171U;
	int64_t x260 = -7103907634LL;

	t54 = ((x257*(x258|x259))|x260);

	if (t54 != -6442450977LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = 1;
	volatile int64_t x262 = -1LL;
	volatile uint8_t x263 = UINT8_MAX;
	int16_t x264 = INT16_MIN;
	volatile int64_t t55 = 274832929308391LL;

	t55 = ((x261*(x262|x263))|x264);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = -1;
	int64_t x266 = -52LL;
	uint8_t x267 = 13U;
	volatile uint16_t x268 = 746U;
	volatile int64_t t56 = -1223163195LL;

	t56 = ((x265*(x266|x267))|x268);

	if (t56 != 763LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x269 = 4U;
	static int64_t x271 = 14LL;
	static int32_t x272 = -1088182;
	volatile int64_t t57 = -21518588217538LL;

	t57 = ((x269*(x270|x271))|x272);

	if (t57 != -1049218LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x273 = 8U;
	uint32_t x274 = 378U;
	uint8_t x276 = 91U;
	uint32_t t58 = 381U;

	t58 = ((x273*(x274|x275))|x276);

	if (t58 != 94203U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x277 = 4822U;
	uint16_t x278 = UINT16_MAX;
	volatile uint64_t x279 = UINT64_MAX;
	static int16_t x280 = INT16_MAX;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x277*(x278|x279))|x280);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x281 = INT16_MAX;
	static int8_t x282 = 18;
	static uint16_t x283 = 17U;

	t60 = ((x281*(x282|x283))|x284);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = 84222LL;
	volatile int16_t x286 = INT16_MAX;
	uint64_t x287 = 442090LLU;
	static int8_t x288 = 10;
	volatile uint64_t t61 = 6145551135432LLU;

	t61 = ((x285*(x286|x287))|x288);

	if (t61 != 38636926730LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = 360508687LL;
	volatile int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MIN;
	int64_t x292 = -1LL;
	static int64_t t62 = -24LL;

	t62 = ((x289*(x290|x291))|x292);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x293 = UINT32_MAX;
	uint64_t x294 = 39388800959672234LLU;
	static int64_t x295 = 13782188LL;
	volatile int8_t x296 = 48;

	t63 = ((x293*(x294|x295))|x296);

	if (t63 != 16233928295696666738LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x306 = 26569786;
	int8_t x307 = INT8_MAX;
	uint16_t x308 = 7465U;
	volatile int32_t t64 = -306383;

	t64 = ((x305*(x306|x307))|x308);

	if (t64 != -26566743) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = INT64_MAX;
	volatile int64_t x311 = -1LL;
	uint64_t x312 = 1867175080835LLU;
	static uint64_t t65 = 10540LLU;

	t65 = ((x309*(x310|x311))|x312);

	if (t65 != 9223373904029856643LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x314 = -1;
	int32_t x315 = INT32_MAX;
	uint16_t x316 = 27U;

	t66 = ((x313*(x314|x315))|x316);

	if (t66 != -608360677143461LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x317 = 1;
	volatile int64_t x318 = INT64_MIN;
	static volatile uint32_t x320 = UINT32_MAX;
	volatile int64_t t67 = -14141123LL;

	t67 = ((x317*(x318|x319))|x320);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x322 = -1;
	uint8_t x324 = 89U;
	volatile int64_t t68 = 2209942993286144614LL;

	t68 = ((x321*(x322|x323))|x324);

	if (t68 != -673LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x325 = -1;
	uint16_t x326 = UINT16_MAX;

	t69 = ((x325*(x326|x327))|x328);

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x333 = UINT16_MAX;
	int64_t x334 = -472LL;
	int64_t x335 = INT64_MIN;
	volatile int32_t x336 = -1;

	t70 = ((x333*(x334|x335))|x336);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x337 = 48U;
	uint16_t x338 = UINT16_MAX;
	int32_t x339 = 4061726;
	uint16_t x340 = 5563U;
	volatile int32_t t71 = -68;

	t71 = ((x337*(x338|x339))|x340);

	if (t71 != 195035131) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x341 = 1U;
	static uint8_t x344 = UINT8_MAX;

	t72 = ((x341*(x342|x343))|x344);

	if (t72 != -32513LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x345 = 32253LLU;
	volatile int64_t x347 = -1LL;
	static uint64_t x348 = 932023LLU;
	volatile uint64_t t73 = 8746447713560681594LLU;

	t73 = ((x345*(x346|x347))|x348);

	if (t73 != 18446744073709533879LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x353 = UINT64_MAX;
	uint8_t x354 = 1U;
	int64_t x355 = 1119783726618LL;
	int8_t x356 = -2;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x353*(x354|x355))|x356);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x357 = 8U;
	volatile int16_t x358 = INT16_MAX;
	int32_t x359 = -1;
	int64_t x360 = INT64_MIN;
	int64_t t75 = 888LL;

	t75 = ((x357*(x358|x359))|x360);

	if (t75 != -8LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x367 = 8U;
	static int64_t x368 = INT64_MAX;
	int64_t t76 = INT64_MAX;

	t76 = ((x365*(x366|x367))|x368);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x369 = UINT64_MAX;
	uint64_t x370 = 2013649556214LLU;
	int64_t x371 = INT64_MIN;
	volatile uint16_t x372 = 29792U;
	volatile uint64_t t77 = 19504969744LLU;

	t77 = ((x369*(x370|x371))|x372);

	if (t77 != 9223370023205240170LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x373 = 95206547LLU;
	static volatile uint8_t x376 = UINT8_MAX;
	uint64_t t78 = 1649703529439159556LLU;

	t78 = ((x373*(x374|x375))|x376);

	if (t78 != 4488574066537983LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x377 = -65LL;
	int32_t x378 = -1;
	int32_t x379 = INT32_MIN;
	static int16_t x380 = INT16_MIN;
	volatile int64_t t79 = 105883LL;

	t79 = ((x377*(x378|x379))|x380);

	if (t79 != -32703LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x381 = -90302550LL;
	volatile uint64_t x382 = 3630661268497LLU;
	int8_t x384 = -1;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x381*(x382|x383))|x384);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x385 = UINT32_MAX;
	static uint64_t x386 = 2129209300LLU;
	int8_t x387 = 4;
	static uint64_t x388 = UINT64_MAX;

	t81 = ((x385*(x386|x387))|x388);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x397 = UINT32_MAX;
	volatile uint8_t x398 = 12U;
	uint32_t x399 = 10119269U;
	static int16_t x400 = -234;

	t82 = ((x397*(x398|x399))|x400);

	if (t82 != 4294967191U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x402 = INT8_MAX;
	volatile int16_t x403 = INT16_MIN;
	static volatile int32_t t83 = -5431796;

	t83 = ((x401*(x402|x403))|x404);

	if (t83 != -2139095041) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x406 = 5232LLU;
	int64_t x407 = INT64_MIN;
	int8_t x408 = -2;
	uint64_t t84 = 1089LLU;

	t84 = ((x405*(x406|x407))|x408);

	if (t84 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x409 = -1;
	int16_t x410 = INT16_MAX;
	static volatile int32_t x411 = 161493;
	volatile int8_t x412 = INT8_MIN;

	t85 = ((x409*(x410|x411))|x412);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = INT16_MIN;
	uint8_t x414 = 1U;
	uint32_t x415 = UINT32_MAX;
	int8_t x416 = -26;
	volatile uint32_t t86 = 11732U;

	t86 = ((x413*(x414|x415))|x416);

	if (t86 != 4294967270U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x417 = 4134077447796468578LL;
	int32_t x418 = INT32_MIN;
	int8_t x420 = 1;

	t87 = ((x417*(x418|x419))|x420);

	if (t87 != 14312666625913083039LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x422 = 1653583878944579LL;
	uint8_t x423 = 0U;
	int64_t x424 = 4376805847166LL;
	int64_t t88 = 153704LL;

	t88 = ((x421*(x422|x423))|x424);

	if (t88 != -1649288681670401LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x425 = UINT32_MAX;
	uint8_t x427 = 51U;
	uint64_t x428 = 1413570031314957LLU;

	t89 = ((x425*(x426|x427))|x428);

	if (t89 != 1413570031315021LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = -1;
	uint8_t x430 = 83U;
	int32_t x431 = INT32_MAX;

	t90 = ((x429*(x430|x431))|x432);

	if (t90 != -2147483197) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x437 = 2380434LL;
	uint16_t x438 = 114U;
	int32_t x439 = -1;
	volatile int64_t t91 = -353331992505649850LL;

	t91 = ((x437*(x438|x439))|x440);

	if (t91 != -2380434LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = INT16_MIN;
	volatile int8_t x446 = 22;
	int8_t x448 = -1;
	int32_t t92 = -2511;

	t92 = ((x445*(x446|x447))|x448);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x450 = 7U;
	int8_t x451 = 4;
	int8_t x452 = INT8_MIN;

	t93 = ((x449*(x450|x451))|x452);

	if (t93 != -120) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x453 = -1;
	int32_t x454 = 176383;
	int64_t x455 = -1LL;
	uint32_t x456 = 925984U;
	volatile int64_t t94 = 4443503188LL;

	t94 = ((x453*(x454|x455))|x456);

	if (t94 != 925985LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x457 = 1;
	static uint16_t x460 = UINT16_MAX;

	t95 = ((x457*(x458|x459))|x460);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x461 = -110918LL;
	int32_t x462 = -39660368;
	int8_t x463 = -53;
	uint64_t x464 = 79LLU;
	uint64_t t96 = 1446LLU;

	t96 = ((x461*(x462|x463))|x464);

	if (t96 != 554591LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x465 = 7U;
	int16_t x466 = INT16_MIN;
	int8_t x468 = -1;
	uint64_t t97 = UINT64_MAX;

	t97 = ((x465*(x466|x467))|x468);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x469 = INT16_MAX;
	static uint8_t x470 = UINT8_MAX;
	int64_t x471 = -1LL;
	uint8_t x472 = 5U;

	t98 = ((x469*(x470|x471))|x472);

	if (t98 != -32763LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x473 = INT16_MAX;
	uint32_t x474 = 1339769U;
	uint32_t x475 = 2U;
	volatile int64_t x476 = 6LL;
	volatile int64_t t99 = 1252534490154629LL;

	t99 = ((x473*(x474|x475))|x476);

	if (t99 != 950603399LL) { NG(); } else { ; }
	
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

