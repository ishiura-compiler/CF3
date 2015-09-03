#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
int64_t t1 = 0LL;
volatile int8_t x10 = INT8_MIN;
int16_t x25 = -1;
int32_t x28 = INT32_MAX;
int64_t t4 = -202934478767630436LL;
static volatile int32_t t5 = 2732118;
uint8_t x38 = 25U;
volatile int64_t t7 = 6038LL;
uint64_t x49 = 9645665079LLU;
int8_t x68 = INT8_MIN;
int8_t x75 = -1;
static int32_t x83 = INT32_MIN;
int64_t x85 = INT64_MAX;
volatile uint32_t x87 = UINT32_MAX;
int64_t x91 = -15LL;
static int32_t x93 = INT32_MIN;
static volatile int32_t t20 = 174971705;
int64_t t21 = 12847972LL;
int64_t t22 = 33LL;
int64_t x112 = -6838893756603742LL;
int64_t x113 = INT64_MIN;
volatile uint8_t x118 = 6U;
volatile uint32_t x119 = UINT32_MAX;
volatile uint16_t x122 = 1685U;
int32_t t27 = -1445;
static int16_t x145 = INT16_MIN;
int16_t x146 = -240;
int64_t x149 = INT64_MAX;
static uint16_t x155 = UINT16_MAX;
volatile int64_t x164 = INT64_MIN;
volatile int64_t x182 = 1613478048694519169LL;
static int32_t x184 = INT32_MIN;
int32_t x191 = -443483;
int8_t x192 = -1;
uint64_t x195 = UINT64_MAX;
static volatile uint64_t t40 = 3868743614285893047LLU;
uint16_t x197 = UINT16_MAX;
int64_t x199 = -75947LL;
volatile int64_t t41 = -239478075LL;
int32_t x211 = INT32_MIN;
uint8_t x218 = 1U;
int8_t x223 = -1;
volatile int16_t x225 = INT16_MIN;
static int32_t t46 = -506;
volatile int8_t x235 = INT8_MIN;
volatile int64_t t47 = -13600LL;
volatile int16_t x238 = -1;
uint64_t x239 = 410106380497297LLU;
volatile int64_t x242 = INT64_MIN;
uint64_t x244 = UINT64_MAX;
static uint64_t t49 = 420697674LLU;
int16_t x252 = 0;
static int32_t x257 = 31338;
int32_t x260 = -1;
uint8_t x262 = 2U;
volatile int8_t x263 = INT8_MIN;
int16_t x265 = INT16_MIN;
int64_t x270 = INT64_MIN;
int8_t x273 = INT8_MIN;
volatile uint32_t x274 = UINT32_MAX;
int8_t x275 = INT8_MIN;
uint32_t x279 = 169U;
static uint64_t x280 = UINT64_MAX;
uint64_t t58 = 2018515829LLU;
static volatile int8_t x285 = -2;
int16_t x288 = -4202;
int16_t x301 = INT16_MIN;
int32_t x302 = INT32_MIN;
int32_t x304 = -1;
int32_t t63 = -247;
int16_t x319 = -1;
uint16_t x324 = 1120U;
uint64_t x339 = UINT64_MAX;
int8_t x348 = INT8_MIN;
volatile uint32_t t75 = 59111U;
uint16_t x353 = UINT16_MAX;
int32_t x359 = INT32_MIN;
int16_t x362 = INT16_MAX;
int32_t x364 = -315695079;
int16_t x377 = 26;
int16_t x384 = INT16_MAX;
uint16_t x385 = 7412U;
int16_t x386 = -1;
uint16_t x390 = 3U;
static volatile int32_t t84 = -2727;
static int16_t x396 = INT16_MIN;
uint32_t t85 = 138U;
uint8_t x399 = 14U;
volatile uint64_t x406 = 714200918171098LLU;
int16_t x407 = -1;
volatile uint8_t x408 = UINT8_MAX;
volatile uint64_t t90 = 719LLU;
volatile int64_t x419 = INT64_MIN;
int16_t x425 = 0;
uint32_t x432 = 121999679U;
int64_t t94 = 1LL;
volatile uint64_t t97 = 484894799948778LLU;
int16_t x464 = -1;
static volatile int32_t t99 = -5643386;


