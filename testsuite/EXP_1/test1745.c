#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = 2534;
uint8_t x10 = 6U;
uint8_t x18 = UINT8_MAX;
int8_t x19 = INT8_MIN;
int32_t x23 = -3662487;
volatile uint64_t x30 = UINT64_MAX;
static int64_t x32 = -79505344307289254LL;
volatile uint32_t x33 = 2115498574U;
int8_t x35 = INT8_MIN;
int32_t x36 = INT32_MIN;
volatile uint8_t x37 = 4U;
int64_t x38 = INT64_MIN;
uint32_t x57 = 3048394U;
static uint64_t x58 = 30738130995LLU;
int16_t x68 = 460;
static uint8_t x74 = 3U;
uint64_t t15 = 9433524LLU;
volatile int32_t x86 = -1;
uint32_t x95 = 7710U;
int8_t x101 = -1;
volatile int8_t x121 = INT8_MAX;
volatile uint32_t x122 = 17645U;
static volatile uint32_t x124 = UINT32_MAX;
static int8_t x126 = INT8_MIN;
int8_t x135 = -1;
int8_t x136 = INT8_MIN;
uint64_t x137 = 82856488053323LLU;
int32_t x146 = -1;
int8_t x164 = 35;
volatile uint8_t x167 = 54U;
int64_t t34 = 3679160535901133391LL;
static uint32_t x180 = UINT32_MAX;
int8_t x182 = INT8_MIN;
static int16_t x185 = INT16_MIN;
uint32_t x192 = 109340187U;
uint32_t t40 = 124U;
int8_t x195 = INT8_MIN;
static uint64_t t41 = 79LLU;
static volatile uint64_t x212 = UINT64_MAX;
static int64_t x218 = 15624281909110LL;
static int16_t x228 = INT16_MIN;
static int64_t x229 = INT64_MAX;
int64_t x251 = 3445793LL;
volatile uint64_t x253 = 788602485941LLU;
volatile uint64_t t53 = 346865197109938LLU;
uint8_t x260 = 0U;
uint64_t t55 = 16037928626LLU;
int8_t x269 = INT8_MIN;
volatile uint16_t x272 = UINT16_MAX;
int64_t t57 = 978345268LL;
static int8_t x279 = -1;
int64_t x280 = -4191802967891830LL;
volatile uint32_t x286 = 204977U;
static uint32_t t60 = 17503095U;
int8_t x291 = -1;
uint32_t x296 = 242926738U;
int64_t x303 = -1LL;
uint64_t x312 = UINT64_MAX;
int16_t x313 = INT16_MIN;
int8_t x314 = INT8_MIN;
uint8_t x319 = 2U;
int64_t t68 = -61165LL;
int16_t x321 = INT16_MAX;
volatile uint32_t t72 = 13946349U;
int16_t x345 = 10;
volatile int8_t x352 = INT8_MIN;
static int32_t x354 = -1;
uint16_t x357 = 1U;
int32_t x377 = INT32_MIN;
volatile int64_t t83 = 1LL;
int8_t x385 = INT8_MIN;
volatile int32_t x396 = 504860;
volatile int64_t t86 = 69290187308LL;
volatile uint8_t x406 = 1U;
int32_t x413 = -1;
int8_t x414 = INT8_MIN;
int64_t x418 = INT64_MIN;
int64_t t92 = -57309382690021877LL;
int16_t x426 = -1;
uint16_t x441 = 282U;


