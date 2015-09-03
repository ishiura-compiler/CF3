#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = -1;
int8_t x11 = INT8_MIN;
uint8_t x46 = 1U;
volatile uint8_t x54 = UINT8_MAX;
volatile int16_t x60 = -1;
int16_t x81 = -1;
uint64_t x85 = UINT64_MAX;
uint64_t t13 = 3373LLU;
static uint16_t x90 = 7U;
uint32_t x91 = 19179U;
volatile int64_t t15 = -784512050988255LL;
int64_t x99 = INT64_MIN;
uint64_t t16 = 272104LLU;
uint8_t x121 = 1U;
uint32_t x123 = 619U;
uint64_t x130 = 11473498553796LLU;
int32_t x131 = 167791;
static volatile int8_t x134 = 3;
int32_t x135 = 218;
static int8_t x136 = 0;
int32_t t20 = 0;
int8_t x137 = INT8_MAX;
int64_t x138 = 0LL;
int64_t x141 = -1925120798082653LL;
uint64_t x143 = 2946359001117857LLU;
uint64_t t22 = 24LLU;
static volatile uint8_t x153 = UINT8_MAX;
int32_t x156 = 865830;
int16_t x159 = INT16_MIN;
int32_t x162 = INT32_MIN;
int16_t x164 = -1;
volatile int64_t t26 = 254LL;
volatile uint8_t x176 = 49U;
int64_t x178 = -1LL;
uint32_t x182 = 2036968U;
int8_t x183 = INT8_MAX;
int8_t x193 = INT8_MAX;
volatile int32_t t33 = -36;
uint16_t x219 = 3U;
uint16_t x222 = 6723U;
static int64_t t37 = 470677784157LL;
volatile int64_t x226 = -1LL;
static int64_t t38 = 1868578950979126249LL;
uint32_t x229 = 321U;
int16_t x238 = INT16_MAX;
static uint32_t t41 = 0U;
int64_t x251 = 38575524LL;
uint64_t x258 = UINT64_MAX;
static int64_t t46 = -977492105409662LL;
int8_t x287 = 9;
int8_t x290 = 3;
int16_t x304 = 12;
static int8_t x305 = -1;
uint16_t x307 = 172U;
volatile uint32_t x311 = 15U;
int16_t x319 = INT16_MIN;
uint64_t x320 = UINT64_MAX;
volatile uint64_t t54 = 467597279162LLU;
static int16_t x322 = INT16_MIN;
volatile int32_t t57 = -1;
int16_t x340 = INT16_MIN;
int16_t x357 = INT16_MIN;
uint64_t x359 = 7594714361261LLU;
int16_t x370 = 7353;
int32_t t63 = -65;
uint16_t x384 = 210U;
int16_t x390 = 5151;
static uint8_t x394 = 99U;
int64_t t67 = -9432616589LL;
static int64_t x397 = -1LL;
uint8_t x401 = 0U;
volatile int16_t x411 = 0;
volatile int32_t t70 = -396;
int8_t x417 = INT8_MIN;
uint8_t x424 = 0U;
int16_t x445 = INT16_MAX;
int8_t x454 = 16;
static volatile int32_t t80 = -3528;
volatile int32_t x458 = -1;
int8_t x459 = -1;
static uint32_t x460 = UINT32_MAX;
int32_t x464 = 0;
volatile int32_t t82 = 20;
static int64_t x523 = -1LL;
volatile int64_t t90 = -14474430999113LL;
static int16_t x550 = INT16_MAX;
uint16_t x552 = 1186U;
volatile uint32_t t92 = 677764U;
int32_t x554 = 1;
volatile int16_t x555 = INT16_MAX;
int16_t x578 = 31;
volatile uint32_t t97 = 2U;
static volatile uint64_t t98 = 18602846LLU;
volatile int64_t t99 = 103895892LL;


