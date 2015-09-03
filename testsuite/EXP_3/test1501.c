#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x19 = INT8_MIN;
int32_t x38 = INT32_MAX;
int16_t x48 = INT16_MIN;
int8_t x72 = INT8_MAX;
static int32_t x75 = 28313881;
static int8_t x82 = 1;
volatile int64_t t7 = 124389720LL;
int32_t x95 = INT32_MIN;
volatile uint64_t x97 = UINT64_MAX;
static volatile int16_t x99 = INT16_MIN;
volatile int8_t x100 = INT8_MIN;
uint64_t x126 = 236589743LLU;
volatile int64_t x127 = 17041034922798713LL;
static volatile uint64_t t13 = 18808548387340459LLU;
static int32_t x130 = 202;
uint8_t x137 = 1U;
static uint32_t x196 = 92U;
uint64_t x233 = UINT64_MAX;
volatile int16_t x267 = INT16_MIN;
static uint32_t x268 = 60U;
uint8_t x280 = 8U;
volatile uint32_t t27 = 129187020U;
uint64_t x282 = UINT64_MAX;
int16_t x284 = INT16_MAX;
uint64_t t28 = UINT64_MAX;
volatile int64_t x299 = INT64_MAX;
volatile uint64_t t33 = 193451LLU;
static uint16_t x333 = 1U;
int64_t x379 = INT64_MAX;
int32_t t36 = 626919;
uint16_t x399 = 16520U;
int64_t x416 = -228430LL;
volatile int32_t t41 = -1097;
int64_t x451 = -105435719907065806LL;
static uint32_t x458 = 59U;
volatile uint16_t x496 = 213U;
volatile int32_t t48 = -328;
int16_t x497 = INT16_MAX;
uint8_t x498 = 2U;
int32_t x499 = 1019894;
volatile int32_t t49 = 31;
volatile uint16_t x509 = 360U;
int32_t t50 = -1;
uint64_t x540 = UINT64_MAX;
int8_t x541 = INT8_MAX;
int8_t x544 = -1;
int16_t x549 = INT16_MAX;
static int32_t x570 = INT32_MIN;
volatile int32_t x572 = -1;
uint64_t x586 = UINT64_MAX;
volatile uint64_t t56 = 1221081903827648917LLU;
uint32_t x631 = 10991006U;
volatile uint32_t t60 = 5332U;
volatile uint32_t t61 = 469818U;
int16_t x643 = INT16_MIN;
uint32_t x644 = UINT32_MAX;
int32_t x654 = INT32_MIN;
int32_t x655 = INT32_MIN;
volatile uint8_t x678 = 72U;
int8_t x679 = -1;
uint16_t x680 = 24U;
uint64_t x690 = 152813LLU;
int64_t x730 = 183736086781LL;
static int16_t x732 = -121;
int32_t x753 = INT32_MIN;
static volatile uint64_t t72 = UINT64_MAX;
volatile uint32_t x765 = 107032U;
int16_t x766 = INT16_MIN;
int32_t x767 = INT32_MIN;
uint64_t t77 = 3923LLU;
uint64_t x835 = 1341787572LLU;
uint32_t t78 = 16906008U;
volatile uint8_t x840 = 61U;
int8_t x854 = 6;
uint64_t x861 = 2640473334LLU;
static int16_t x862 = -1;
static int8_t x864 = 5;
uint8_t x885 = 0U;
volatile int32_t x886 = 58;
int32_t t86 = 99703;
int32_t x911 = -3303151;
uint64_t x939 = 19LLU;
int32_t t92 = -1;
int32_t x942 = INT32_MIN;
static volatile uint64_t t95 = 6340LLU;
static int32_t t96 = 34;
static int16_t x997 = 0;
uint8_t x998 = 61U;
volatile int32_t t97 = 211074;
int32_t x1003 = INT32_MIN;
volatile uint64_t t98 = 868LLU;
uint64_t x1016 = 30433942776143124LLU;


