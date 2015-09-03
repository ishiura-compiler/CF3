#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = INT16_MAX;
volatile uint64_t x6 = 1859496850520439LLU;
volatile uint64_t x9 = 185998828241278272LLU;
int32_t x17 = INT32_MAX;
volatile uint64_t x18 = UINT64_MAX;
volatile int8_t x23 = -40;
int32_t t4 = -529592753;
uint32_t x35 = 259067616U;
int8_t x49 = -1;
uint64_t x51 = 389955547658753LLU;
uint64_t x52 = UINT64_MAX;
int32_t x67 = INT32_MAX;
static int64_t t12 = 12726LL;
static int64_t x83 = 11LL;
uint16_t x88 = 28488U;
uint8_t x93 = 61U;
volatile int64_t t15 = -295751231718LL;
uint8_t x101 = 3U;
int64_t x102 = 6325819494711034LL;
static volatile int32_t t18 = -1;
uint64_t x151 = 2237639125753LLU;
int8_t x156 = 1;
volatile uint8_t x160 = UINT8_MAX;
int8_t x191 = 3;
int8_t x192 = 1;
int32_t x199 = INT32_MIN;
uint64_t x203 = 222063883LLU;
uint32_t x204 = 150042032U;
uint8_t x207 = 26U;
volatile int8_t x208 = -1;
int16_t x217 = INT16_MIN;
uint16_t x219 = 5951U;
static uint64_t t29 = 53601428LLU;
uint32_t x228 = 6869989U;
int8_t x238 = -1;
volatile int64_t x240 = INT64_MAX;
uint64_t t34 = 183333880998LLU;
static uint8_t x256 = UINT8_MAX;
static uint64_t x257 = 137092471LLU;
int16_t x270 = INT16_MIN;
int32_t t40 = 4;
uint64_t x278 = UINT64_MAX;
static int64_t x297 = -25561158886670LL;
static volatile int16_t x303 = -1;
uint64_t x308 = 1308584547LLU;
int64_t t47 = 31913042255520594LL;
uint32_t x322 = 4080U;
uint32_t x331 = 82787444U;
int8_t x340 = 1;
volatile int16_t x346 = -246;
int64_t x347 = INT64_MIN;
int32_t x349 = 2071032;
uint32_t t55 = 255118539U;
static int32_t x354 = 1;
int32_t x361 = -1;
int64_t x363 = 135086519LL;
int64_t x365 = INT64_MIN;
int16_t x367 = 2;
static volatile int64_t t59 = -235LL;
int8_t x371 = INT8_MIN;
static int64_t x374 = INT64_MIN;
int32_t x375 = INT32_MIN;
uint32_t x379 = 9U;
volatile int32_t x380 = -1;
static uint64_t x396 = 3109LLU;
int16_t x397 = INT16_MAX;
int16_t x398 = INT16_MIN;
uint16_t x399 = UINT16_MAX;
uint64_t x401 = 378862700722825144LLU;
int64_t x403 = INT64_MIN;
uint64_t t67 = 7583469LLU;
volatile uint64_t t68 = 1LLU;
uint32_t x413 = 987259779U;
int16_t x414 = 1881;
int16_t x420 = INT16_MAX;
static int8_t x430 = INT8_MAX;
uint16_t x443 = UINT16_MAX;
int32_t t75 = -80435;
uint64_t x447 = UINT64_MAX;
static int16_t x451 = INT16_MIN;
int16_t x456 = -1;
volatile uint16_t x459 = 1009U;
static int16_t x460 = INT16_MIN;
int16_t x465 = INT16_MAX;
uint64_t x466 = 428449708LLU;
static int32_t x468 = 444;
uint16_t x469 = 0U;
volatile uint64_t t81 = 11997152LLU;
int8_t x474 = INT8_MIN;
volatile uint16_t x475 = UINT16_MAX;
int64_t x480 = 476138019501LL;
int64_t x490 = -1LL;
uint8_t x491 = UINT8_MAX;
int32_t x493 = INT32_MAX;
volatile uint16_t x495 = 18084U;
static int32_t x498 = -1;
static int64_t x499 = -1LL;
uint16_t x501 = UINT16_MAX;
uint64_t x503 = 12135LLU;
uint32_t x504 = UINT32_MAX;
volatile int16_t x518 = INT16_MIN;
volatile uint16_t x521 = 127U;
volatile int32_t x526 = -1;
static int8_t x540 = INT8_MIN;
volatile int32_t x543 = INT32_MIN;
volatile uint8_t x544 = UINT8_MAX;
int16_t x554 = 1;
int8_t x563 = INT8_MAX;
int64_t x565 = INT64_MIN;
volatile uint16_t x568 = UINT16_MAX;