void f0(void) {
	int8_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	static int16_t x3 = 0;
	int64_t t0 = 95440286124405LL;

	t0 = (((x1<=x2)|x3)-x4);

	if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	volatile uint64_t x6 = 4922916416688LLU;
	volatile uint32_t x7 = 899334141U;
	volatile int64_t x8 = INT64_MAX;

	t1 = (((x5<=x6)|x7)-x8);

	if (t1 != -9223372035955441666LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static volatile int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -105563708;

	t2 = (((x9<=x10)|x11)-x12);

	if (t2 != -2147483520) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	static int8_t x20 = INT8_MIN;
	int64_t t3 = -17125598941LL;

	t3 = (((x17<=x18)|x19)-x20);

	if (t3 != 127LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x26 = -1;
	int64_t x27 = 1902833028346LL;

	t4 = (((x25<=x26)|x27)-x28);

	if (t4 != 1900685544700LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 87963413461LLU;
	int8_t x30 = -54;
	static uint8_t x31 = 43U;
	int8_t x32 = 13;

	t5 = (((x29<=x30)|x31)-x32);

	if (t5 != 30) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MAX;
	uint16_t x34 = 15U;
	int8_t x35 = INT8_MAX;
	uint16_t x36 = 30U;
	volatile int32_t t6 = -23013629;

	t6 = (((x33<=x34)|x35)-x36);

	if (t6 != 97) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = INT8_MIN;
	uint16_t x39 = 24U;
	static int64_t x40 = 2492243LL;

	t7 = (((x37<=x38)|x39)-x40);

	if (t7 != -2492218LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	volatile uint8_t x42 = UINT8_MAX;
	int32_t x43 = INT32_MAX;
	uint32_t x44 = 86125081U;
	uint32_t t8 = 228968U;

	t8 = (((x41<=x42)|x43)-x44);

	if (t8 != 2061358566U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 24U;
	uint8_t x46 = UINT8_MAX;
	static int16_t x47 = 194;
	static uint64_t x48 = 13331486442510665LLU;
	volatile uint64_t t9 = 33329738637667LLU;

	t9 = (((x45<=x46)|x47)-x48);

	if (t9 != 18433412587267041146LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x50 = -2;
	volatile int16_t x51 = -1;
	int32_t x52 = INT32_MIN;
	volatile int32_t t10 = INT32_MAX;

	t10 = (((x49<=x50)|x51)-x52);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MAX;
	int8_t x54 = 0;
	volatile uint64_t x55 = UINT64_MAX;
	volatile int8_t x56 = -1;
	uint64_t t11 = 24LLU;

	t11 = (((x53<=x54)|x55)-x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x61 = -8084851192845LL;
	uint8_t x62 = 67U;
	volatile int16_t x63 = INT16_MAX;
	int64_t x64 = -1LL;
	static volatile int64_t t12 = -85465809904074LL;

	t12 = (((x61<=x62)|x63)-x64);

	if (t12 != 32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	volatile int64_t x66 = 4764700349LL;
	uint32_t x67 = 2500834U;
	uint32_t t13 = 54699U;

	t13 = (((x65<=x66)|x67)-x68);

	if (t13 != 2500963U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x69 = -1LL;
	static int8_t x70 = INT8_MIN;
	volatile uint64_t x71 = 1558643872089LLU;
	static int8_t x72 = -1;
	volatile uint64_t t14 = 1511LLU;

	t14 = (((x69<=x70)|x71)-x72);

	if (t14 != 1558643872090LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x73 = 4;
	volatile int64_t x74 = INT64_MIN;
	static int32_t x76 = -14469;
	volatile int32_t t15 = -96098807;

	t15 = (((x73<=x74)|x75)-x76);

	if (t15 != 14468) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = UINT64_MAX;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	int32_t t16 = 166725;

	t16 = (((x77<=x78)|x79)-x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 105U;
	uint32_t x82 = 828096943U;
	int32_t x84 = INT32_MIN;
	static int32_t t17 = -1041518;

	t17 = (((x81<=x82)|x83)-x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x86 = 9423U;
	static int16_t x88 = 226;
	uint32_t t18 = 8373863U;

	t18 = (((x85<=x86)|x87)-x88);

	if (t18 != 4294967069U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 19351LLU;
	int8_t x90 = -1;
	volatile int16_t x92 = -8;
	static volatile int64_t t19 = -5745300765981113LL;

	t19 = (((x89<=x90)|x91)-x92);

	if (t19 != -7LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x94 = 4023;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = 0U;

	t20 = (((x93<=x94)|x95)-x96);

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 121709707840275714LLU;
	uint32_t x98 = 19U;
	int64_t x99 = INT64_MIN;
	static int8_t x100 = INT8_MIN;

	t21 = (((x97<=x98)|x99)-x100);

	if (t21 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x105 = 103U;
	int64_t x106 = -1LL;
	int16_t x107 = -1;
	int64_t x108 = -4696LL;

	t22 = (((x105<=x106)|x107)-x108);

	if (t22 != 4695LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = 6;
	static int32_t x110 = 62;
	volatile int8_t x111 = -7;
	int64_t t23 = -870086LL;

	t23 = (((x109<=x110)|x111)-x112);

	if (t23 != 6838893756603735LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x114 = -1;
	volatile int64_t x115 = -1LL;
	int8_t x116 = INT8_MAX;
	int64_t t24 = 202645653LL;

	t24 = (((x113<=x114)|x115)-x116);

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x117 = 0;
	uint64_t x120 = 1887040282232LLU;
	volatile uint64_t t25 = 657679745048388701LLU;

	t25 = (((x117<=x118)|x119)-x120);

	if (t25 != 18446742190964236679LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	int32_t x124 = -1836204;
	volatile int64_t t26 = -28572023LL;

	t26 = (((x121<=x122)|x123)-x124);

	if (t26 != -9223372036852939603LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x129 = INT64_MAX;
	int8_t x130 = INT8_MIN;
	static volatile int8_t x131 = -15;
	uint8_t x132 = UINT8_MAX;

	t27 = (((x129<=x130)|x131)-x132);

	if (t27 != -270) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = -1286098935857LL;
	int64_t x138 = INT64_MAX;
	int8_t x139 = INT8_MIN;
	static uint16_t x140 = 3903U;
	int32_t t28 = -4306972;

	t28 = (((x137<=x138)|x139)-x140);

	if (t28 != -4030) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 0U;
	volatile int64_t x142 = INT64_MAX;
	int32_t x143 = -2;
	int64_t x144 = -1LL;
	static int64_t t29 = 3424311611LL;

	t29 = (((x141<=x142)|x143)-x144);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x147 = -1;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t30 = 2319U;

	t30 = (((x145<=x146)|x147)-x148);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x150 = 0;
	int8_t x151 = -1;
	static int32_t x152 = INT32_MAX;
	volatile int32_t t31 = INT32_MIN;

	t31 = (((x149<=x150)|x151)-x152);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MIN;
	volatile uint64_t x154 = UINT64_MAX;
	static int64_t x156 = -1LL;
	int64_t t32 = -5251595339LL;

	t32 = (((x153<=x154)|x155)-x156);

	if (t32 != 65536LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x157 = INT32_MIN;
	int16_t x158 = 22;
	static uint8_t x159 = 2U;
	uint16_t x160 = UINT16_MAX;
	int32_t t33 = 26528861;

	t33 = (((x157<=x158)|x159)-x160);

	if (t33 != -65532) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x161 = UINT8_MAX;
	uint8_t x162 = 110U;
	int16_t x163 = INT16_MIN;
	static volatile int64_t t34 = -23479LL;

	t34 = (((x161<=x162)|x163)-x164);

	if (t34 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x165 = 308U;
	static int8_t x166 = INT8_MAX;
	uint8_t x167 = 12U;
	uint32_t x168 = 1393097U;
	volatile uint32_t t35 = 9006097U;

	t35 = (((x165<=x166)|x167)-x168);

	if (t35 != 4293574211U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MIN;
	uint8_t x170 = 0U;
	int8_t x171 = INT8_MIN;
	volatile int16_t x172 = INT16_MIN;
	int32_t t36 = -7974256;

	t36 = (((x169<=x170)|x171)-x172);

	if (t36 != 32641) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x177 = 97U;
	static volatile int64_t x178 = -1LL;
	uint32_t x179 = 856463U;
	int32_t x180 = -39195;
	volatile uint32_t t37 = 4793U;

	t37 = (((x177<=x178)|x179)-x180);

	if (t37 != 895658U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x183 = 1LLU;
	uint64_t t38 = 2694490432LLU;

	t38 = (((x181<=x182)|x183)-x184);

	if (t38 != 2147483649LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = INT16_MIN;
	uint32_t x190 = 0U;
	int32_t t39 = 13;

	t39 = (((x189<=x190)|x191)-x192);

	if (t39 != -443482) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x193 = 2U;
	volatile uint64_t x194 = 1662622LLU;
	volatile uint16_t x196 = UINT16_MAX;

	t40 = (((x193<=x194)|x195)-x196);

	if (t40 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x198 = 4808932648LLU;
	static int32_t x200 = INT32_MIN;

	t41 = (((x197<=x198)|x199)-x200);

	if (t41 != 2147407701LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = 3;
	uint16_t x210 = 30997U;
	volatile uint32_t x212 = 30U;
	volatile uint32_t t42 = 222U;

	t42 = (((x209<=x210)|x211)-x212);

	if (t42 != 2147483619U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = -2;
	volatile uint64_t x214 = 90582932LLU;
	int8_t x215 = INT8_MIN;
	volatile uint8_t x216 = 1U;
	volatile int32_t t43 = 1042109;

	t43 = (((x213<=x214)|x215)-x216);

	if (t43 != -129) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x217 = 3U;
	int32_t x219 = INT32_MIN;
	static volatile int16_t x220 = -1;
	volatile int32_t t44 = -3;

	t44 = (((x217<=x218)|x219)-x220);

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = 10U;
	volatile int16_t x222 = INT16_MAX;
	volatile int8_t x224 = INT8_MIN;
	int32_t t45 = 102;

	t45 = (((x221<=x222)|x223)-x224);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x226 = 12639536255309LL;
	int8_t x227 = -1;
	uint8_t x228 = 0U;

	t46 = (((x225<=x226)|x227)-x228);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = INT16_MAX;
	static uint64_t x234 = 62973762LLU;
	int64_t x236 = INT64_MIN;

	t47 = (((x233<=x234)|x235)-x236);

	if (t47 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x237 = UINT64_MAX;
	int64_t x240 = INT64_MAX;
	uint64_t t48 = 184LLU;

	t48 = (((x237<=x238)|x239)-x240);

	if (t48 != 9223782143235273106LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = INT8_MIN;
	int8_t x243 = INT8_MIN;

	t49 = (((x241<=x242)|x243)-x244);

	if (t49 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x245 = UINT32_MAX;
	int32_t x246 = INT32_MAX;
	int8_t x247 = INT8_MIN;
	static int64_t x248 = INT64_MIN;
	volatile int64_t t50 = 30492LL;

	t50 = (((x245<=x246)|x247)-x248);

	if (t50 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x249 = 2831079628LLU;
	uint16_t x250 = 5378U;
	uint32_t x251 = 1685008U;
	uint32_t t51 = 164U;

	t51 = (((x249<=x250)|x251)-x252);

	if (t51 != 1685008U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = -13575030LL;
	int8_t x254 = -1;
	int8_t x255 = -9;
	int8_t x256 = INT8_MIN;
	int32_t t52 = -1;

	t52 = (((x253<=x254)|x255)-x256);

	if (t52 != 119) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x258 = UINT64_MAX;
	static uint64_t x259 = 126470609LLU;
	volatile uint64_t t53 = 3773999682LLU;

	t53 = (((x257<=x258)|x259)-x260);

	if (t53 != 126470610LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x261 = INT16_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t54 = -6525;

	t54 = (((x261<=x262)|x263)-x264);

	if (t54 != 32640) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x266 = INT16_MIN;
	static uint64_t x267 = UINT64_MAX;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t55 = 16364665972LLU;

	t55 = (((x265<=x266)|x267)-x268);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x269 = 52;
	volatile int32_t x271 = INT32_MIN;
	int8_t x272 = -1;
	volatile int32_t t56 = -2;

	t56 = (((x269<=x270)|x271)-x272);

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x276 = INT32_MIN;
	int32_t t57 = 56236329;

	t57 = (((x273<=x274)|x275)-x276);

	if (t57 != 2147483521) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MAX;

	t58 = (((x277<=x278)|x279)-x280);

	if (t58 != 170LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = -5;
	int32_t x282 = -1;
	uint16_t x283 = UINT16_MAX;
	volatile int32_t x284 = -53247084;
	volatile int32_t t59 = 1;

	t59 = (((x281<=x282)|x283)-x284);

	if (t59 != 53312619) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x286 = UINT32_MAX;
	static volatile uint16_t x287 = 9357U;
	int32_t t60 = 58287;

	t60 = (((x285<=x286)|x287)-x288);

	if (t60 != 13559) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x293 = 14U;
	volatile uint32_t x294 = UINT32_MAX;
	int8_t x295 = INT8_MAX;
	int8_t x296 = -1;
	int32_t t61 = -242334;

	t61 = (((x293<=x294)|x295)-x296);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = INT64_MIN;
	volatile uint64_t x299 = 64201LLU;
	int32_t x300 = 13;
	static uint64_t t62 = 5897810179222LLU;

	t62 = (((x297<=x298)|x299)-x300);

	if (t62 != 64188LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x303 = INT16_MAX;

	t63 = (((x301<=x302)|x303)-x304);

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = INT16_MIN;
	static int8_t x306 = -1;
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = -1;
	volatile int32_t t64 = 241710;

	t64 = (((x305<=x306)|x307)-x308);

	if (t64 != 256) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x309 = INT8_MIN;
	uint32_t x310 = 29326U;
	uint8_t x311 = 3U;
	static uint32_t x312 = 219371U;
	uint32_t t65 = 75994146U;

	t65 = (((x309<=x310)|x311)-x312);

	if (t65 != 4294747928U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x313 = INT32_MAX;
	int8_t x314 = INT8_MAX;
	static int64_t x315 = INT64_MAX;
	int64_t x316 = 67549626707250LL;
	int64_t t66 = -89LL;

	t66 = (((x313<=x314)|x315)-x316);

	if (t66 != 9223304487228068557LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int8_t x318 = 56;
	volatile int8_t x320 = 15;
	static volatile int32_t t67 = 29439;

	t67 = (((x317<=x318)|x319)-x320);

	if (t67 != -16) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = -23961798;
	int64_t x322 = -3995LL;
	volatile uint8_t x323 = 1U;
	int32_t t68 = 4825;

	t68 = (((x321<=x322)|x323)-x324);

	if (t68 != -1119) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = 3;
	static int16_t x326 = INT16_MIN;
	int64_t x327 = -1LL;
	static volatile int32_t x328 = INT32_MIN;
	volatile int64_t t69 = -1309299047233520606LL;

	t69 = (((x325<=x326)|x327)-x328);

	if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x330 = 0U;
	uint32_t x331 = 20470U;
	int32_t x332 = INT32_MIN;
	static volatile uint32_t t70 = 14U;

	t70 = (((x329<=x330)|x331)-x332);

	if (t70 != 2147504119U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x333 = UINT64_MAX;
	volatile uint32_t x334 = 4599U;
	int32_t x335 = INT32_MIN;
	volatile uint64_t x336 = 8280736099609116546LLU;
	uint64_t t71 = 69326662054295LLU;

	t71 = (((x333<=x334)|x335)-x336);

	if (t71 != 10166007971952951422LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x337 = -1;
	volatile uint64_t x338 = UINT64_MAX;
	static uint32_t x340 = 203246U;
	volatile uint64_t t72 = 2929LLU;

	t72 = (((x337<=x338)|x339)-x340);

	if (t72 != 18446744073709348369LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = UINT32_MAX;
	int8_t x342 = 1;
	int8_t x343 = INT8_MIN;
	uint16_t x344 = UINT16_MAX;
	int32_t t73 = 1;

	t73 = (((x341<=x342)|x343)-x344);

	if (t73 != -65663) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x345 = INT32_MIN;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = -22;
	int32_t t74 = 1;

	t74 = (((x345<=x346)|x347)-x348);

	if (t74 != 107) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = 28;
	uint64_t x350 = 1723581681LLU;
	uint8_t x351 = UINT8_MAX;
	uint32_t x352 = 252096351U;

	t75 = (((x349<=x350)|x351)-x352);

	if (t75 != 4042871200U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x354 = 21528U;
	uint16_t x355 = 84U;
	static int16_t x356 = 1;
	int32_t t76 = -467;

	t76 = (((x353<=x354)|x355)-x356);

	if (t76 != 83) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = 242682884438LLU;
	static int16_t x358 = INT16_MAX;
	uint64_t x360 = 93644100083978LLU;
	volatile uint64_t t77 = 60078624LLU;

	t77 = (((x357<=x358)|x359)-x360);

	if (t77 != 18446650427461983990LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MAX;
	static int64_t x363 = INT64_MIN;
	volatile int64_t t78 = -118295LL;

	t78 = (((x361<=x362)|x363)-x364);

	if (t78 != -9223372036539080729LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = 16;
	int32_t x371 = -1;
	volatile uint16_t x372 = 1349U;
	volatile int32_t t79 = 25047;

	t79 = (((x369<=x370)|x371)-x372);

	if (t79 != -1350) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x373 = INT32_MIN;
	static uint64_t x374 = 24LLU;
	uint32_t x375 = UINT32_MAX;
	uint64_t x376 = 11780021388326LLU;
	uint64_t t80 = 622140732LLU;

	t80 = (((x373<=x374)|x375)-x376);

	if (t80 != 18446732297983130585LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x378 = UINT32_MAX;
	uint16_t x379 = UINT16_MAX;
	static volatile int8_t x380 = INT8_MAX;
	volatile int32_t t81 = 989;

	t81 = (((x377<=x378)|x379)-x380);

	if (t81 != 65408) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = -1;
	int16_t x383 = INT16_MIN;
	volatile int32_t t82 = 124146;

	t82 = (((x381<=x382)|x383)-x384);

	if (t82 != -65534) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x387 = UINT16_MAX;
	static int8_t x388 = INT8_MIN;
	int32_t t83 = 1925123;

	t83 = (((x385<=x386)|x387)-x388);

	if (t83 != 65663) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x389 = INT32_MIN;
	int16_t x391 = -170;
	volatile int8_t x392 = -1;

	t84 = (((x389<=x390)|x391)-x392);

	if (t84 != -168) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x393 = -1;
	static int32_t x394 = INT32_MIN;
	uint32_t x395 = UINT32_MAX;

	t85 = (((x393<=x394)|x395)-x396);

	if (t85 != 32767U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -5334625577534698LL;
	int16_t x398 = INT16_MIN;
	volatile int16_t x400 = 125;
	int32_t t86 = 115382;

	t86 = (((x397<=x398)|x399)-x400);

	if (t86 != -110) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x401 = 16810;
	volatile int32_t x402 = INT32_MIN;
	int8_t x403 = -1;
	int64_t x404 = INT64_MIN;
	int64_t t87 = INT64_MAX;

	t87 = (((x401<=x402)|x403)-x404);

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = INT16_MIN;
	volatile int32_t t88 = 413438;

	t88 = (((x405<=x406)|x407)-x408);

	if (t88 != -256) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x409 = INT8_MIN;
	static int64_t x410 = INT64_MIN;
	int64_t x411 = -54LL;
	int32_t x412 = -359;
	int64_t t89 = -99100035781113290LL;

	t89 = (((x409<=x410)|x411)-x412);

	if (t89 != 305LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x413 = 5U;
	uint8_t x414 = 1U;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = INT16_MIN;

	t90 = (((x413<=x414)|x415)-x416);

	if (t90 != 32767LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x417 = 1014859825682894LLU;
	uint32_t x418 = 113U;
	int8_t x420 = -1;
	volatile int64_t t91 = 252334183883545LL;

	t91 = (((x417<=x418)|x419)-x420);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = INT8_MAX;
	static uint16_t x422 = UINT16_MAX;
	volatile int8_t x423 = 1;
	int16_t x424 = 1;
	static volatile int32_t t92 = 26711548;

	t92 = (((x421<=x422)|x423)-x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x426 = 7099;
	static uint32_t x427 = 79U;
	static int8_t x428 = INT8_MAX;
	uint32_t t93 = 158460497U;

	t93 = (((x425<=x426)|x427)-x428);

	if (t93 != 4294967248U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x429 = -14;
	int16_t x430 = INT16_MIN;
	int64_t x431 = 18784168LL;

	t94 = (((x429<=x430)|x431)-x432);

	if (t94 != -103215511LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x437 = -1;
	int8_t x438 = -1;
	uint8_t x439 = 68U;
	int64_t x440 = -4786113821933LL;
	volatile int64_t t95 = 79614LL;

	t95 = (((x437<=x438)|x439)-x440);

	if (t95 != 4786113822002LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x441 = -3;
	int32_t x442 = -209902;
	int64_t x443 = -1001649LL;
	volatile uint64_t x444 = 55248587172518LLU;
	uint64_t t96 = 35136LLU;

	t96 = (((x441<=x442)|x443)-x444);

	if (t96 != 18446688825121377449LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = -1;
	uint64_t x446 = UINT64_MAX;
	volatile int32_t x447 = -1;
	uint64_t x448 = 3591246226LLU;

	t97 = (((x445<=x446)|x447)-x448);

	if (t97 != 18446744070118305389LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x449 = 21U;
	volatile int8_t x450 = INT8_MAX;
	static volatile int16_t x451 = 10;
	int64_t x452 = INT64_MAX;
	int64_t t98 = 1472LL;

	t98 = (((x449<=x450)|x451)-x452);

	if (t98 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = -1;
	int16_t x462 = 1;
	static uint16_t x463 = UINT16_MAX;

	t99 = (((x461<=x462)|x463)-x464);

	if (t99 != 65536) { NG(); } else { ; }
	
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