void f0(void) {
	uint32_t x17 = UINT32_MAX;
	static int16_t x18 = 466;
	static int64_t x20 = INT64_MIN;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = ((x17|x18)<<(x19<x20));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x29 = 3909938U;
	volatile int8_t x30 = INT8_MIN;
	int32_t x31 = -899338780;
	volatile int8_t x32 = INT8_MIN;
	volatile uint32_t t1 = 6092U;

	t1 = ((x29|x30)<<(x31<x32));

	if (t1 != 4294967140U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x37 = 60U;
	int64_t x39 = 214951230707106LL;
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t2 = INT32_MAX;

	t2 = ((x37|x38)<<(x39<x40));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x45 = 39050760LL;
	uint8_t x46 = 7U;
	uint64_t x47 = UINT64_MAX;
	int64_t t3 = 13717427482085051LL;

	t3 = ((x45|x46)<<(x47<x48));

	if (t3 != 39050767LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x61 = -52134LL;
	volatile uint64_t x62 = 11LLU;
	int8_t x63 = 57;
	int8_t x64 = 0;
	uint64_t t4 = 40981237LLU;

	t4 = ((x61|x62)<<(x63<x64));

	if (t4 != 18446744073709499483LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x69 = INT32_MIN;
	static volatile uint64_t x70 = UINT64_MAX;
	uint32_t x71 = 1921U;
	static uint64_t t5 = UINT64_MAX;

	t5 = ((x69|x70)<<(x71<x72));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x73 = 1005007697U;
	uint64_t x74 = 3230911588432964LLU;
	int32_t x76 = INT32_MIN;
	uint64_t t6 = 1152278LLU;

	t6 = ((x73|x74)<<(x75<x76));

	if (t6 != 3230911628279637LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x81 = 2618523580151838390LL;
	int64_t x83 = INT64_MAX;
	uint16_t x84 = UINT16_MAX;

	t7 = ((x81|x82)<<(x83<x84));

	if (t7 != 2618523580151838391LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x89 = INT32_MIN;
	uint64_t x90 = 623894490996046750LLU;
	int32_t x91 = INT32_MAX;
	int8_t x92 = 2;
	uint64_t t8 = 11551795735526750LLU;

	t8 = ((x89|x90)<<(x91<x92));

	if (t8 != 18446744073326066590LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x93 = 1U;
	static uint64_t x94 = 81LLU;
	static int64_t x96 = INT64_MIN;
	static volatile uint64_t t9 = 17130363227LLU;

	t9 = ((x93|x94)<<(x95<x96));

	if (t9 != 81LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x98 = INT32_MAX;
	static volatile uint64_t t10 = 2011LLU;

	t10 = ((x97|x98)<<(x99<x100));

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = 1;
	int8_t x107 = INT8_MIN;
	int16_t x108 = 114;
	int32_t t11 = 263092451;

	t11 = ((x105|x106)<<(x107<x108));

	if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x121 = 16776226147756LL;
	uint32_t x122 = 10U;
	int16_t x123 = 10;
	int8_t x124 = INT8_MAX;
	volatile int64_t t12 = -409417215537294994LL;

	t12 = ((x121|x122)<<(x123<x124));

	if (t12 != 33552452295516LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x125 = UINT16_MAX;
	static int16_t x128 = -1;

	t13 = ((x125|x126)<<(x127<x128));

	if (t13 != 236650495LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x129 = INT16_MAX;
	volatile int16_t x131 = 590;
	volatile int32_t x132 = -1;
	volatile int32_t t14 = 543;

	t14 = ((x129|x130)<<(x131<x132));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x138 = 37U;
	static volatile int64_t x139 = 6430278LL;
	volatile int32_t x140 = -1;
	int32_t t15 = 32161;

	t15 = ((x137|x138)<<(x139<x140));

	if (t15 != 37) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x141 = 905395U;
	volatile int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MAX;
	int64_t x144 = INT64_MIN;
	uint32_t t16 = 33192U;

	t16 = ((x141|x142)<<(x143<x144));

	if (t16 != 2148389043U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x153 = 749253009;
	volatile uint32_t x154 = 212U;
	static volatile int32_t x155 = -1;
	uint16_t x156 = 188U;
	uint32_t t17 = 71872U;

	t17 = ((x153|x154)<<(x155<x156));

	if (t17 != 1498506154U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x157 = UINT8_MAX;
	uint64_t x158 = UINT64_MAX;
	static volatile int16_t x159 = -1;
	static int16_t x160 = INT16_MIN;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x157|x158)<<(x159<x160));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x193 = 259356308338488LLU;
	volatile int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MIN;
	volatile uint64_t t19 = 1403LLU;

	t19 = ((x193|x194)<<(x195<x196));

	if (t19 != 18446744070240988784LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x217 = 27124U;
	volatile int8_t x218 = INT8_MAX;
	int64_t x219 = INT64_MAX;
	int64_t x220 = INT64_MAX;
	volatile int32_t t20 = 3540;

	t20 = ((x217|x218)<<(x219<x220));

	if (t20 != 27135) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x221 = 2;
	static int8_t x222 = 1;
	static int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MAX;
	int32_t t21 = -173522;

	t21 = ((x221|x222)<<(x223<x224));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x225 = 464642595;
	uint32_t x226 = UINT32_MAX;
	int8_t x227 = -2;
	volatile uint8_t x228 = 28U;
	static volatile uint32_t t22 = 6U;

	t22 = ((x225|x226)<<(x227<x228));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x229 = INT8_MIN;
	volatile uint32_t x230 = 354124U;
	volatile int32_t x231 = INT32_MIN;
	static uint32_t x232 = 0U;
	volatile uint32_t t23 = 12891351U;

	t23 = ((x229|x230)<<(x231<x232));

	if (t23 != 4294967244U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x234 = 437527U;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 386458LLU;
	uint64_t t24 = UINT64_MAX;

	t24 = ((x233|x234)<<(x235<x236));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x257 = 0U;
	volatile int64_t x258 = 518243LL;
	int8_t x259 = -8;
	uint64_t x260 = 1430188449956966LLU;
	static int64_t t25 = -961347339165244024LL;

	t25 = ((x257|x258)<<(x259<x260));

	if (t25 != 518243LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x265 = -7;
	static uint64_t x266 = 1LLU;
	volatile uint64_t t26 = 8243021LLU;

	t26 = ((x265|x266)<<(x267<x268));

	if (t26 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x277 = INT16_MAX;
	uint32_t x278 = 287U;
	int64_t x279 = 19737190280383LL;

	t27 = ((x277|x278)<<(x279<x280));

	if (t27 != 32767U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x281 = UINT16_MAX;
	uint16_t x283 = UINT16_MAX;

	t28 = ((x281|x282)<<(x283<x284));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x285 = -1;
	uint32_t x286 = 484659U;
	int8_t x287 = 3;
	int64_t x288 = INT64_MAX;
	volatile uint32_t t29 = 393196U;

	t29 = ((x285|x286)<<(x287<x288));

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x289 = 10033U;
	static volatile int16_t x290 = 15701;
	uint8_t x291 = 0U;
	int8_t x292 = -1;
	int32_t t30 = -160377;

	t30 = ((x289|x290)<<(x291<x292));

	if (t30 != 16245) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x297 = 564007812U;
	static uint8_t x298 = 29U;
	int64_t x300 = INT64_MAX;
	volatile uint32_t t31 = 6242U;

	t31 = ((x297|x298)<<(x299<x300));

	if (t31 != 564007837U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x305 = 56;
	uint16_t x306 = 11U;
	static int64_t x307 = 6247LL;
	int16_t x308 = -1;
	int32_t t32 = 4245;

	t32 = ((x305|x306)<<(x307<x308));

	if (t32 != 59) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x321 = UINT64_MAX;
	uint32_t x322 = 6335U;
	static int16_t x323 = -1;
	int16_t x324 = 5588;

	t33 = ((x321|x322)<<(x323<x324));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x334 = 2U;
	int64_t x335 = -1LL;
	uint32_t x336 = 51616205U;
	int32_t t34 = 3329241;

	t34 = ((x333|x334)<<(x335<x336));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x341 = 254787372190LLU;
	volatile int64_t x342 = INT64_MIN;
	static uint32_t x343 = 59178U;
	static int16_t x344 = -1;
	volatile uint64_t t35 = 1085557469707159LLU;

	t35 = ((x341|x342)<<(x343<x344));

	if (t35 != 509574744380LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x377 = INT8_MAX;
	int32_t x378 = 220;
	int32_t x380 = 448381125;

	t36 = ((x377|x378)<<(x379<x380));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x397 = 460459LL;
	int64_t x398 = 302260282421LL;
	volatile int16_t x400 = 1624;
	int64_t t37 = 56185263889LL;

	t37 = ((x397|x398)<<(x399<x400));

	if (t37 != 302260414143LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x401 = 3U;
	int8_t x402 = INT8_MAX;
	int16_t x403 = -1;
	int16_t x404 = INT16_MIN;
	int32_t t38 = 28133;

	t38 = ((x401|x402)<<(x403<x404));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x413 = INT16_MAX;
	uint32_t x414 = 1813U;
	volatile int64_t x415 = -1LL;
	uint32_t t39 = 111U;

	t39 = ((x413|x414)<<(x415<x416));

	if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x429 = UINT64_MAX;
	volatile uint32_t x430 = 965U;
	static uint8_t x431 = UINT8_MAX;
	int64_t x432 = 11265352519749LL;
	static uint64_t t40 = 943384395881098511LLU;

	t40 = ((x429|x430)<<(x431<x432));

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x441 = 19U;
	int8_t x442 = 2;
	int32_t x443 = INT32_MIN;
	static int16_t x444 = INT16_MAX;

	t41 = ((x441|x442)<<(x443<x444));

	if (t41 != 38) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x449 = 48663LLU;
	static volatile uint8_t x450 = UINT8_MAX;
	volatile int8_t x452 = INT8_MIN;
	uint64_t t42 = 96124663057116840LLU;

	t42 = ((x449|x450)<<(x451<x452));

	if (t42 != 97790LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x453 = 27LLU;
	int16_t x454 = -1;
	static uint32_t x455 = UINT32_MAX;
	volatile uint16_t x456 = 9841U;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x453|x454)<<(x455<x456));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x457 = INT8_MIN;
	int32_t x459 = 216;
	volatile uint64_t x460 = 909906404LLU;
	volatile uint32_t t44 = 1786030771U;

	t44 = ((x457|x458)<<(x459<x460));

	if (t44 != 4294967158U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x465 = 29;
	uint64_t x466 = 42432621543846LLU;
	volatile int32_t x467 = -1;
	uint32_t x468 = UINT32_MAX;
	uint64_t t45 = 1716622861473LLU;

	t45 = ((x465|x466)<<(x467<x468));

	if (t45 != 42432621543871LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x473 = 7287;
	uint32_t x474 = 2754U;
	uint16_t x475 = 139U;
	int16_t x476 = INT16_MIN;
	uint32_t t46 = 25913240U;

	t46 = ((x473|x474)<<(x475<x476));

	if (t46 != 7927U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x481 = 0U;
	static uint64_t x482 = 380LLU;
	volatile int16_t x483 = 16123;
	volatile int8_t x484 = 1;
	uint64_t t47 = 495466727995916LLU;

	t47 = ((x481|x482)<<(x483<x484));

	if (t47 != 380LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x493 = 23U;
	int16_t x494 = 11;
	int64_t x495 = -1LL;

	t48 = ((x493|x494)<<(x495<x496));

	if (t48 != 62) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x500 = INT16_MAX;

	t49 = ((x497|x498)<<(x499<x500));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x510 = 45U;
	uint64_t x511 = 1380071916723882LLU;
	uint64_t x512 = 12LLU;

	t50 = ((x509|x510)<<(x511<x512));

	if (t50 != 365) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x537 = 13427LLU;
	int16_t x538 = 1;
	int8_t x539 = INT8_MIN;
	uint64_t t51 = 61366127739LLU;

	t51 = ((x537|x538)<<(x539<x540));

	if (t51 != 26854LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x542 = UINT64_MAX;
	int64_t x543 = -7048LL;
	static volatile uint64_t t52 = 7LLU;

	t52 = ((x541|x542)<<(x543<x544));

	if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x550 = UINT32_MAX;
	uint32_t x551 = 7U;
	int16_t x552 = INT16_MIN;
	static uint32_t t53 = 143162U;

	t53 = ((x549|x550)<<(x551<x552));

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x557 = -1LL;
	uint64_t x558 = UINT64_MAX;
	volatile int64_t x559 = 22966753164LL;
	volatile int64_t x560 = INT64_MIN;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = ((x557|x558)<<(x559<x560));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x569 = 1U;
	static int16_t x571 = -1;
	uint32_t t55 = 43434U;

	t55 = ((x569|x570)<<(x571<x572));

	if (t55 != 2147483649U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x585 = 1849774956U;
	int16_t x587 = INT16_MIN;
	volatile int16_t x588 = 104;

	t56 = ((x585|x586)<<(x587<x588));

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x601 = INT16_MAX;
	static volatile int8_t x602 = 0;
	int16_t x603 = INT16_MAX;
	static int16_t x604 = 303;
	int32_t t57 = 5424;

	t57 = ((x601|x602)<<(x603<x604));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x605 = INT8_MAX;
	int16_t x606 = INT16_MAX;
	volatile uint8_t x607 = 98U;
	int32_t x608 = -6;
	int32_t t58 = -1946;

	t58 = ((x605|x606)<<(x607<x608));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x617 = 14305;
	volatile int8_t x618 = INT8_MAX;
	uint16_t x619 = UINT16_MAX;
	volatile int8_t x620 = INT8_MIN;
	int32_t t59 = -1;

	t59 = ((x617|x618)<<(x619<x620));

	if (t59 != 14335) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x629 = 25469745U;
	int8_t x630 = -30;
	volatile uint32_t x632 = UINT32_MAX;

	t60 = ((x629|x630)<<(x631<x632));

	if (t60 != 4294967270U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x633 = 516U;
	int16_t x634 = INT16_MIN;
	volatile int16_t x635 = INT16_MIN;
	static int32_t x636 = INT32_MAX;

	t61 = ((x633|x634)<<(x635<x636));

	if (t61 != 4294902792U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x641 = UINT8_MAX;
	uint8_t x642 = UINT8_MAX;
	int32_t t62 = 15212;

	t62 = ((x641|x642)<<(x643<x644));

	if (t62 != 510) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x653 = UINT32_MAX;
	static uint64_t x656 = 999891533126785LLU;
	static uint32_t t63 = UINT32_MAX;

	t63 = ((x653|x654)<<(x655<x656));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x657 = 70U;
	static int16_t x658 = INT16_MIN;
	volatile uint16_t x659 = 46U;
	static uint64_t x660 = UINT64_MAX;
	static uint32_t t64 = 20U;

	t64 = ((x657|x658)<<(x659<x660));

	if (t64 != 4294901900U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x677 = 8U;
	int32_t t65 = -1826;

	t65 = ((x677|x678)<<(x679<x680));

	if (t65 != 144) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x689 = INT32_MIN;
	int64_t x691 = -1LL;
	static int16_t x692 = -1;
	static uint64_t t66 = 7736LLU;

	t66 = ((x689|x690)<<(x691<x692));

	if (t66 != 18446744071562220781LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x697 = INT16_MIN;
	uint32_t x698 = UINT32_MAX;
	static volatile int16_t x699 = INT16_MIN;
	static int64_t x700 = -37LL;
	static volatile uint32_t t67 = 5238U;

	t67 = ((x697|x698)<<(x699<x700));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x705 = INT8_MAX;
	int16_t x706 = INT16_MAX;
	int32_t x707 = 1816309;
	static int8_t x708 = 0;
	volatile int32_t t68 = 5;

	t68 = ((x705|x706)<<(x707<x708));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x713 = 60U;
	volatile uint32_t x714 = UINT32_MAX;
	int8_t x715 = -1;
	static uint8_t x716 = 114U;
	static volatile uint32_t t69 = 4U;

	t69 = ((x713|x714)<<(x715<x716));

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x729 = 12742690518LLU;
	int64_t x731 = -1LL;
	volatile uint64_t t70 = 4764691LLU;

	t70 = ((x729|x730)<<(x731<x732));

	if (t70 != 184541394687LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x749 = 36220581U;
	int8_t x750 = INT8_MAX;
	volatile int16_t x751 = 6;
	int8_t x752 = INT8_MIN;
	volatile uint32_t t71 = 8660U;

	t71 = ((x749|x750)<<(x751<x752));

	if (t71 != 36220671U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x754 = UINT64_MAX;
	volatile int64_t x755 = INT64_MAX;
	int32_t x756 = INT32_MAX;

	t72 = ((x753|x754)<<(x755<x756));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x768 = -1;
	uint32_t t73 = 524U;

	t73 = ((x765|x766)<<(x767<x768));

	if (t73 != 4294919216U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x801 = 724231LLU;
	uint64_t x802 = UINT64_MAX;
	int8_t x803 = 51;
	int64_t x804 = INT64_MAX;
	volatile uint64_t t74 = 21600108534479413LLU;

	t74 = ((x801|x802)<<(x803<x804));

	if (t74 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x809 = UINT8_MAX;
	int8_t x810 = INT8_MAX;
	int8_t x811 = -1;
	volatile int32_t x812 = -49327612;
	int32_t t75 = -1;

	t75 = ((x809|x810)<<(x811<x812));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x825 = UINT32_MAX;
	int16_t x826 = -9841;
	static int8_t x827 = -1;
	static int64_t x828 = 5LL;
	uint32_t t76 = 7490U;

	t76 = ((x825|x826)<<(x827<x828));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x829 = UINT64_MAX;
	uint32_t x830 = UINT32_MAX;
	int8_t x831 = -4;
	uint64_t x832 = UINT64_MAX;

	t77 = ((x829|x830)<<(x831<x832));

	if (t77 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x833 = -1;
	uint32_t x834 = UINT32_MAX;
	uint64_t x836 = 176525853358LLU;

	t78 = ((x833|x834)<<(x835<x836));

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x837 = UINT32_MAX;
	static int8_t x838 = INT8_MIN;
	uint16_t x839 = 13U;
	uint32_t t79 = 1U;

	t79 = ((x837|x838)<<(x839<x840));

	if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x853 = INT8_MAX;
	uint32_t x855 = UINT32_MAX;
	uint16_t x856 = UINT16_MAX;
	volatile int32_t t80 = 1143;

	t80 = ((x853|x854)<<(x855<x856));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x863 = UINT8_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = ((x861|x862)<<(x863<x864));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x877 = UINT16_MAX;
	volatile int16_t x878 = INT16_MAX;
	uint32_t x879 = UINT32_MAX;
	uint8_t x880 = UINT8_MAX;
	volatile int32_t t82 = -27;

	t82 = ((x877|x878)<<(x879<x880));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x887 = INT16_MIN;
	volatile uint64_t x888 = 226973LLU;
	volatile int32_t t83 = 19043;

	t83 = ((x885|x886)<<(x887<x888));

	if (t83 != 58) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x893 = INT16_MIN;
	static uint64_t x894 = 30622983577519256LLU;
	volatile uint16_t x895 = UINT16_MAX;
	static uint32_t x896 = UINT32_MAX;
	uint64_t t84 = 2199LLU;

	t84 = ((x893|x894)<<(x895<x896));

	if (t84 != 18446744073709521200LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x897 = INT16_MAX;
	uint32_t x898 = 619937704U;
	int64_t x899 = INT64_MAX;
	static volatile int32_t x900 = 40434637;
	volatile uint32_t t85 = 7605U;

	t85 = ((x897|x898)<<(x899<x900));

	if (t85 != 619937791U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x901 = 0;
	int8_t x902 = 3;
	static int64_t x903 = -1LL;
	volatile int16_t x904 = INT16_MAX;

	t86 = ((x901|x902)<<(x903<x904));

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x909 = INT64_MIN;
	uint64_t x910 = UINT64_MAX;
	volatile int64_t x912 = INT64_MIN;
	static volatile uint64_t t87 = UINT64_MAX;

	t87 = ((x909|x910)<<(x911<x912));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x913 = 0U;
	int16_t x914 = -1;
	uint16_t x915 = UINT16_MAX;
	int32_t x916 = INT32_MIN;
	uint32_t t88 = UINT32_MAX;

	t88 = ((x913|x914)<<(x915<x916));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x917 = UINT64_MAX;
	static int64_t x918 = -1LL;
	int32_t x919 = INT32_MAX;
	int16_t x920 = INT16_MAX;
	static volatile uint64_t t89 = UINT64_MAX;

	t89 = ((x917|x918)<<(x919<x920));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x921 = UINT64_MAX;
	int8_t x922 = INT8_MAX;
	int16_t x923 = INT16_MIN;
	int16_t x924 = INT16_MIN;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x921|x922)<<(x923<x924));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x929 = 18U;
	static uint32_t x930 = UINT32_MAX;
	int8_t x931 = 1;
	int16_t x932 = 25;
	volatile uint32_t t91 = 0U;

	t91 = ((x929|x930)<<(x931<x932));

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x937 = INT16_MAX;
	static uint8_t x938 = 1U;
	volatile int8_t x940 = -1;

	t92 = ((x937|x938)<<(x939<x940));

	if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x941 = 1856U;
	uint16_t x943 = 3U;
	int64_t x944 = INT64_MIN;
	static uint32_t t93 = 1U;

	t93 = ((x941|x942)<<(x943<x944));

	if (t93 != 2147485504U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x977 = INT32_MIN;
	static uint32_t x978 = 51U;
	int32_t x979 = INT32_MAX;
	int64_t x980 = 1923937LL;
	uint32_t t94 = 1U;

	t94 = ((x977|x978)<<(x979<x980));

	if (t94 != 2147483699U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x985 = 1;
	uint64_t x986 = UINT64_MAX;
	int8_t x987 = INT8_MIN;
	static uint16_t x988 = 498U;

	t95 = ((x985|x986)<<(x987<x988));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x993 = UINT8_MAX;
	int16_t x994 = 140;
	uint32_t x995 = 196862995U;
	static volatile int16_t x996 = 6677;

	t96 = ((x993|x994)<<(x995<x996));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x999 = 9U;
	volatile int32_t x1000 = INT32_MIN;

	t97 = ((x997|x998)<<(x999<x1000));

	if (t97 != 122) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1001 = 1791269886015914LLU;
	uint32_t x1002 = UINT32_MAX;
	volatile int32_t x1004 = -1;

	t98 = ((x1001|x1002)<<(x1003<x1004));

	if (t98 != 3582543890743294LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1013 = 4136U;
	int32_t x1014 = -344481;
	volatile int16_t x1015 = 28;
	uint32_t t99 = 18927U;

	t99 = ((x1013|x1014)<<(x1015<x1016));

	if (t99 != 4294278398U) { NG(); } else { ; }
	
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