void f0(void) {
	int16_t x1 = 1;
	volatile int16_t x2 = INT16_MAX;
	int32_t x4 = 74648;
	int32_t t0 = 75;

	t0 = (x1|((x2^x3)*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x7 = 0;
	int64_t x8 = INT64_MAX;
	static volatile uint64_t t1 = 622036LLU;

	t1 = (x5|((x6^x7)*x8));

	if (t1 != 18446744073709520521LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MIN;
	volatile uint64_t x11 = 8LLU;
	volatile int8_t x12 = INT8_MAX;
	volatile uint64_t t2 = 261825216520LLU;

	t2 = (x9|((x10^x11)*x12));

	if (t2 != 9409370865096054776LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x19 = UINT8_MAX;
	uint32_t x20 = 32U;
	uint64_t t3 = UINT64_MAX;

	t3 = (x17|((x18^x19)*x20));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 436U;
	uint16_t x22 = 345U;
	uint16_t x24 = 439U;

	t4 = (x21|((x22^x23)*x24));

	if (t4 != -168009) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MAX;
	volatile int32_t x30 = -1;
	int32_t x31 = -1;
	int32_t x32 = -1;
	volatile int32_t t5 = INT32_MAX;

	t5 = (x29|((x30^x31)*x32));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = INT8_MAX;
	volatile uint64_t x34 = 1125955765051571LLU;
	static int64_t x36 = 270387448590687LL;
	volatile uint64_t t6 = 373214788718LLU;

	t6 = (x33|((x34^x35)*x36));

	if (t6 != 10184399443714806783LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x41 = 110U;
	int64_t x42 = -1LL;
	static int8_t x43 = INT8_MAX;
	uint32_t x44 = 3U;
	static volatile int64_t t7 = 4053206581LL;

	t7 = (x41|((x42^x43)*x44));

	if (t7 != -274LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x50 = -11719263LL;
	uint64_t t8 = UINT64_MAX;

	t8 = (x49|((x50^x51)*x52));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x57 = -1942902976292LL;
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = 357;
	static int8_t x60 = 0;
	volatile uint64_t t9 = 204452837526872LLU;

	t9 = (x57|((x58^x59)*x60));

	if (t9 != 18446742130806575324LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = INT64_MAX;
	uint8_t x62 = 120U;
	uint64_t x63 = 132065623880LLU;
	uint64_t x64 = 0LLU;
	volatile uint64_t t10 = 256891LLU;

	t10 = (x61|((x62^x63)*x64));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x65 = INT8_MAX;
	static int32_t x66 = INT32_MIN;
	int8_t x68 = INT8_MAX;
	volatile int32_t t11 = -267073363;

	t11 = (x65|((x66^x67)*x68));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x77 = INT32_MIN;
	static int64_t x78 = -18LL;
	int64_t x79 = -1LL;
	volatile int32_t x80 = INT32_MIN;

	t12 = (x77|((x78^x79)*x80));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x81 = -1;
	int8_t x82 = INT8_MAX;
	static uint8_t x84 = UINT8_MAX;
	int64_t t13 = 3801091409188171LL;

	t13 = (x81|((x82^x83)*x84));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = INT64_MAX;
	uint16_t x86 = UINT16_MAX;
	static volatile int16_t x87 = -1;
	volatile int64_t t14 = 425652880649059676LL;

	t14 = (x85|((x86^x87)*x88));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x94 = 1748493112543085LL;
	uint32_t x95 = 127381U;
	uint8_t x96 = 9U;

	t15 = (x93|((x94^x95)*x96));

	if (t15 != 15736438012260029LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x103 = 4432U;
	int32_t x104 = 163;
	static int64_t t16 = 812LL;

	t16 = (x101|((x102^x103)*x104));

	if (t16 != 1031108577637259583LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x109 = 0U;
	uint16_t x110 = UINT16_MAX;
	volatile uint8_t x111 = UINT8_MAX;
	static volatile int16_t x112 = -1;
	volatile int32_t t17 = -12;

	t17 = (x109|((x110^x111)*x112));

	if (t17 != -65280) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	volatile int8_t x124 = -1;

	t18 = (x121|((x122^x123)*x124));

	if (t18 != -2147450880) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x149 = INT32_MIN;
	volatile int16_t x150 = INT16_MIN;
	int16_t x152 = INT16_MIN;
	uint64_t t19 = 369LLU;

	t19 = (x149|((x150^x151)*x152));

	if (t19 != 18446744071738458112LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x153 = INT8_MIN;
	int64_t x154 = -29128218LL;
	int32_t x155 = INT32_MIN;
	int64_t t20 = -918594226623LL;

	t20 = (x153|((x154^x155)*x156));

	if (t20 != -26LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x157 = 4;
	int32_t x158 = -38492;
	int16_t x159 = -1;
	int32_t t21 = 15184;

	t21 = (x157|((x158^x159)*x160));

	if (t21 != 9815205) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x161 = 4LL;
	static int8_t x162 = 25;
	int16_t x163 = 4037;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t22 = 10805065658708171LLU;

	t22 = (x161|((x162^x163)*x164));

	if (t22 != 18446744073709547556LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x165 = 2U;
	uint32_t x166 = 8747444U;
	volatile int32_t x167 = -65019;
	static uint16_t x168 = 1U;
	uint32_t t23 = 7580494U;

	t23 = (x165|((x166^x167)*x168));

	if (t23 != 4286217139U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x173 = 2034;
	static volatile int8_t x174 = -1;
	volatile int8_t x175 = -1;
	int8_t x176 = -1;
	int32_t t24 = -427060469;

	t24 = (x173|((x174^x175)*x176));

	if (t24 != 2034) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x189 = 883U;
	static volatile int16_t x190 = INT16_MIN;
	volatile uint32_t t25 = 1224604675U;

	t25 = (x189|((x190^x191)*x192));

	if (t25 != 4294935411U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x197 = INT64_MIN;
	volatile uint64_t x198 = 35158723033623LLU;
	static int32_t x200 = INT32_MIN;
	static uint64_t t26 = 23009659277528LLU;

	t26 = (x197|((x198^x199)*x200));

	if (t26 != 13575752482130231296LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x201 = INT16_MIN;
	volatile uint32_t x202 = 2269917U;
	uint64_t t27 = 721662932386055LLU;

	t27 = (x201|((x202^x203)*x204));

	if (t27 != 18446744073709531424LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x205 = INT16_MIN;
	volatile int16_t x206 = INT16_MAX;
	volatile int32_t t28 = 2;

	t28 = (x205|((x206^x207)*x208));

	if (t28 != -32741) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x218 = 3U;
	volatile uint64_t x220 = UINT64_MAX;

	t29 = (x217|((x218^x219)*x220));

	if (t29 != 18446744073709545668LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x221 = 4698590516927440LL;
	uint64_t x222 = 4794786631110LLU;
	int64_t x223 = INT64_MAX;
	static volatile uint64_t x224 = UINT64_MAX;
	static uint64_t t30 = 520380211LLU;

	t30 = (x221|((x222^x223)*x224));

	if (t30 != 9228075059862429655LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x225 = INT16_MIN;
	volatile int64_t x226 = 1351818LL;
	volatile int32_t x227 = -1;
	volatile int64_t t31 = -1055808826901LL;

	t31 = (x225|((x226^x227)*x228));

	if (t31 != -11607LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x229 = -170;
	uint8_t x230 = 57U;
	int64_t x231 = INT64_MAX;
	int64_t x232 = -1LL;
	volatile int64_t t32 = 128029974407LL;

	t32 = (x229|((x230^x231)*x232));

	if (t32 != -130LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x237 = -40581924383685LL;
	static int16_t x239 = -1;
	int64_t t33 = 23489247676LL;

	t33 = (x237|((x238^x239)*x240));

	if (t33 != -40581924383685LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x245 = 179472054384906LLU;
	int16_t x246 = INT16_MAX;
	uint64_t x247 = 3LLU;
	uint8_t x248 = 59U;

	t34 = (x245|((x246^x247)*x248));

	if (t34 != 179472055500574LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x249 = INT64_MIN;
	int8_t x250 = 0;
	uint32_t x251 = 69U;
	int8_t x252 = INT8_MIN;
	static int64_t t35 = 781274534LL;

	t35 = (x249|((x250^x251)*x252));

	if (t35 != -9223372032559817344LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x253 = INT16_MIN;
	static volatile int64_t x254 = -112242457239515LL;
	uint16_t x255 = 30007U;
	volatile int64_t t36 = -401LL;

	t36 = (x253|((x254^x255)*x256));

	if (t36 != -17170LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x258 = 486LL;
	volatile uint16_t x259 = UINT16_MAX;
	int32_t x260 = 109337936;
	static uint64_t t37 = 72LLU;

	t37 = (x257|((x258^x259)*x260));

	if (t37 != 7112460336631LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	static volatile int32_t x263 = INT32_MIN;
	static int64_t x264 = -1LL;
	int64_t t38 = -1977350036958582LL;

	t38 = (x261|((x262^x263)*x264));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x265 = 28U;
	static uint32_t x266 = 17U;
	uint8_t x267 = 7U;
	static int16_t x268 = INT16_MAX;
	uint32_t t39 = 33245433U;

	t39 = (x265|((x266^x267)*x268));

	if (t39 != 720894U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x269 = 2U;
	int8_t x271 = INT8_MIN;
	volatile int16_t x272 = 91;

	t40 = (x269|((x270^x271)*x272));

	if (t40 != 2970242) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MIN;
	uint64_t t41 = 232564LLU;

	t41 = (x277|((x278^x279)*x280));

	if (t41 != 255LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x289 = INT8_MAX;
	int64_t x290 = 254914224552LL;
	uint16_t x291 = 436U;
	volatile int16_t x292 = -1;
	volatile int64_t t42 = -22LL;

	t42 = (x289|((x290^x291)*x292));

	if (t42 != -254914224129LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x298 = INT32_MAX;
	volatile uint32_t x299 = UINT32_MAX;
	int32_t x300 = -26;
	int64_t t43 = -1309878362LL;

	t43 = (x297|((x298^x299)*x300));

	if (t43 != -25561158886670LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x301 = 25;
	uint32_t x302 = UINT32_MAX;
	int16_t x304 = INT16_MIN;
	uint32_t t44 = 92624529U;

	t44 = (x301|((x302^x303)*x304));

	if (t44 != 25U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MIN;
	volatile int8_t x307 = INT8_MIN;
	volatile uint64_t t45 = 2522228LLU;

	t45 = (x305|((x306^x307)*x308));

	if (t45 != 9223371869355966463LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x309 = INT8_MIN;
	volatile int64_t x310 = -1LL;
	int16_t x311 = INT16_MAX;
	uint8_t x312 = 1U;
	int64_t t46 = 213840LL;

	t46 = (x309|((x310^x311)*x312));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x313 = -1;
	uint32_t x314 = 1438967502U;
	int64_t x315 = -1LL;
	static uint32_t x316 = 1412936U;

	t47 = (x313|((x314^x315)*x316));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x317 = 3U;
	int32_t x318 = -31;
	static int16_t x319 = -1;
	volatile uint32_t x320 = 68879U;
	uint32_t t48 = 2058643046U;

	t48 = (x317|((x318^x319)*x320));

	if (t48 != 2066371U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x321 = INT64_MIN;
	int8_t x323 = -1;
	volatile int32_t x324 = -30610641;
	int64_t t49 = 425584744924722711LL;

	t49 = (x321|((x322^x323)*x324));

	if (t49 != -9223372036486801471LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x325 = -1;
	int16_t x326 = INT16_MIN;
	static int8_t x327 = INT8_MIN;
	uint8_t x328 = 48U;
	volatile int32_t t50 = -65087;

	t50 = (x325|((x326^x327)*x328));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x329 = -10204890;
	int32_t x330 = -304675;
	static uint32_t x332 = 154882223U;
	uint32_t t51 = 691022948U;

	t51 = (x329|((x330^x331)*x332));

	if (t51 != 4293742503U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x337 = INT32_MIN;
	volatile int32_t x338 = INT32_MIN;
	static int16_t x339 = 254;
	int32_t t52 = -1;

	t52 = (x337|((x338^x339)*x340));

	if (t52 != -2147483394) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x341 = 3U;
	int16_t x342 = 253;
	uint32_t x343 = 9434879U;
	uint32_t x344 = 185946U;
	volatile uint32_t t53 = 22U;

	t53 = (x341|((x342^x343)*x344));

	if (t53 != 1984309431U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x345 = 512452018U;
	uint64_t x348 = UINT64_MAX;
	uint64_t t54 = 23112564LLU;

	t54 = (x345|((x346^x347)*x348));

	if (t54 != 9223372037367227894LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x350 = 2508577U;
	volatile uint8_t x351 = UINT8_MAX;
	int8_t x352 = -1;

	t55 = (x349|((x350^x351)*x352));

	if (t55 != 4292852218U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x353 = -143;
	uint16_t x355 = 13959U;
	static volatile uint8_t x356 = UINT8_MAX;
	volatile int32_t t56 = -956;

	t56 = (x353|((x354^x355)*x356));

	if (t56 != -133) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x357 = 10LLU;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = UINT8_MAX;
	int64_t x360 = -1002044808LL;
	volatile uint64_t t57 = 242592LLU;

	t57 = (x357|((x358^x359)*x360));

	if (t57 != 2151874584221873546LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x362 = 17;
	int32_t x364 = INT32_MAX;
	int64_t t58 = 59862700477LL;

	t58 = (x361|((x362^x363)*x364));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x366 = INT8_MIN;
	volatile int16_t x368 = -1;

	t59 = (x365|((x366^x367)*x368));

	if (t59 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x369 = INT8_MAX;
	int8_t x370 = INT8_MIN;
	uint16_t x372 = 2992U;
	int32_t t60 = 21388;

	t60 = (x369|((x370^x371)*x372));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x373 = 8U;
	uint64_t x376 = 8677904076505LLU;
	static uint64_t t61 = 119304LLU;

	t61 = (x373|((x374^x375)*x376));

	if (t61 != 4777783276473417736LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x377 = -4;
	uint64_t x378 = 566496265997510587LLU;
	volatile uint64_t t62 = 1229317636539LLU;

	t62 = (x377|((x378^x379)*x380));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x381 = -1;
	static int8_t x382 = INT8_MIN;
	static int32_t x383 = INT32_MAX;
	uint64_t x384 = 114373LLU;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x381|((x382^x383)*x384));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MIN;
	uint32_t x391 = 20404U;
	int32_t x392 = -1;
	static uint32_t t64 = 46578800U;

	t64 = (x389|((x390^x391)*x392));

	if (t64 != 4294946892U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x393 = 15961;
	static volatile int64_t x394 = INT64_MAX;
	static volatile int8_t x395 = INT8_MAX;
	static uint64_t t65 = 879LLU;

	t65 = (x393|((x394^x395)*x396));

	if (t65 != 9223372036854382553LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x400 = 13U;
	volatile int32_t t66 = -5;

	t66 = (x397|((x398^x399)*x400));

	if (t66 != -425985) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x402 = INT64_MIN;
	static int16_t x404 = -1;

	t67 = (x401|((x402^x403)*x404));

	if (t67 != 378862700722825144LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x405 = 2548U;
	int64_t x406 = -1LL;
	volatile uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 0U;

	t68 = (x405|((x406^x407)*x408));

	if (t68 != 2548LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x409 = -3628008537271940LL;
	volatile uint8_t x410 = 3U;
	int8_t x411 = INT8_MAX;
	uint32_t x412 = 971187U;
	int64_t t69 = 6LL;

	t69 = (x409|((x410^x411)*x412));

	if (t69 != -3628008536681476LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x415 = 68U;
	int16_t x416 = 11783;
	uint32_t t70 = 11361U;

	t70 = (x413|((x414^x415)*x416));

	if (t70 != 1004496843U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x417 = 407453LLU;
	static volatile int8_t x418 = -1;
	static uint64_t x419 = 1045129361860612816LLU;
	uint64_t t71 = 3847969917799246816LLU;

	t71 = (x417|((x418^x419)*x420));

	if (t71 != 9849944791937185757LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x429 = INT8_MAX;
	uint64_t x431 = 4051651411363208371LLU;
	static int64_t x432 = INT64_MIN;
	uint64_t t72 = 1LLU;

	t72 = (x429|((x430^x431)*x432));

	if (t72 != 127LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x433 = 323649U;
	int16_t x434 = INT16_MAX;
	int8_t x435 = INT8_MAX;
	int32_t x436 = 29;
	static uint32_t t73 = 1046536326U;

	t73 = (x433|((x434^x435)*x436));

	if (t73 != 979393U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x437 = UINT32_MAX;
	int16_t x438 = -1;
	volatile int16_t x439 = INT16_MIN;
	static int16_t x440 = INT16_MIN;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (x437|((x438^x439)*x440));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x441 = INT8_MAX;
	volatile uint16_t x442 = UINT16_MAX;
	volatile int8_t x444 = INT8_MIN;

	t75 = (x441|((x442^x443)*x444));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x445 = -5291573;
	static int32_t x446 = INT32_MIN;
	static int32_t x448 = -326886;
	volatile uint64_t t76 = 5823550795732158LLU;

	t76 = (x445|((x446^x447)*x448));

	if (t76 != 18446744073704308207LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x449 = -1;
	uint32_t x450 = UINT32_MAX;
	static int64_t x452 = 19183510LL;
	volatile int64_t t77 = 71313853231601728LL;

	t77 = (x449|((x450^x451)*x452));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x453 = INT8_MIN;
	volatile int32_t x454 = INT32_MIN;
	uint16_t x455 = UINT16_MAX;
	volatile int32_t t78 = -8170;

	t78 = (x453|((x454^x455)*x456));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x457 = 8;
	int16_t x458 = INT16_MIN;
	int32_t t79 = -11325956;

	t79 = (x457|((x458^x459)*x460));

	if (t79 != 1040678920) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x467 = 2;
	volatile uint64_t t80 = 9LLU;

	t80 = (x465|((x466^x467)*x468));

	if (t80 != 190231674879LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x470 = INT16_MIN;
	int64_t x471 = INT64_MIN;
	static volatile uint64_t x472 = 5861171LLU;

	t81 = (x469|((x470^x471)*x472));

	if (t81 != 9223371844795924480LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x473 = INT8_MIN;
	static int8_t x476 = INT8_MAX;
	volatile int32_t t82 = -54;

	t82 = (x473|((x474^x475)*x476));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x477 = INT32_MIN;
	volatile uint16_t x478 = UINT16_MAX;
	int32_t x479 = 2864;
	int64_t t83 = -216076805673LL;

	t83 = (x477|((x478^x479)*x480));

	if (t83 != -1825507869LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x485 = 14U;
	static volatile int16_t x486 = 166;
	uint16_t x487 = UINT16_MAX;
	uint8_t x488 = 25U;
	int32_t t84 = -1017852;

	t84 = (x485|((x486^x487)*x488));

	if (t84 != 1634239) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x489 = UINT32_MAX;
	int8_t x492 = -1;
	int64_t t85 = -280134814797937140LL;

	t85 = (x489|((x490^x491)*x492));

	if (t85 != 4294967295LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x494 = 3236U;
	int16_t x496 = INT16_MIN;
	static int32_t t86 = 1734363;

	t86 = (x493|((x494^x495)*x496));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x497 = INT32_MAX;
	int8_t x500 = 14;
	int64_t t87 = 1320411LL;

	t87 = (x497|((x498^x499)*x500));

	if (t87 != 2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x502 = 2U;
	volatile uint64_t t88 = 0LLU;

	t88 = (x501|((x502^x503)*x504));

	if (t88 != 52110838202367LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x517 = 428U;
	uint8_t x519 = 28U;
	volatile int8_t x520 = 0;
	volatile int32_t t89 = 1405;

	t89 = (x517|((x518^x519)*x520));

	if (t89 != 428) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x522 = INT32_MAX;
	volatile int8_t x523 = 61;
	volatile int32_t x524 = -1;
	volatile int32_t t90 = 25;

	t90 = (x521|((x522^x523)*x524));

	if (t90 != -2147483521) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x525 = -1;
	uint8_t x527 = 63U;
	uint64_t x528 = 228577LLU;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x525|((x526^x527)*x528));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x537 = -1;
	static uint16_t x538 = 27356U;
	volatile int32_t x539 = 21;
	int32_t t92 = -1583;

	t92 = (x537|((x538^x539)*x540));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x541 = INT32_MIN;
	volatile uint64_t x542 = 161826075950LLU;
	uint64_t t93 = 7496815573889460LLU;

	t93 = (x541|((x542^x543)*x544));

	if (t93 != 18446744073313138898LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x549 = INT64_MIN;
	int32_t x550 = -1;
	volatile int8_t x551 = INT8_MIN;
	volatile int16_t x552 = INT16_MAX;
	int64_t t94 = -7006038786020026LL;

	t94 = (x549|((x550^x551)*x552));

	if (t94 != -9223372036850614399LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x553 = 9U;
	int8_t x555 = 1;
	uint8_t x556 = 30U;
	int32_t t95 = 14565;

	t95 = (x553|((x554^x555)*x556));

	if (t95 != 9) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x557 = UINT64_MAX;
	int8_t x558 = INT8_MAX;
	uint32_t x559 = UINT32_MAX;
	int8_t x560 = INT8_MIN;
	uint64_t t96 = UINT64_MAX;

	t96 = (x557|((x558^x559)*x560));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x561 = 13047529356LLU;
	int8_t x562 = INT8_MIN;
	int64_t x564 = 67969846092LL;
	volatile uint64_t t97 = 29802432LLU;

	t97 = (x561|((x562^x563)*x564));

	if (t97 != 18446744018642501564LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x566 = INT8_MAX;
	static int8_t x567 = -1;
	static volatile int64_t t98 = 99643778550299288LL;

	t98 = (x565|((x566^x567)*x568));

	if (t98 != -8388480LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x569 = INT64_MIN;
	int32_t x570 = 13;
	int32_t x571 = -4914;
	uint64_t x572 = UINT64_MAX;
	volatile uint64_t t99 = 1627502166021658LLU;

	t99 = (x569|((x570^x571)*x572));

	if (t99 != 9223372036854780733LLU) { NG(); } else { ; }
	
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

