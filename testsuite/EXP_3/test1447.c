#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MIN;
volatile int32_t t1 = -23;
uint32_t x17 = UINT32_MAX;
static uint64_t x24 = UINT64_MAX;
static int32_t t3 = 1;
static uint16_t x25 = 1U;
uint64_t x26 = UINT64_MAX;
static int64_t x45 = INT64_MAX;
int64_t x47 = -1LL;
int32_t t6 = -967350656;
int16_t x51 = -1;
uint16_t x52 = 217U;
int8_t x53 = -1;
int8_t x55 = INT8_MAX;
static volatile int16_t x74 = INT16_MAX;
int8_t x129 = 0;
int8_t x137 = INT8_MIN;
int32_t x138 = INT32_MIN;
uint8_t x146 = 6U;
volatile int32_t t15 = 867;
uint64_t x164 = UINT64_MAX;
uint8_t x178 = UINT8_MAX;
uint32_t x179 = 2567325U;
int32_t t17 = -52656;
uint16_t x198 = UINT16_MAX;
static int8_t x200 = INT8_MIN;
int8_t x209 = -1;
volatile uint16_t x226 = UINT16_MAX;
int16_t x228 = 30;
int32_t x234 = -1;
static volatile int8_t x237 = INT8_MAX;
int64_t x238 = -2103341033015153LL;
int32_t x239 = 13986486;
int32_t x242 = INT32_MAX;
int64_t x255 = -1LL;
volatile int32_t t30 = 634;
uint32_t x265 = 19483U;
int32_t t31 = -187;
uint32_t x280 = 186486956U;
volatile int16_t x294 = 1;
int32_t t38 = -12188124;
static uint64_t x356 = UINT64_MAX;
int32_t t40 = 51;
int16_t x360 = INT16_MIN;
static int8_t x375 = INT8_MIN;
volatile int8_t x393 = -2;
volatile int16_t x399 = INT16_MIN;
uint16_t x400 = UINT16_MAX;
int16_t x424 = -1;
uint32_t x439 = 788706729U;
int32_t t48 = -328514141;
int64_t x441 = -1LL;
int8_t x442 = INT8_MIN;
static int32_t x443 = -20122387;
uint64_t x458 = 91236625789303LLU;
volatile int32_t x468 = -39;
uint8_t x485 = 1U;
static int64_t x487 = -1LL;
int8_t x496 = INT8_MIN;
int32_t t58 = 1890;
int16_t x504 = -499;
int32_t t59 = 59;
int32_t x505 = INT32_MIN;
volatile uint64_t x515 = 16419LLU;
volatile int32_t t61 = 57896617;
uint16_t x521 = UINT16_MAX;
int64_t x523 = INT64_MIN;
int64_t x537 = INT64_MIN;
int16_t x539 = INT16_MAX;
int64_t x556 = INT64_MAX;
uint8_t x572 = 30U;
int64_t x581 = INT64_MIN;
int16_t x583 = INT16_MIN;
int8_t x586 = INT8_MIN;
uint16_t x588 = UINT16_MAX;
int32_t t72 = 96743;
volatile uint16_t x602 = 17920U;
static uint8_t x607 = UINT8_MAX;
static int32_t t74 = -204525;
uint8_t x667 = 4U;
static uint8_t x668 = 38U;
uint16_t x688 = UINT16_MAX;
static uint32_t x709 = 124721U;
int16_t x714 = INT16_MIN;
uint16_t x718 = 522U;
int64_t x720 = 133915709679588050LL;
uint8_t x722 = UINT8_MAX;
uint64_t x724 = 12153173172100379LLU;
static int64_t x725 = INT64_MIN;
static int16_t x729 = INT16_MAX;
static int16_t x735 = INT16_MAX;
int16_t x750 = 82;
uint8_t x754 = 26U;
uint32_t x756 = 1061941089U;
volatile int32_t t89 = 10904;
static volatile int64_t x758 = INT64_MIN;
static volatile int32_t x759 = INT32_MIN;
int8_t x799 = -28;
int32_t x805 = -1342712;
int32_t x808 = INT32_MAX;
static uint8_t x846 = UINT8_MAX;
static int16_t x847 = INT16_MIN;
int32_t t98 = -15733;
static int32_t t99 = -14036;