void f0(void) {
	static int64_t x5 = INT64_MIN;
	volatile uint32_t x6 = 1387341211U;
	int32_t x7 = INT32_MIN;
	int64_t t0 = 315456810240303LL;

	t0 = (((x5&x6)%x7)*x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -49509897803659920LL;
	static int32_t x11 = INT32_MAX;
	static int32_t x12 = INT32_MAX;
	int64_t t1 = -425125494705332LL;

	t1 = (((x9&x10)%x11)*x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int8_t x14 = 0;
	int8_t x15 = INT8_MIN;
	volatile int32_t x16 = INT32_MIN;
	int64_t t2 = -14750900LL;

	t2 = (((x13&x14)%x15)*x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 81036583;
	int8_t x20 = 44;
	int32_t t3 = -2246684;

	t3 = (((x17&x18)%x19)*x20);

	if (t3 != 1716) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MIN;
	uint64_t x22 = 3LLU;
	static int8_t x24 = -1;
	static volatile uint64_t t4 = 210973179532093LLU;

	t4 = (((x21&x22)%x23)*x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 0U;
	volatile int8_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MIN;
	volatile uint64_t t5 = 1067627131LLU;

	t5 = (((x25&x26)%x27)*x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MIN;
	int32_t x31 = -5688816;
	uint64_t t6 = 1400725317LLU;

	t6 = (((x29&x30)%x31)*x32);

	if (t6 != 14619846539804313952LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = INT16_MAX;
	static uint32_t t7 = 0U;

	t7 = (((x33&x34)%x35)*x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x39 = 3328U;
	volatile int16_t x40 = INT16_MIN;
	volatile int64_t t8 = 274403383684440202LL;

	t8 = (((x37&x38)%x39)*x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 9U;
	int8_t x42 = INT8_MIN;
	int64_t x43 = -26365463LL;
	int8_t x44 = INT8_MAX;
	int64_t t9 = -120411322765672LL;

	t9 = (((x41&x42)%x43)*x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	uint64_t x46 = 60346652LLU;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	uint64_t t10 = 13LLU;

	t10 = (((x45&x46)%x47)*x48);

	if (t10 != 15388396260LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	int8_t x50 = 3;
	int64_t x51 = 3570388LL;
	int32_t x52 = -982;
	int64_t t11 = -6361LL;

	t11 = (((x49&x50)%x51)*x52);

	if (t11 != -2946LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x59 = INT64_MIN;
	uint64_t x60 = UINT64_MAX;
	uint64_t t12 = 1034LLU;

	t12 = (((x57&x58)%x59)*x60);

	if (t12 != 18446744073707290622LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	volatile int32_t x66 = 3956219;
	int16_t x67 = 916;
	static volatile uint32_t t13 = 121441U;

	t13 = (((x65&x66)%x67)*x68);

	if (t13 != 6900U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	volatile int8_t x70 = -38;
	int32_t x71 = INT32_MIN;
	int8_t x72 = -1;
	int32_t t14 = -359761818;

	t14 = (((x69&x70)%x71)*x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 2U;
	uint64_t x75 = UINT64_MAX;
	uint8_t x76 = 0U;

	t15 = (((x73&x74)%x75)*x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x85 = -188LL;
	volatile int16_t x87 = 15144;
	uint32_t x88 = 45U;
	int64_t t16 = 1892LL;

	t16 = (((x85&x86)%x87)*x88);

	if (t16 != -8460LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x89 = UINT16_MAX;
	int16_t x90 = 313;
	int32_t x91 = -1;
	int32_t x92 = -179385;
	int32_t t17 = -21350878;

	t17 = (((x89&x90)%x91)*x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -4101;
	int8_t x94 = -1;
	volatile uint16_t x96 = 26U;
	static volatile uint32_t t18 = 71U;

	t18 = (((x93&x94)%x95)*x96);

	if (t18 != 194090U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = -231LL;
	static uint8_t x104 = 1U;
	int64_t t19 = 90612222991658862LL;

	t19 = (((x101&x102)%x103)*x104);

	if (t19 != 3LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 1U;
	static uint8_t x106 = 7U;
	int64_t x107 = 278362458811132664LL;
	volatile int64_t x108 = -1LL;
	volatile int64_t t20 = 53026820354LL;

	t20 = (((x105&x106)%x107)*x108);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x109 = INT64_MIN;
	uint64_t x110 = 783265290602870LLU;
	int32_t x111 = INT32_MAX;
	uint16_t x112 = UINT16_MAX;
	static volatile uint64_t t21 = 8480LLU;

	t21 = (((x109&x110)%x111)*x112);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = -442274974;
	int32_t x114 = 12508;
	int8_t x115 = INT8_MAX;
	static int8_t x116 = -1;
	static int32_t t22 = 443;

	t22 = (((x113&x114)%x115)*x116);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x123 = INT8_MIN;
	static uint32_t t23 = 13602U;

	t23 = (((x121&x122)%x123)*x124);

	if (t23 != 4294967187U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -1;
	int64_t x127 = -1LL;
	volatile uint8_t x128 = UINT8_MAX;
	int64_t t24 = -1577008059LL;

	t24 = (((x125&x126)%x127)*x128);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = UINT64_MAX;
	int32_t x130 = INT32_MIN;
	uint64_t x131 = UINT64_MAX;
	static uint16_t x132 = 898U;
	uint64_t t25 = 9286LLU;

	t25 = (((x129&x130)%x131)*x132);

	if (t25 != 18446742145269235712LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x133 = UINT8_MAX;
	uint64_t x134 = 6LLU;
	static uint64_t t26 = 2359763538779704703LLU;

	t26 = (((x133&x134)%x135)*x136);

	if (t26 != 18446744073709550848LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x138 = -1;
	volatile uint16_t x139 = 5468U;
	uint8_t x140 = UINT8_MAX;
	uint64_t t27 = 1518900281979607LLU;

	t27 = (((x137&x138)%x139)*x140);

	if (t27 != 577065LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = 45474U;
	int64_t x142 = INT64_MIN;
	static int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	int64_t t28 = 1268LL;

	t28 = (((x141&x142)%x143)*x144);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = 18LL;
	int64_t x147 = -1LL;
	static uint32_t x148 = UINT32_MAX;
	static int64_t t29 = -576788829LL;

	t29 = (((x145&x146)%x147)*x148);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = 77U;
	uint64_t x150 = UINT64_MAX;
	volatile int16_t x151 = -1;
	int16_t x152 = INT16_MAX;
	volatile uint64_t t30 = 15845351586LLU;

	t30 = (((x149&x150)%x151)*x152);

	if (t30 != 2523059LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x153 = INT16_MAX;
	static int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	int64_t x156 = 174026785739456LL;
	volatile int64_t t31 = 37LL;

	t31 = (((x153&x154)%x155)*x156);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -1;
	static int16_t x158 = -1;
	uint16_t x159 = 25953U;
	uint64_t x160 = 11570809320420LLU;
	static volatile uint64_t t32 = 15LLU;

	t32 = (((x157&x158)%x159)*x160);

	if (t32 != 18446732502900231196LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = 14;
	uint16_t x162 = 19U;
	int64_t x163 = INT64_MIN;
	volatile int64_t t33 = 6815419383076LL;

	t33 = (((x161&x162)%x163)*x164);

	if (t33 != 70LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = INT64_MIN;
	volatile int32_t x166 = -1;
	int8_t x168 = -1;

	t34 = (((x165&x166)%x167)*x168);

	if (t34 != 26LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x169 = UINT64_MAX;
	volatile int16_t x170 = -17;
	volatile int64_t x171 = -1LL;
	static int8_t x172 = -1;
	static volatile uint64_t t35 = 136345661786064LLU;

	t35 = (((x169&x170)%x171)*x172);

	if (t35 != 17LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = 1088103255LLU;
	static volatile int32_t x174 = INT32_MIN;
	int64_t x175 = -1LL;
	int8_t x176 = INT8_MAX;
	uint64_t t36 = 123505LLU;

	t36 = (((x173&x174)%x175)*x176);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = -1;
	int16_t x178 = INT16_MAX;
	int32_t x179 = INT32_MIN;
	uint32_t t37 = 74994U;

	t37 = (((x177&x178)%x179)*x180);

	if (t37 != 4294934529U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -1258LL;
	int32_t x183 = -98562;
	int32_t x184 = 5982985;
	static int64_t t38 = 1LL;

	t38 = (((x181&x182)%x183)*x184);

	if (t38 != -7658220800LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MIN;
	volatile int64_t t39 = 706011LL;

	t39 = (((x185&x186)%x187)*x188);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x189 = 0U;
	volatile uint16_t x190 = 0U;
	int32_t x191 = -18694280;

	t40 = (((x189&x190)%x191)*x192);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x193 = 115148LL;
	volatile uint64_t x194 = 35658029920017326LLU;
	uint64_t x196 = 45126266190355326LLU;

	t41 = (((x193&x194)%x195)*x196);

	if (t41 != 9776133538468333288LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = -1;
	static uint8_t x202 = UINT8_MAX;
	int64_t x203 = INT64_MAX;
	static uint64_t x204 = UINT64_MAX;
	volatile uint64_t t42 = 57450444203LLU;

	t42 = (((x201&x202)%x203)*x204);

	if (t42 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = -141;
	uint64_t x207 = 183949LLU;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t43 = 20033080LLU;

	t43 = (((x205&x206)%x207)*x208);

	if (t43 != 18446491027121373184LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = -1;
	volatile int8_t x210 = INT8_MAX;
	int8_t x211 = -1;
	uint64_t t44 = 393LLU;

	t44 = (((x209&x210)%x211)*x212);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x213 = INT8_MIN;
	volatile int64_t x214 = INT64_MAX;
	uint32_t x215 = 4032U;
	int16_t x216 = INT16_MAX;
	int64_t t45 = -3452207521663748073LL;

	t45 = (((x213&x214)%x215)*x216);

	if (t45 != 12582528LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x217 = UINT8_MAX;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MAX;
	volatile uint64_t t46 = 362625571353377038LLU;

	t46 = (((x217&x218)%x219)*x220);

	if (t46 != 253403070346LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x221 = 0U;
	static int8_t x222 = 1;
	volatile uint32_t x223 = 29517U;
	int64_t x224 = 3LL;
	volatile int64_t t47 = 1264581349575LL;

	t47 = (((x221&x222)%x223)*x224);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 88U;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;
	int64_t t48 = 20599335LL;

	t48 = (((x225&x226)%x227)*x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x230 = 78LL;
	volatile int8_t x231 = 27;
	volatile uint64_t x232 = 1368851535LLU;
	volatile uint64_t t49 = 1396456918365LLU;

	t49 = (((x229&x230)%x231)*x232);

	if (t49 != 32852436840LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = 17;
	static int32_t x234 = INT32_MIN;
	uint8_t x235 = UINT8_MAX;
	static volatile int32_t x236 = INT32_MAX;
	int32_t t50 = -941;

	t50 = (((x233&x234)%x235)*x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = INT8_MIN;
	static uint8_t x246 = UINT8_MAX;
	static uint16_t x247 = UINT16_MAX;
	uint64_t x248 = 8948372017690LLU;
	volatile uint64_t t51 = 5863780LLU;

	t51 = (((x245&x246)%x247)*x248);

	if (t51 != 1145391618264320LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x249 = INT16_MIN;
	static int8_t x250 = 47;
	static uint8_t x252 = UINT8_MAX;
	volatile int64_t t52 = 11346019LL;

	t52 = (((x249&x250)%x251)*x252);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x254 = -1;
	int16_t x255 = INT16_MIN;
	static int8_t x256 = INT8_MAX;

	t53 = (((x253&x254)%x255)*x256);

	if (t53 != 100152515714507LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = INT8_MIN;
	static int16_t x258 = -1;
	volatile int8_t x259 = -1;
	int32_t t54 = 5096455;

	t54 = (((x257&x258)%x259)*x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = UINT8_MAX;
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = INT64_MIN;
	uint8_t x264 = 2U;

	t55 = (((x261&x262)%x263)*x264);

	if (t55 != 510LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	int64_t x268 = 404249084303LL;
	static volatile int64_t t56 = -57LL;

	t56 = (((x265&x266)%x267)*x268);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x270 = INT64_MIN;
	int64_t x271 = -31360LL;

	t57 = (((x269&x270)%x271)*x272);

	if (t57 != -973063680LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MIN;
	volatile int64_t x275 = 3024951007239792LL;
	int8_t x276 = 13;
	int64_t t58 = 2420842LL;

	t58 = (((x273&x274)%x275)*x276);

	if (t58 != -3853405148450000LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x277 = UINT64_MAX;
	int16_t x278 = 3;
	volatile uint64_t t59 = 1LLU;

	t59 = (((x277&x278)%x279)*x280);

	if (t59 != 18434168664805876126LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x285 = UINT8_MAX;
	uint8_t x287 = UINT8_MAX;
	uint8_t x288 = 0U;

	t60 = (((x285&x286)%x287)*x288);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x289 = 15957564172756LLU;
	uint32_t x290 = 2141581487U;
	uint8_t x292 = 0U;
	volatile uint64_t t61 = 234LLU;

	t61 = (((x289&x290)%x291)*x292);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x293 = UINT16_MAX;
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = INT64_MIN;
	volatile int64_t t62 = 1733378773694194131LL;

	t62 = (((x293&x294)%x295)*x296);

	if (t62 != 15920203774830LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = INT32_MAX;
	volatile int8_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = INT8_MIN;
	static int32_t t63 = -1032695;

	t63 = (((x297&x298)%x299)*x300);

	if (t63 != -4194176) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = -1LL;
	volatile uint32_t x302 = 74U;
	volatile uint16_t x304 = UINT16_MAX;
	static int64_t t64 = 42467386487758141LL;

	t64 = (((x301&x302)%x303)*x304);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	volatile uint64_t x307 = UINT64_MAX;
	volatile int32_t x308 = INT32_MIN;
	uint64_t t65 = 1LLU;

	t65 = (((x305&x306)%x307)*x308);

	if (t65 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x309 = INT64_MAX;
	volatile int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MIN;
	uint64_t t66 = 620864324573104510LLU;

	t66 = (((x309&x310)%x311)*x312);

	if (t66 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x315 = -1;
	int64_t x316 = INT64_MIN;
	int64_t t67 = 1LL;

	t67 = (((x313&x314)%x315)*x316);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x317 = 55U;
	static int64_t x318 = 16121112796LL;
	static volatile uint8_t x320 = 3U;

	t68 = (((x317&x318)%x319)*x320);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x322 = UINT64_MAX;
	uint8_t x323 = 10U;
	volatile int64_t x324 = -1LL;
	volatile uint64_t t69 = 9001186745550LLU;

	t69 = (((x321&x322)%x323)*x324);

	if (t69 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x325 = INT16_MIN;
	uint64_t x326 = UINT64_MAX;
	int8_t x327 = -1;
	static int64_t x328 = INT64_MIN;
	static volatile uint64_t t70 = 3685230939LLU;

	t70 = (((x325&x326)%x327)*x328);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x329 = -1;
	volatile int8_t x330 = INT8_MIN;
	static int16_t x331 = -1;
	uint64_t x332 = 29710981144070680LLU;
	uint64_t t71 = 213907250549476591LLU;

	t71 = (((x329&x330)%x331)*x332);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x333 = UINT16_MAX;
	volatile uint32_t x334 = UINT32_MAX;
	uint16_t x335 = UINT16_MAX;
	volatile int32_t x336 = INT32_MIN;

	t72 = (((x333&x334)%x335)*x336);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x341 = UINT64_MAX;
	uint32_t x342 = 2613680U;
	volatile int16_t x343 = INT16_MAX;
	static uint32_t x344 = UINT32_MAX;
	volatile uint64_t t73 = 357584973002528231LLU;

	t73 = (((x341&x342)%x343)*x344);

	if (t73 != 107747844529665LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x346 = 27150794LLU;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = 223788002LLU;
	static uint64_t t74 = 4964LLU;

	t74 = (((x345&x346)%x347)*x348);

	if (t74 != 2237880020LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x349 = 6LLU;
	uint64_t x350 = 46981226624396LLU;
	int16_t x351 = INT16_MIN;
	uint64_t t75 = 201839873LLU;

	t75 = (((x349&x350)%x351)*x352);

	if (t75 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x353 = INT64_MAX;
	uint16_t x355 = 28U;
	uint8_t x356 = UINT8_MAX;
	int64_t t76 = 11889LL;

	t76 = (((x353&x354)%x355)*x356);

	if (t76 != 1785LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x358 = 1;
	static int16_t x359 = INT16_MIN;
	static uint16_t x360 = UINT16_MAX;
	int32_t t77 = -1159298;

	t77 = (((x357&x358)%x359)*x360);

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x361 = 5U;
	uint64_t x362 = 309641383994429LLU;
	uint16_t x363 = 1810U;
	volatile uint16_t x364 = 0U;
	volatile uint64_t t78 = 107512403582668LLU;

	t78 = (((x361&x362)%x363)*x364);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = -1;
	int8_t x366 = -6;
	int8_t x367 = INT8_MAX;
	volatile int16_t x368 = -98;
	static volatile int32_t t79 = -176036;

	t79 = (((x365&x366)%x367)*x368);

	if (t79 != 588) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = 0;
	volatile int8_t x370 = 0;
	static int32_t x371 = -1;
	int64_t x372 = 66519182887141470LL;
	volatile int64_t t80 = -1LL;

	t80 = (((x369&x370)%x371)*x372);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x373 = UINT32_MAX;
	uint32_t x374 = 60483164U;
	int8_t x375 = INT8_MIN;
	static uint8_t x376 = 23U;
	uint32_t t81 = 357864369U;

	t81 = (((x373&x374)%x375)*x376);

	if (t81 != 1391112772U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x378 = 6;
	int8_t x379 = 23;
	int32_t x380 = -1;
	static volatile int32_t t82 = 248;

	t82 = (((x377&x378)%x379)*x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = UINT16_MAX;
	int32_t x382 = INT32_MIN;
	volatile int32_t x383 = INT32_MIN;
	static volatile int64_t x384 = -5427105425580LL;

	t83 = (((x381&x382)%x383)*x384);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x386 = -1LL;
	int8_t x387 = 19;
	int32_t x388 = INT32_MAX;
	int64_t t84 = 128263LL;

	t84 = (((x385&x386)%x387)*x388);

	if (t84 != -30064771058LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x389 = 7U;
	int8_t x390 = 0;
	int8_t x391 = -1;
	int64_t x392 = INT64_MAX;
	volatile int64_t t85 = 900333934205790LL;

	t85 = (((x389&x390)%x391)*x392);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x393 = UINT8_MAX;
	int64_t x394 = 97262105834LL;
	static volatile int8_t x395 = INT8_MIN;

	t86 = (((x393&x394)%x395)*x396);

	if (t86 != 53515160LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MAX;
	volatile int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MIN;
	static int64_t x400 = INT64_MIN;
	volatile int64_t t87 = 914LL;

	t87 = (((x397&x398)%x399)*x400);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x405 = INT64_MIN;
	volatile int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	volatile int64_t t88 = 1911684LL;

	t88 = (((x405&x406)%x407)*x408);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = UINT64_MAX;
	int8_t x411 = -1;
	uint8_t x412 = 103U;
	static volatile uint64_t t89 = 239LLU;

	t89 = (((x409&x410)%x411)*x412);

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x415 = INT16_MAX;
	int8_t x416 = -28;
	volatile int32_t t90 = -1302307;

	t90 = (((x413&x414)%x415)*x416);

	if (t90 != 3584) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x417 = 1625U;
	int8_t x419 = -1;
	uint64_t x420 = UINT64_MAX;
	volatile uint64_t t91 = 8910564LLU;

	t91 = (((x417&x418)%x419)*x420);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = -1;
	uint8_t x422 = 0U;
	volatile uint16_t x423 = UINT16_MAX;
	volatile int64_t x424 = INT64_MIN;

	t92 = (((x421&x422)%x423)*x424);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = -1;
	int64_t x427 = INT64_MIN;
	volatile int32_t x428 = INT32_MAX;
	volatile int64_t t93 = -209244652705033383LL;

	t93 = (((x425&x426)%x427)*x428);

	if (t93 != -2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = INT64_MAX;
	int64_t x430 = -14229794143380LL;
	int32_t x431 = INT32_MIN;
	volatile int32_t x432 = -1517418;
	static int64_t t94 = 0LL;

	t94 = (((x429&x430)%x431)*x432);

	if (t94 != -2397508173192888LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x433 = INT16_MIN;
	volatile uint32_t x434 = UINT32_MAX;
	static int16_t x435 = INT16_MIN;
	int64_t x436 = INT64_MIN;
	int64_t t95 = 2LL;

	t95 = (((x433&x434)%x435)*x436);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x437 = 1U;
	uint16_t x438 = 4036U;
	int16_t x439 = INT16_MAX;
	volatile uint8_t x440 = UINT8_MAX;
	int32_t t96 = -1553;

	t96 = (((x437&x438)%x439)*x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x442 = 1;
	int32_t x443 = INT32_MIN;
	volatile int16_t x444 = INT16_MIN;
	static int32_t t97 = 7118;

	t97 = (((x441&x442)%x443)*x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x445 = -22;
	int16_t x446 = INT16_MIN;
	int16_t x447 = -436;
	static volatile int16_t x448 = INT16_MIN;
	volatile int32_t t98 = -80199616;

	t98 = (((x445&x446)%x447)*x448);

	if (t98 != 2228224) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x449 = INT8_MIN;
	static int16_t x450 = -89;
	uint64_t x451 = 1026115439170022LLU;
	int16_t x452 = INT16_MIN;
	static volatile uint64_t t99 = 1249LLU;

	t99 = (((x449&x450)%x451)*x452);

	if (t99 != 9703463431547060224LLU) { NG(); } else { ; }
	
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