void f0(void) {
	uint64_t x9 = 19456LLU;
	static int64_t x12 = -1LL;
	uint64_t t0 = 622503990988026579LLU;

	t0 = ((x9*x10)^(x11-x12));

	if (t0 != 19329LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x17 = -1;
	int8_t x18 = -51;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = -219285;
	static volatile uint32_t t1 = 4853978U;

	t1 = ((x17*x18)^(x19-x20));

	if (t1 != 219303U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = INT16_MIN;
	static uint32_t x26 = 10398669U;
	static volatile int16_t x27 = INT16_MIN;
	int8_t x28 = -24;
	volatile uint32_t t2 = 46543U;

	t2 = ((x25*x26)^(x27-x28));

	if (t2 != 1441136664U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = -1;
	static uint64_t x30 = 107484692883260LLU;
	uint64_t x31 = UINT64_MAX;
	volatile int16_t x32 = INT16_MIN;
	volatile uint64_t t3 = 707711288461027769LLU;

	t3 = ((x29*x30)^(x31-x32));

	if (t3 != 18446636589016655675LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = 376;
	static int32_t x34 = -336;
	volatile int32_t x35 = INT32_MIN;
	int16_t x36 = -1;
	volatile int32_t t4 = -4853188;

	t4 = ((x33*x34)^(x35-x36));

	if (t4 != 2147357313) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = -1;
	volatile uint64_t x38 = 34689875LLU;
	uint8_t x39 = 116U;
	uint16_t x40 = 8U;
	uint64_t t5 = 260089232859772931LLU;

	t5 = ((x37*x38)^(x39-x40));

	if (t5 != 18446744073674861761LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 3983U;
	int64_t x47 = -1LL;
	int64_t x48 = 5633811140LL;
	int64_t t6 = -606801LL;

	t6 = ((x45*x46)^(x47-x48));

	if (t6 != -5633813836LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x53 = 85889129U;
	int64_t x55 = -117LL;
	volatile int64_t x56 = 35004279632923403LL;
	int64_t t7 = -1303136722082129LL;

	t7 = ((x53*x54)^(x55-x56));

	if (t7 != -35004279484994537LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x57 = 105039LLU;
	uint64_t x58 = 61462918099308336LLU;
	int8_t x59 = INT8_MIN;
	volatile uint64_t t8 = 1LLU;

	t8 = ((x57*x58)^(x59-x60));

	if (t8 != 356971565094760529LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = INT8_MAX;
	uint64_t x62 = 10452103692840757LLU;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = 1141;
	volatile uint64_t t9 = 298166906490870152LLU;

	t9 = ((x61*x62)^(x63-x64));

	if (t9 != 17119326904718776257LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = -1;
	int16_t x70 = INT16_MAX;
	volatile uint64_t x71 = UINT64_MAX;
	uint64_t x72 = UINT64_MAX;
	uint64_t t10 = 233LLU;

	t10 = ((x69*x70)^(x71-x72));

	if (t10 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x77 = INT8_MIN;
	static int16_t x78 = INT16_MIN;
	int8_t x79 = INT8_MIN;
	int8_t x80 = -5;
	static volatile int32_t t11 = -978939555;

	t11 = ((x77*x78)^(x79-x80));

	if (t11 != -4194427) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x82 = -12790;
	uint64_t x83 = 38025797596411LLU;
	int64_t x84 = INT64_MAX;
	volatile uint64_t t12 = 310003627923556LLU;

	t12 = ((x81*x82)^(x83-x84));

	if (t12 != 9223410062652359946LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x86 = -1;
	volatile uint64_t x87 = UINT64_MAX;
	volatile int32_t x88 = -1;

	t13 = ((x85*x86)^(x87-x88));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x89 = -31;
	volatile uint8_t x92 = UINT8_MAX;
	uint32_t t14 = 12576U;

	t14 = ((x89*x90)^(x91-x92));

	if (t14 != 4294948555U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x93 = INT8_MAX;
	static uint8_t x94 = UINT8_MAX;
	int64_t x95 = -1LL;
	int64_t x96 = -1LL;

	t15 = ((x93*x94)^(x95-x96));

	if (t15 != 32385LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x97 = 39088086416LL;
	volatile uint64_t x98 = 32190207867345179LLU;
	volatile uint64_t x100 = UINT64_MAX;

	t16 = ((x97*x98)^(x99-x100));

	if (t16 != 5338326077549997617LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x105 = UINT8_MAX;
	uint16_t x106 = 62U;
	volatile uint64_t x107 = 26050417LLU;
	static int16_t x108 = INT16_MAX;
	uint64_t t17 = 3396057898LLU;

	t17 = ((x105*x106)^(x107-x108));

	if (t17 != 26002096LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x122 = INT16_MAX;
	int8_t x124 = INT8_MAX;
	volatile uint32_t t18 = 0U;

	t18 = ((x121*x122)^(x123-x124));

	if (t18 != 32275U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x129 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	uint64_t t19 = 793156199LLU;

	t19 = ((x129*x130)^(x131-x132));

	if (t19 != 200559LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x133 = INT8_MAX;

	t20 = ((x133*x134)^(x135-x136));

	if (t20 != 423) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x139 = INT64_MAX;
	volatile int64_t x140 = INT64_MAX;
	volatile int64_t t21 = -2LL;

	t21 = ((x137*x138)^(x139-x140));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x142 = 2;
	volatile int8_t x144 = INT8_MAX;

	t22 = ((x141*x142)^(x143-x144));

	if (t22 != 18444533554654742372LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x154 = UINT16_MAX;
	volatile int64_t x155 = -1LL;
	int64_t t23 = -1LL;

	t23 = ((x153*x154)^(x155-x156));

	if (t23 != -15976744LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x157 = 22204LLU;
	int16_t x158 = INT16_MIN;
	volatile uint32_t x160 = UINT32_MAX;
	uint64_t t24 = 821389LLU;

	t24 = ((x157*x158)^(x159-x160));

	if (t24 != 18446744070142132225LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x161 = 1U;
	static volatile uint64_t x163 = 312029639558753LLU;
	uint64_t t25 = 39550129161LLU;

	t25 = ((x161*x162)^(x163-x164));

	if (t25 != 18446432042453517922LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x169 = 13506211505867040LL;
	int8_t x170 = -1;
	int16_t x171 = INT16_MIN;
	uint8_t x172 = 3U;

	t26 = ((x169*x170)^(x171-x172));

	if (t26 != 13506211505834269LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x173 = -1;
	int32_t x174 = -105782337;
	uint32_t x175 = 35704308U;
	uint32_t t27 = 0U;

	t27 = ((x173*x174)^(x175-x176));

	if (t27 != 74371458U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x177 = -6801062494495592LL;
	uint32_t x179 = UINT32_MAX;
	volatile int16_t x180 = 1;
	volatile int64_t t28 = -2327LL;

	t28 = ((x177*x178)^(x179-x180));

	if (t28 != 6801060277230742LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x181 = -1;
	static int32_t x184 = INT32_MAX;
	volatile uint32_t t29 = 4U;

	t29 = ((x181*x182)^(x183-x184));

	if (t29 != 2145446808U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x185 = -8546219743108LL;
	uint32_t x186 = 1U;
	static volatile uint32_t x187 = 804U;
	int32_t x188 = INT32_MAX;
	int64_t t30 = 17945119322458823LL;

	t30 = ((x185*x186)^(x187-x188));

	if (t30 != -8544072258727LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x194 = 1;
	int32_t x195 = 9265;
	volatile uint16_t x196 = 4U;
	volatile int32_t t31 = 5386952;

	t31 = ((x193*x194)^(x195-x196));

	if (t31 != 9298) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x197 = UINT64_MAX;
	int64_t x198 = INT64_MIN;
	int64_t x199 = 7984441498042236LL;
	int16_t x200 = INT16_MIN;
	uint64_t t32 = 22352578910428LLU;

	t32 = ((x197*x198)^(x199-x200));

	if (t32 != 9231356478352850812LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x201 = -1;
	static int16_t x202 = INT16_MAX;
	int8_t x203 = INT8_MIN;
	int16_t x204 = 15240;

	t33 = ((x201*x202)^(x203-x204));

	if (t33 != 17401) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x205 = 14;
	uint32_t x206 = 11871630U;
	int64_t x207 = -9590468LL;
	int16_t x208 = -1;
	volatile int64_t t34 = -32955LL;

	t34 = ((x205*x206)^(x207-x208));

	if (t34 != -159013639LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x209 = INT8_MIN;
	volatile int8_t x210 = 0;
	int8_t x211 = -6;
	int32_t x212 = INT32_MIN;
	int32_t t35 = -14609;

	t35 = ((x209*x210)^(x211-x212));

	if (t35 != 2147483642) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x217 = 176;
	int16_t x218 = 851;
	int16_t x220 = 80;
	static volatile int32_t t36 = -12;

	t36 = ((x217*x218)^(x219-x220));

	if (t36 != -149853) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x221 = -1;
	static int64_t x223 = 730544430153644LL;
	int8_t x224 = -1;

	t37 = ((x221*x222)^(x223-x224));

	if (t37 != -730544430147056LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x225 = UINT8_MAX;
	volatile uint16_t x227 = UINT16_MAX;
	int32_t x228 = -1;

	t38 = ((x225*x226)^(x227-x228));

	if (t38 != -65791LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x230 = 126U;
	volatile uint16_t x231 = 15663U;
	int8_t x232 = 1;
	volatile uint32_t t39 = 1U;

	t39 = ((x229*x230)^(x231-x232));

	if (t39 != 41168U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x233 = 2249212055890535852LL;
	uint16_t x234 = 3U;
	volatile int8_t x235 = -4;
	int64_t x236 = INT64_MIN;
	volatile int64_t t40 = 170080571769LL;

	t40 = ((x233*x234)^(x235-x236));

	if (t40 != 2475735869183168248LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x237 = 0U;
	uint16_t x239 = 2U;
	volatile uint8_t x240 = UINT8_MAX;

	t41 = ((x237*x238)^(x239-x240));

	if (t41 != 4294967043U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x245 = 198209419LLU;
	volatile uint8_t x246 = 2U;
	int8_t x247 = INT8_MAX;
	uint16_t x248 = 92U;
	static uint64_t t42 = 4649301587LLU;

	t42 = ((x245*x246)^(x247-x248));

	if (t42 != 396418869LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MIN;
	volatile int64_t x252 = INT64_MAX;
	volatile int64_t t43 = 1027501753888932LL;

	t43 = ((x249*x250)^(x251-x252));

	if (t43 != -9223372035742458459LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x253 = INT16_MAX;
	uint32_t x254 = UINT32_MAX;
	volatile uint16_t x255 = 1U;
	uint64_t x256 = 255194954754884LLU;
	uint64_t t44 = 483236014244LLU;

	t44 = ((x253*x254)^(x255-x256));

	if (t44 != 18446488876225664188LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x257 = INT32_MIN;
	volatile uint32_t x259 = 0U;
	volatile int32_t x260 = -281;
	uint64_t t45 = 7635LLU;

	t45 = ((x257*x258)^(x259-x260));

	if (t45 != 2147483929LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x269 = UINT8_MAX;
	static volatile int64_t x270 = -1LL;
	int8_t x271 = 1;
	static int16_t x272 = INT16_MIN;

	t46 = ((x269*x270)^(x271-x272));

	if (t46 != -33024LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x277 = -135536396504LL;
	int16_t x278 = INT16_MIN;
	static volatile uint32_t x279 = 8382054U;
	volatile int32_t x280 = -1;
	volatile int64_t t47 = 12184292LL;

	t47 = ((x277*x278)^(x279-x280));

	if (t47 != 4441256634869351LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x285 = 1U;
	int8_t x286 = 3;
	volatile int64_t x288 = INT64_MAX;
	int64_t t48 = -895883676348865963LL;

	t48 = ((x285*x286)^(x287-x288));

	if (t48 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x289 = -1;
	int8_t x291 = 28;
	int8_t x292 = -1;
	int32_t t49 = -239276;

	t49 = ((x289*x290)^(x291-x292));

	if (t49 != -32) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x301 = UINT8_MAX;
	volatile uint32_t x302 = 965472U;
	volatile uint16_t x303 = UINT16_MAX;
	volatile uint32_t t50 = 4U;

	t50 = ((x301*x302)^(x303-x304));

	if (t50 != 246176595U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x306 = 22U;
	uint32_t x308 = 13156U;
	uint32_t t51 = 468314U;

	t51 = ((x305*x306)^(x307-x308));

	if (t51 != 12962U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x309 = -1;
	volatile int8_t x310 = INT8_MIN;
	static int32_t x312 = INT32_MIN;
	volatile uint32_t t52 = 1130446U;

	t52 = ((x309*x310)^(x311-x312));

	if (t52 != 2147483791U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x313 = INT32_MIN;
	static int64_t x314 = -650693413LL;
	int16_t x315 = 5496;
	uint32_t x316 = UINT32_MAX;
	int64_t t53 = -5985455910138691LL;

	t53 = ((x313*x314)^(x315-x316));

	if (t53 != 1397353464278816121LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x317 = -2080958LL;
	uint8_t x318 = UINT8_MAX;

	t54 = ((x317*x318)^(x319-x320));

	if (t54 != 530612927LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x321 = INT16_MIN;
	int8_t x323 = -1;
	int16_t x324 = -1;
	int32_t t55 = -2261122;

	t55 = ((x321*x322)^(x323-x324));

	if (t55 != 1073741824) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x329 = 607564002882LLU;
	static volatile int16_t x330 = INT16_MIN;
	static uint32_t x331 = 17U;
	int32_t x332 = INT32_MIN;
	uint64_t t56 = 29686LLU;

	t56 = ((x329*x330)^(x331-x332));

	if (t56 != 18426835414315630609LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x333 = 36;
	static volatile int8_t x334 = INT8_MIN;
	static uint16_t x335 = 23243U;
	uint8_t x336 = 62U;

	t57 = ((x333*x334)^(x335-x336));

	if (t57 != -19315) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x337 = 10U;
	int32_t x338 = 76;
	int32_t x339 = -1;
	volatile int32_t t58 = 1707713;

	t58 = ((x337*x338)^(x339-x340));

	if (t58 != 32007) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x341 = -1LL;
	int16_t x342 = INT16_MIN;
	static int8_t x343 = INT8_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	int64_t t59 = -1LL;

	t59 = ((x341*x342)^(x343-x344));

	if (t59 != 4294934401LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x349 = -7;
	static int16_t x350 = 10665;
	static volatile uint8_t x351 = 6U;
	int16_t x352 = 14022;
	volatile int32_t t60 = 14231;

	t60 = ((x349*x350)^(x351-x352));

	if (t60 != 70945) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x358 = 241U;
	static int64_t x360 = INT64_MIN;
	uint64_t t61 = 63626816918LLU;

	t61 = ((x357*x358)^(x359-x360));

	if (t61 != 9223364442140962221LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x361 = INT16_MAX;
	static int16_t x362 = INT16_MIN;
	volatile uint32_t x363 = 819U;
	static volatile int64_t x364 = -1LL;
	int64_t t62 = -74401LL;

	t62 = ((x361*x362)^(x363-x364));

	if (t62 != -1073708236LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x371 = -30;
	volatile int8_t x372 = -2;

	t63 = ((x369*x370)^(x371-x372));

	if (t63 != 941156) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x381 = 31645;
	static int32_t x382 = -1;
	volatile uint32_t x383 = 764U;
	volatile uint32_t t64 = 570657U;

	t64 = ((x381*x382)^(x383-x384));

	if (t64 != 4294936137U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x385 = 9;
	static volatile int16_t x386 = -48;
	static int8_t x387 = 21;
	volatile uint32_t x388 = 378U;
	volatile uint32_t t65 = 60028U;

	t65 = ((x385*x386)^(x387-x388));

	if (t65 != 203U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x389 = INT8_MIN;
	static int32_t x391 = -5369825;
	int32_t x392 = INT32_MIN;
	volatile int32_t t66 = 171611;

	t66 = ((x389*x390)^(x391-x392));

	if (t66 != -2141462369) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x393 = 24755702U;
	int64_t x395 = -2864LL;
	int16_t x396 = 12020;

	t67 = ((x393*x394)^(x395-x396));

	if (t67 != -2450803714LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x398 = -1LL;
	volatile uint64_t x399 = 509530LLU;
	int16_t x400 = INT16_MIN;
	static volatile uint64_t t68 = 33622961486LLU;

	t68 = ((x397*x398)^(x399-x400));

	if (t68 != 542299LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x402 = 0LLU;
	int16_t x403 = -27;
	int64_t x404 = INT64_MIN;
	uint64_t t69 = 468601202LLU;

	t69 = ((x401*x402)^(x403-x404));

	if (t69 != 9223372036854775781LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x409 = -1;
	int32_t x410 = -14;
	static int32_t x412 = -1;

	t70 = ((x409*x410)^(x411-x412));

	if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x413 = INT32_MIN;
	int16_t x414 = 1;
	uint64_t x415 = 23124LLU;
	int32_t x416 = INT32_MAX;
	uint64_t t71 = 76557052739LLU;

	t71 = ((x413*x414)^(x415-x416));

	if (t71 != 23125LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x418 = INT8_MIN;
	int8_t x419 = -1;
	static int32_t x420 = 474;
	volatile int32_t t72 = -3;

	t72 = ((x417*x418)^(x419-x420));

	if (t72 != -16859) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x421 = 11U;
	int8_t x422 = INT8_MIN;
	int64_t x423 = INT64_MAX;
	volatile int64_t t73 = -174169737045318806LL;

	t73 = ((x421*x422)^(x423-x424));

	if (t73 != -9223372036854774401LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x425 = 15381;
	static int16_t x426 = -5;
	static int32_t x427 = -38641004;
	int8_t x428 = 0;
	int32_t t74 = -1050939975;

	t74 = ((x425*x426)^(x427-x428));

	if (t74 != 38580483) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x429 = -1;
	volatile uint64_t x430 = UINT64_MAX;
	int8_t x431 = -1;
	int16_t x432 = INT16_MIN;
	uint64_t t75 = 2LLU;

	t75 = ((x429*x430)^(x431-x432));

	if (t75 != 32766LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x433 = INT32_MIN;
	uint64_t x434 = UINT64_MAX;
	static int8_t x435 = -1;
	volatile uint64_t x436 = 3LLU;
	volatile uint64_t t76 = 14304008900784LLU;

	t76 = ((x433*x434)^(x435-x436));

	if (t76 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x437 = -1LL;
	uint32_t x438 = 181922U;
	int8_t x439 = INT8_MIN;
	static uint64_t x440 = 38863702775772545LLU;
	volatile uint64_t t77 = 15701806033876041LLU;

	t77 = ((x437*x438)^(x439-x440));

	if (t77 != 38863702775689377LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x446 = 953459711U;
	volatile uint32_t x447 = 48U;
	int32_t x448 = -1;
	static volatile uint32_t t78 = 522447125U;

	t78 = ((x445*x446)^(x447-x448));

	if (t78 != 422239280U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x449 = 282U;
	int16_t x450 = 0;
	int64_t x451 = -1LL;
	uint32_t x452 = 578233U;
	int64_t t79 = -5123331570LL;

	t79 = ((x449*x450)^(x451-x452));

	if (t79 != -578234LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x453 = INT16_MAX;
	static uint16_t x455 = 16159U;
	uint8_t x456 = 3U;

	t80 = ((x453*x454)^(x455-x456));

	if (t80 != 508140) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x457 = -18010084303482002LL;
	volatile int64_t t81 = 39LL;

	t81 = ((x457*x458)^(x459-x460));

	if (t81 != 18010084303482002LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x461 = INT8_MAX;
	int16_t x462 = INT16_MIN;
	static int32_t x463 = -1;

	t82 = ((x461*x462)^(x463-x464));

	if (t82 != 4161535) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x465 = -924;
	uint16_t x466 = 21180U;
	uint32_t x467 = 470U;
	volatile uint64_t x468 = 444535943605523483LLU;
	uint64_t t83 = 412LLU;

	t83 = ((x465*x466)^(x467-x468));

	if (t83 != 444535943625084107LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x469 = 101075U;
	uint8_t x470 = UINT8_MAX;
	uint64_t x471 = 301644338761LLU;
	uint32_t x472 = UINT32_MAX;
	volatile uint64_t t84 = 161279865LLU;

	t84 = ((x469*x470)^(x471-x472));

	if (t84 != 297341427303LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x473 = 640U;
	volatile int16_t x474 = 0;
	uint8_t x475 = 0U;
	volatile int16_t x476 = INT16_MIN;
	int32_t t85 = -883462891;

	t85 = ((x473*x474)^(x475-x476));

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x481 = -1LL;
	static uint16_t x482 = 79U;
	uint8_t x483 = UINT8_MAX;
	volatile int8_t x484 = INT8_MIN;
	volatile int64_t t86 = -1052043555052557LL;

	t86 = ((x481*x482)^(x483-x484));

	if (t86 != -306LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x493 = 104U;
	static int8_t x494 = INT8_MIN;
	uint64_t x495 = UINT64_MAX;
	static volatile int32_t x496 = -1;
	uint64_t t87 = 1005532479119609115LLU;

	t87 = ((x493*x494)^(x495-x496));

	if (t87 != 18446744073709538304LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x509 = INT64_MIN;
	uint64_t x510 = 48881892LLU;
	uint16_t x511 = 3303U;
	static uint32_t x512 = 2003284U;
	uint64_t t88 = 308428887372706156LLU;

	t88 = ((x509*x510)^(x511-x512));

	if (t88 != 4292967315LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x517 = 0U;
	int32_t x518 = -1;
	static uint32_t x519 = 0U;
	int64_t x520 = INT64_MAX;
	static volatile int64_t t89 = -19459945LL;

	t89 = ((x517*x518)^(x519-x520));

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x521 = 6458;
	static volatile int16_t x522 = -13;
	static int8_t x524 = 0;

	t90 = ((x521*x522)^(x523-x524));

	if (t90 != 83953LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x525 = 1;
	int32_t x526 = INT32_MAX;
	int64_t x527 = -90348LL;
	volatile uint8_t x528 = 5U;
	static volatile int64_t t91 = -139620552718482LL;

	t91 = ((x525*x526)^(x527-x528));

	if (t91 != -2147393296LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x549 = 394U;
	volatile int16_t x551 = INT16_MIN;

	t92 = ((x549*x550)^(x551-x552));

	if (t92 != 4282090792U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x553 = 933982491U;
	int8_t x556 = 1;
	uint32_t t93 = 130839U;

	t93 = ((x553*x554)^(x555-x556));

	if (t93 != 933957349U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x561 = 1999914967001302LLU;
	uint16_t x562 = 13U;
	uint8_t x563 = 14U;
	uint64_t x564 = 5477306435568271442LLU;
	volatile uint64_t t94 = 112644175LLU;

	t94 = ((x561*x562)^(x563-x564));

	if (t94 != 12943608156474879330LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x565 = INT16_MAX;
	int8_t x566 = INT8_MAX;
	int8_t x567 = 1;
	static int32_t x568 = 4;
	int32_t t95 = 4655802;

	t95 = ((x565*x566)^(x567-x568));

	if (t95 != -4161412) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x569 = -3;
	int8_t x570 = INT8_MIN;
	static int64_t x571 = -1672LL;
	int32_t x572 = INT32_MIN;
	int64_t t96 = -30379675714LL;

	t96 = ((x569*x570)^(x571-x572));

	if (t96 != 2147481848LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x577 = 5392293U;
	int16_t x579 = INT16_MAX;
	int16_t x580 = -1;

	t97 = ((x577*x578)^(x579-x580));

	if (t97 != 167128315U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x585 = 340749LLU;
	static uint32_t x586 = 3645U;
	uint32_t x587 = 70034407U;
	volatile int8_t x588 = INT8_MAX;

	t98 = ((x585*x586)^(x587-x588));

	if (t98 != 1311458161LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x589 = UINT8_MAX;
	volatile int16_t x590 = -1;
	int32_t x591 = INT32_MIN;
	static int64_t x592 = -1LL;

	t99 = ((x589*x590)^(x591-x592));

	if (t99 != 2147483392LL) { NG(); } else { ; }
	
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