void f0(void) {
	int8_t x10 = -1;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = 114U;
	volatile int32_t t0 = 0;

	t0 = ((x9==x10)/(x11<x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 7701U;
	volatile uint16_t x14 = 1045U;
	int16_t x15 = INT16_MIN;
	int16_t x16 = -60;

	t1 = ((x13==x14)/(x15<x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x18 = -5;
	uint16_t x19 = UINT16_MAX;
	static uint64_t x20 = UINT64_MAX;
	volatile int32_t t2 = 169521084;

	t2 = ((x17==x18)/(x19<x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x21 = 1U;
	int16_t x22 = -1;
	uint8_t x23 = 75U;

	t3 = ((x21==x22)/(x23<x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x27 = INT16_MIN;
	uint64_t x28 = UINT64_MAX;
	int32_t t4 = -286238264;

	t4 = ((x25==x26)/(x27<x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x29 = 0U;
	uint32_t x30 = 836527U;
	static uint32_t x31 = 65827758U;
	int32_t x32 = INT32_MIN;
	volatile int32_t t5 = 22;

	t5 = ((x29==x30)/(x31<x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x46 = 3076722525LLU;
	uint8_t x48 = 1U;

	t6 = ((x45==x46)/(x47<x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x49 = -1LL;
	static int16_t x50 = 12919;
	int32_t t7 = 41;

	t7 = ((x49==x50)/(x51<x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x54 = 15;
	static int64_t x56 = 35302067LL;
	int32_t t8 = 1;

	t8 = ((x53==x54)/(x55<x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x61 = UINT8_MAX;
	volatile int32_t x62 = -4987659;
	static int8_t x63 = INT8_MIN;
	uint16_t x64 = 24083U;
	static int32_t t9 = 21;

	t9 = ((x61==x62)/(x63<x64));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x73 = -1;
	int32_t x75 = INT32_MIN;
	int16_t x76 = -16032;
	int32_t t10 = -46905645;

	t10 = ((x73==x74)/(x75<x76));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x97 = INT64_MAX;
	volatile uint64_t x98 = UINT64_MAX;
	volatile int16_t x99 = INT16_MIN;
	int16_t x100 = -3;
	volatile int32_t t11 = -1435276;

	t11 = ((x97==x98)/(x99<x100));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x113 = 44;
	int8_t x114 = INT8_MIN;
	uint8_t x115 = 8U;
	int16_t x116 = INT16_MAX;
	int32_t t12 = -10481406;

	t12 = ((x113==x114)/(x115<x116));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MAX;
	int64_t x132 = INT64_MAX;
	volatile int32_t t13 = 2751;

	t13 = ((x129==x130)/(x131<x132));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x139 = 7;
	static int64_t x140 = 16891428055450989LL;
	int32_t t14 = 3974;

	t14 = ((x137==x138)/(x139<x140));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x145 = 60U;
	volatile int8_t x147 = INT8_MIN;
	uint16_t x148 = 4229U;

	t15 = ((x145==x146)/(x147<x148));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x161 = 3855;
	int16_t x162 = 4834;
	static uint8_t x163 = 107U;
	volatile int32_t t16 = -1;

	t16 = ((x161==x162)/(x163<x164));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x177 = INT8_MAX;
	uint32_t x180 = UINT32_MAX;

	t17 = ((x177==x178)/(x179<x180));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x185 = 744230546389331062LLU;
	int32_t x186 = 207443;
	uint8_t x187 = UINT8_MAX;
	uint16_t x188 = 2885U;
	static volatile int32_t t18 = 444962;

	t18 = ((x185==x186)/(x187<x188));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x197 = INT64_MIN;
	int16_t x199 = INT16_MIN;
	static int32_t t19 = 4;

	t19 = ((x197==x198)/(x199<x200));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x201 = 1931365;
	static int8_t x202 = -2;
	static int32_t x203 = INT32_MIN;
	static uint16_t x204 = UINT16_MAX;
	volatile int32_t t20 = -7;

	t20 = ((x201==x202)/(x203<x204));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x205 = 1;
	static int64_t x206 = 224LL;
	int64_t x207 = -1LL;
	uint32_t x208 = 24959678U;
	int32_t t21 = -867549471;

	t21 = ((x205==x206)/(x207<x208));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x210 = INT64_MAX;
	int64_t x211 = -106959406744922069LL;
	static int16_t x212 = -1;
	int32_t t22 = -7445974;

	t22 = ((x209==x210)/(x211<x212));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x225 = INT16_MAX;
	uint8_t x227 = 6U;
	int32_t t23 = 0;

	t23 = ((x225==x226)/(x227<x228));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x229 = INT16_MIN;
	volatile int32_t x230 = -1;
	int32_t x231 = INT32_MAX;
	uint64_t x232 = UINT64_MAX;
	static volatile int32_t t24 = -240;

	t24 = ((x229==x230)/(x231<x232));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x233 = INT64_MIN;
	volatile int16_t x235 = -3284;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t25 = -120994949;

	t25 = ((x233==x234)/(x235<x236));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x240 = INT64_MAX;
	volatile int32_t t26 = 152535817;

	t26 = ((x237==x238)/(x239<x240));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x241 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	uint8_t x244 = UINT8_MAX;
	int32_t t27 = 8696801;

	t27 = ((x241==x242)/(x243<x244));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x249 = INT8_MIN;
	int16_t x250 = 109;
	int32_t x251 = -58387;
	static uint32_t x252 = UINT32_MAX;
	volatile int32_t t28 = -394;

	t28 = ((x249==x250)/(x251<x252));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x253 = INT16_MIN;
	volatile int32_t x254 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t29 = 922;

	t29 = ((x253==x254)/(x255<x256));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x261 = INT8_MAX;
	int32_t x262 = 5770731;
	uint32_t x263 = 2U;
	volatile int16_t x264 = INT16_MIN;

	t30 = ((x261==x262)/(x263<x264));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x266 = 21707234531LLU;
	static int32_t x267 = 1;
	static uint32_t x268 = UINT32_MAX;

	t31 = ((x265==x266)/(x267<x268));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x273 = 498U;
	int64_t x274 = -1LL;
	int64_t x275 = INT64_MIN;
	int32_t x276 = 121763194;
	volatile int32_t t32 = -1294919;

	t32 = ((x273==x274)/(x275<x276));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x277 = INT32_MAX;
	static int64_t x278 = 1399680313LL;
	int16_t x279 = 27;
	volatile int32_t t33 = 347093633;

	t33 = ((x277==x278)/(x279<x280));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x285 = 0;
	int32_t x286 = -1;
	uint64_t x287 = 1741749371370LLU;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t34 = 0;

	t34 = ((x285==x286)/(x287<x288));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x293 = -1;
	static int64_t x295 = INT64_MIN;
	volatile int32_t x296 = INT32_MIN;
	int32_t t35 = -1;

	t35 = ((x293==x294)/(x295<x296));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x301 = -1LL;
	int16_t x302 = 196;
	uint16_t x303 = UINT16_MAX;
	volatile uint32_t x304 = 176730U;
	volatile int32_t t36 = -153;

	t36 = ((x301==x302)/(x303<x304));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x313 = INT8_MAX;
	static uint64_t x314 = UINT64_MAX;
	int8_t x315 = 11;
	static volatile uint16_t x316 = 354U;
	volatile int32_t t37 = -236289670;

	t37 = ((x313==x314)/(x315<x316));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x345 = 24U;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = 43;
	volatile uint32_t x348 = UINT32_MAX;

	t38 = ((x345==x346)/(x347<x348));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x349 = -1LL;
	int16_t x350 = -4;
	static volatile uint16_t x351 = 33U;
	uint32_t x352 = UINT32_MAX;
	int32_t t39 = -19767;

	t39 = ((x349==x350)/(x351<x352));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x353 = -1;
	int64_t x354 = INT64_MIN;
	static int16_t x355 = INT16_MAX;

	t40 = ((x353==x354)/(x355<x356));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x357 = INT32_MAX;
	int64_t x358 = INT64_MIN;
	uint32_t x359 = 11U;
	volatile int32_t t41 = -316;

	t41 = ((x357==x358)/(x359<x360));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x361 = INT16_MAX;
	int32_t x362 = 11;
	static uint16_t x363 = 1U;
	uint64_t x364 = UINT64_MAX;
	volatile int32_t t42 = 77887;

	t42 = ((x361==x362)/(x363<x364));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x365 = -1;
	static volatile uint64_t x366 = UINT64_MAX;
	volatile int32_t x367 = -65784454;
	volatile int32_t x368 = -1;
	int32_t t43 = -48153246;

	t43 = ((x365==x366)/(x367<x368));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x373 = 32568088U;
	static uint16_t x374 = UINT16_MAX;
	volatile uint8_t x376 = 0U;
	int32_t t44 = 67322;

	t44 = ((x373==x374)/(x375<x376));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x394 = UINT16_MAX;
	int64_t x395 = -1742240317233985141LL;
	uint32_t x396 = 8646733U;
	volatile int32_t t45 = -640;

	t45 = ((x393==x394)/(x395<x396));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x397 = -1;
	static uint32_t x398 = 1887923607U;
	volatile int32_t t46 = -3374082;

	t46 = ((x397==x398)/(x399<x400));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x421 = 6013U;
	int16_t x422 = 5;
	int8_t x423 = INT8_MIN;
	int32_t t47 = 2392;

	t47 = ((x421==x422)/(x423<x424));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x437 = 10781U;
	uint8_t x438 = 20U;
	int32_t x440 = -1;

	t48 = ((x437==x438)/(x439<x440));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x444 = 2U;
	int32_t t49 = -551255160;

	t49 = ((x441==x442)/(x443<x444));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x449 = -1;
	uint64_t x450 = UINT64_MAX;
	int64_t x451 = INT64_MIN;
	uint8_t x452 = UINT8_MAX;
	static volatile int32_t t50 = 5;

	t50 = ((x449==x450)/(x451<x452));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x453 = UINT16_MAX;
	static int32_t x454 = -1;
	static uint64_t x455 = 2766LLU;
	static int64_t x456 = -4259737452LL;
	int32_t t51 = 260615;

	t51 = ((x453==x454)/(x455<x456));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x457 = INT32_MIN;
	uint64_t x459 = 58240396730365348LLU;
	int32_t x460 = -1;
	int32_t t52 = 6205;

	t52 = ((x457==x458)/(x459<x460));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x461 = 2U;
	volatile int8_t x462 = 4;
	int16_t x463 = INT16_MIN;
	volatile int8_t x464 = 1;
	int32_t t53 = -490547;

	t53 = ((x461==x462)/(x463<x464));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x465 = INT64_MAX;
	uint16_t x466 = 937U;
	static int64_t x467 = INT64_MIN;
	static int32_t t54 = 2;

	t54 = ((x465==x466)/(x467<x468));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x477 = UINT64_MAX;
	int32_t x478 = -1;
	static uint64_t x479 = 23785749297LLU;
	int8_t x480 = -1;
	volatile int32_t t55 = -19533;

	t55 = ((x477==x478)/(x479<x480));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x486 = UINT16_MAX;
	volatile int8_t x488 = 1;
	int32_t t56 = 8040053;

	t56 = ((x485==x486)/(x487<x488));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x493 = 104LLU;
	uint8_t x494 = 14U;
	static uint64_t x495 = 63LLU;
	int32_t t57 = 869601;

	t57 = ((x493==x494)/(x495<x496));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x497 = INT16_MIN;
	int64_t x498 = INT64_MIN;
	int16_t x499 = 0;
	int8_t x500 = INT8_MAX;

	t58 = ((x497==x498)/(x499<x500));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x501 = 482932488026LLU;
	uint32_t x502 = 96609641U;
	static int32_t x503 = -10219;

	t59 = ((x501==x502)/(x503<x504));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x506 = 14052;
	static volatile int8_t x507 = INT8_MIN;
	uint16_t x508 = 0U;
	int32_t t60 = -67;

	t60 = ((x505==x506)/(x507<x508));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x513 = UINT16_MAX;
	static volatile int16_t x514 = INT16_MAX;
	volatile int32_t x516 = -1;

	t61 = ((x513==x514)/(x515<x516));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x517 = -7532;
	uint64_t x518 = 7LLU;
	int32_t x519 = INT32_MIN;
	volatile int8_t x520 = INT8_MIN;
	volatile int32_t t62 = 114;

	t62 = ((x517==x518)/(x519<x520));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x522 = -1;
	int8_t x524 = 9;
	volatile int32_t t63 = -15;

	t63 = ((x521==x522)/(x523<x524));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x525 = INT8_MAX;
	int16_t x526 = -1;
	int16_t x527 = -1;
	volatile int16_t x528 = 7;
	volatile int32_t t64 = 0;

	t64 = ((x525==x526)/(x527<x528));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x533 = 6208499495940446624LLU;
	int16_t x534 = INT16_MIN;
	int16_t x535 = INT16_MIN;
	int16_t x536 = -10;
	int32_t t65 = 3;

	t65 = ((x533==x534)/(x535<x536));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x538 = INT8_MIN;
	uint32_t x540 = 1479353U;
	static volatile int32_t t66 = 13;

	t66 = ((x537==x538)/(x539<x540));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x545 = 10;
	int64_t x546 = INT64_MAX;
	static int16_t x547 = -14;
	uint16_t x548 = UINT16_MAX;
	static volatile int32_t t67 = 213168025;

	t67 = ((x545==x546)/(x547<x548));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x553 = UINT8_MAX;
	volatile int64_t x554 = INT64_MIN;
	int64_t x555 = INT64_MIN;
	int32_t t68 = 15;

	t68 = ((x553==x554)/(x555<x556));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x569 = INT32_MAX;
	int64_t x570 = INT64_MIN;
	int32_t x571 = INT32_MIN;
	int32_t t69 = 0;

	t69 = ((x569==x570)/(x571<x572));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x582 = INT16_MIN;
	int32_t x584 = 0;
	int32_t t70 = -1;

	t70 = ((x581==x582)/(x583<x584));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x585 = INT64_MIN;
	volatile int8_t x587 = INT8_MIN;
	volatile int32_t t71 = -16136;

	t71 = ((x585==x586)/(x587<x588));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x593 = INT64_MIN;
	int64_t x594 = INT64_MIN;
	volatile uint16_t x595 = 5U;
	int8_t x596 = INT8_MAX;

	t72 = ((x593==x594)/(x595<x596));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x601 = INT16_MAX;
	int64_t x603 = -241620104562131LL;
	volatile int64_t x604 = 499414769LL;
	static int32_t t73 = 98;

	t73 = ((x601==x602)/(x603<x604));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x605 = 995;
	int64_t x606 = -1LL;
	int32_t x608 = 2026;

	t74 = ((x605==x606)/(x607<x608));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x629 = -11157LL;
	volatile uint8_t x630 = UINT8_MAX;
	volatile int32_t x631 = INT32_MIN;
	int16_t x632 = INT16_MIN;
	int32_t t75 = 103;

	t75 = ((x629==x630)/(x631<x632));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x641 = UINT16_MAX;
	uint16_t x642 = 15671U;
	int32_t x643 = -208;
	int32_t x644 = INT32_MAX;
	int32_t t76 = 63455;

	t76 = ((x641==x642)/(x643<x644));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x645 = -10498220LL;
	uint32_t x646 = 159933158U;
	uint8_t x647 = UINT8_MAX;
	static int16_t x648 = 494;
	int32_t t77 = -11595476;

	t77 = ((x645==x646)/(x647<x648));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x665 = 28;
	uint8_t x666 = UINT8_MAX;
	volatile int32_t t78 = 0;

	t78 = ((x665==x666)/(x667<x668));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x673 = INT16_MAX;
	volatile int16_t x674 = 233;
	volatile int64_t x675 = 42LL;
	int8_t x676 = INT8_MAX;
	volatile int32_t t79 = 1;

	t79 = ((x673==x674)/(x675<x676));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x685 = 238509U;
	uint32_t x686 = UINT32_MAX;
	uint16_t x687 = 3U;
	int32_t t80 = 412;

	t80 = ((x685==x686)/(x687<x688));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x710 = INT8_MIN;
	int64_t x711 = INT64_MIN;
	static uint64_t x712 = UINT64_MAX;
	volatile int32_t t81 = 1;

	t81 = ((x709==x710)/(x711<x712));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x713 = INT32_MIN;
	uint8_t x715 = 0U;
	volatile int16_t x716 = INT16_MAX;
	int32_t t82 = -2;

	t82 = ((x713==x714)/(x715<x716));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x717 = INT16_MIN;
	int64_t x719 = INT64_MIN;
	int32_t t83 = -131128453;

	t83 = ((x717==x718)/(x719<x720));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x721 = -442651746LL;
	uint64_t x723 = 48071802378LLU;
	static int32_t t84 = -923721443;

	t84 = ((x721==x722)/(x723<x724));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x726 = INT8_MIN;
	uint32_t x727 = 423924U;
	uint32_t x728 = 868912U;
	static int32_t t85 = 1;

	t85 = ((x725==x726)/(x727<x728));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x730 = INT8_MIN;
	volatile int16_t x731 = INT16_MIN;
	static volatile uint32_t x732 = UINT32_MAX;
	int32_t t86 = -1057084;

	t86 = ((x729==x730)/(x731<x732));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x733 = INT64_MAX;
	static int8_t x734 = 23;
	uint16_t x736 = UINT16_MAX;
	volatile int32_t t87 = -6762948;

	t87 = ((x733==x734)/(x735<x736));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x749 = -1;
	volatile int64_t x751 = -1LL;
	int8_t x752 = 58;
	volatile int32_t t88 = 206791;

	t88 = ((x749==x750)/(x751<x752));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x753 = INT64_MIN;
	int64_t x755 = -109772529021LL;

	t89 = ((x753==x754)/(x755<x756));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x757 = INT64_MIN;
	int8_t x760 = INT8_MAX;
	int32_t t90 = 327724;

	t90 = ((x757==x758)/(x759<x760));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x761 = -7;
	uint32_t x762 = 149621222U;
	int32_t x763 = INT32_MIN;
	uint16_t x764 = UINT16_MAX;
	int32_t t91 = -1857655;

	t91 = ((x761==x762)/(x763<x764));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x773 = INT16_MIN;
	int16_t x774 = -1;
	volatile uint16_t x775 = UINT16_MAX;
	uint32_t x776 = UINT32_MAX;
	static volatile int32_t t92 = -3736;

	t92 = ((x773==x774)/(x775<x776));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x797 = UINT16_MAX;
	int32_t x798 = INT32_MIN;
	static int32_t x800 = -1;
	static volatile int32_t t93 = 1;

	t93 = ((x797==x798)/(x799<x800));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x806 = 109U;
	uint64_t x807 = 2776LLU;
	int32_t t94 = 1635;

	t94 = ((x805==x806)/(x807<x808));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x817 = INT64_MIN;
	volatile int64_t x818 = -132837188316413LL;
	static int16_t x819 = -1;
	uint16_t x820 = 1U;
	static int32_t t95 = 8196045;

	t95 = ((x817==x818)/(x819<x820));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x841 = UINT32_MAX;
	int8_t x842 = -7;
	int16_t x843 = INT16_MIN;
	static uint64_t x844 = UINT64_MAX;
	volatile int32_t t96 = -3037470;

	t96 = ((x841==x842)/(x843<x844));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x845 = -107118254352750228LL;
	volatile uint8_t x848 = UINT8_MAX;
	static volatile int32_t t97 = 961;

	t97 = ((x845==x846)/(x847<x848));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x853 = INT64_MIN;
	int64_t x854 = INT64_MAX;
	volatile uint16_t x855 = UINT16_MAX;
	uint64_t x856 = 8629405043131508LLU;

	t98 = ((x853==x854)/(x855<x856));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x857 = 7;
	static volatile int16_t x858 = INT16_MIN;
	int16_t x859 = -18;
	int32_t x860 = 385616756;

	t99 = ((x857==x858)/(x859<x860));

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

