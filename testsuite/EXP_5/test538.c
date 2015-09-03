#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x12 = 93002527569043145LLU;
uint32_t x13 = 204927U;
volatile uint32_t t1 = 35118U;
int16_t x18 = -888;
static uint8_t x20 = 1U;
int32_t x25 = INT32_MIN;
int8_t x28 = INT8_MIN;
int64_t x30 = INT64_MIN;
static uint32_t x32 = UINT32_MAX;
static uint8_t x44 = UINT8_MAX;
uint64_t t7 = 1760016923LLU;
int16_t x49 = -1;
volatile int8_t x52 = -1;
int64_t x63 = 13119222LL;
volatile int64_t t9 = -24085LL;
volatile uint8_t x69 = 29U;
volatile uint64_t t12 = 2250192LLU;
uint64_t t13 = 13555007359731LLU;
static uint32_t x93 = 193U;
volatile uint64_t t16 = 23785790410675LLU;
volatile uint8_t x116 = 68U;
uint64_t x201 = 40044776635384562LLU;
static int16_t x210 = INT16_MIN;
volatile int64_t x216 = 245062899LL;
int32_t x226 = INT32_MIN;
int8_t x228 = 1;
int64_t x250 = 2414632982428851864LL;
volatile int64_t x251 = 332104100635501915LL;
volatile int64_t t28 = -21LL;
int32_t x265 = 510842;
int64_t x267 = INT64_MAX;
static uint8_t x285 = 0U;
int32_t x296 = -44;
int64_t x325 = INT64_MIN;
int16_t x328 = INT16_MIN;
int64_t x344 = -1LL;
int64_t x357 = INT64_MAX;
int16_t x371 = -3841;
uint32_t x388 = UINT32_MAX;
static volatile uint64_t t40 = 1106688199567LLU;
int16_t x393 = INT16_MIN;
volatile int64_t x410 = -1302482737289688LL;
int16_t x412 = INT16_MAX;
static volatile int64_t t42 = 53014LL;
volatile int8_t x417 = -1;
int32_t x418 = -28;
int32_t x430 = 6;
int64_t x431 = -1LL;
volatile uint64_t x438 = 1534380LLU;
int8_t x461 = -1;
uint8_t x465 = 1U;
int16_t x478 = INT16_MIN;
static int16_t x479 = INT16_MIN;
static int16_t x503 = 51;
uint8_t x512 = 45U;
static int64_t x514 = INT64_MIN;
static uint64_t x515 = 57434315217551LLU;
volatile uint64_t t54 = 2382860708LLU;
int32_t x518 = -1;
static uint64_t x519 = UINT64_MAX;
static uint64_t t55 = 122708827LLU;
int32_t x554 = INT32_MIN;
volatile int32_t x555 = INT32_MIN;
volatile int8_t x608 = INT8_MIN;
int64_t x617 = INT64_MIN;
uint32_t x621 = 1557027U;
int8_t x624 = INT8_MIN;
static int16_t x634 = INT16_MAX;
static int8_t x636 = INT8_MAX;
uint16_t x658 = UINT16_MAX;
static int64_t x674 = INT64_MIN;
volatile int8_t x696 = -1;
int64_t x702 = INT64_MIN;
int32_t x703 = INT32_MIN;
uint32_t x704 = 82962692U;
int8_t x709 = -1;
uint16_t x725 = 0U;
volatile int64_t x726 = INT64_MAX;
static volatile int32_t x770 = INT32_MIN;
uint32_t x771 = 4865U;
int32_t t74 = 10;
int8_t x795 = -1;
int64_t t75 = 349016536824067LL;
uint64_t t76 = 11647172772155390LLU;
uint16_t x822 = UINT16_MAX;
volatile int32_t x823 = 19;
uint16_t x837 = 30868U;
int64_t t80 = -126976069251LL;
uint64_t x870 = UINT64_MAX;
volatile uint64_t t83 = 4016589801991740866LLU;
static uint16_t x882 = 5560U;
volatile uint32_t x884 = 14U;
static volatile int8_t x887 = -1;
int8_t x891 = -1;
int32_t x894 = -726620;
int8_t x895 = INT8_MIN;
uint8_t x989 = 11U;
static uint16_t x992 = 1U;
int16_t x993 = 43;
static uint16_t x995 = UINT16_MAX;
int32_t x1020 = 26;
int64_t x1030 = INT64_MAX;
int16_t x1031 = INT16_MIN;
uint64_t t97 = 4331LLU;
volatile uint64_t t98 = 2543390246LLU;
int8_t x1041 = -1;
int8_t x1044 = -1;
volatile uint32_t t99 = 0U;


void f0(void) {
	int64_t x9 = -12232449007870LL;
	uint16_t x10 = UINT16_MAX;
	static uint16_t x11 = 1925U;
	volatile uint64_t t0 = 6957740793267LLU;

	t0 = (x9%((x10/x11)*x12));

	if (t0 != 2636302154523209096LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x14 = INT16_MAX;
	volatile int16_t x15 = -676;
	int32_t x16 = -262403;

	t1 = (x13%((x14/x15)*x16));

	if (t1 != 204927U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 6353U;
	int8_t x19 = -1;
	volatile int32_t t2 = -4748;

	t2 = (x17%((x18/x19)*x20));

	if (t2 != 137) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	int16_t x23 = -276;
	uint32_t x24 = 7836U;
	volatile uint32_t t3 = 8061U;

	t3 = (x21%((x22/x23)*x24));

	if (t3 != 4340U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x26 = UINT16_MAX;
	uint8_t x27 = 28U;
	volatile int32_t t4 = -52638;

	t4 = (x25%((x26/x27)*x28));

	if (t4 != -224768) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = -1;
	uint32_t x31 = UINT32_MAX;
	volatile int64_t t5 = 56154606717650659LL;

	t5 = (x29%((x30/x31)*x32));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x41 = -157098145418131053LL;
	volatile int8_t x42 = -1;
	int16_t x43 = -1;
	volatile int64_t t6 = 338995649569LL;

	t6 = (x41%((x42/x43)*x44));

	if (t6 != -183LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x45 = INT8_MIN;
	uint64_t x46 = UINT64_MAX;
	static uint64_t x47 = 1079527743445153LLU;
	int64_t x48 = INT64_MIN;

	t7 = (x45%((x46/x47)*x48));

	if (t7 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x50 = INT64_MAX;
	static int64_t x51 = -1LL;
	static volatile int64_t t8 = -64420LL;

	t8 = (x49%((x50/x51)*x52));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = INT64_MIN;
	static int32_t x64 = -24935;

	t9 = (x61%((x62/x63)*x64));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = -1;
	int16_t x66 = -1;
	uint32_t x67 = 233U;
	static int16_t x68 = INT16_MIN;
	uint32_t t10 = 175367137U;

	t10 = (x65%((x66/x67)*x68));

	if (t10 != 1161297919U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x70 = INT16_MIN;
	volatile int8_t x71 = -7;
	int32_t x72 = -1;
	volatile int32_t t11 = -85192593;

	t11 = (x69%((x70/x71)*x72));

	if (t11 != 29) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x77 = 44041921LLU;
	int16_t x78 = -1;
	static volatile uint64_t x79 = 1LLU;
	uint8_t x80 = 68U;

	t12 = (x77%((x78/x79)*x80));

	if (t12 != 44041921LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x81 = INT8_MIN;
	static uint64_t x82 = UINT64_MAX;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;

	t13 = (x81%((x82/x83)*x84));

	if (t13 != 281479271743360LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x94 = 15974176;
	volatile int16_t x95 = -20;
	volatile uint8_t x96 = 8U;
	volatile uint32_t t14 = 933U;

	t14 = (x93%((x94/x95)*x96));

	if (t14 != 193U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x101 = 204734LLU;
	static int64_t x102 = -23148711793780LL;
	uint16_t x103 = 5U;
	int8_t x104 = INT8_MAX;
	uint64_t t15 = 22LLU;

	t15 = (x101%((x102/x103)*x104));

	if (t15 != 204734LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x105 = 2894785077676342712LLU;
	uint8_t x106 = UINT8_MAX;
	volatile uint64_t x107 = 3LLU;
	int64_t x108 = INT64_MIN;

	t16 = (x105%((x106/x107)*x108));

	if (t16 != 2894785077676342712LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x109 = 76666591LLU;
	int64_t x110 = -1134429LL;
	int8_t x111 = INT8_MIN;
	volatile uint16_t x112 = 21U;
	volatile uint64_t t17 = 208620821LLU;

	t17 = (x109%((x110/x111)*x112));

	if (t17 != 178669LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x113 = 3680788U;
	int64_t x114 = -9255LL;
	int16_t x115 = -1;
	static int64_t t18 = 7901520074519756LL;

	t18 = (x113%((x114/x115)*x116));

	if (t18 != 534088LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x121 = 152U;
	static volatile uint32_t x122 = 776645U;
	static volatile int64_t x123 = -1LL;
	int16_t x124 = INT16_MAX;
	static volatile int64_t t19 = 1931669020LL;

	t19 = (x121%((x122/x123)*x124));

	if (t19 != 152LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x125 = INT16_MIN;
	static volatile uint16_t x126 = 7U;
	int8_t x127 = -1;
	static uint8_t x128 = 58U;
	volatile int32_t t20 = 59;

	t20 = (x125%((x126/x127)*x128));

	if (t20 != -288) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = -45802502709855LL;
	int16_t x155 = -1;
	int16_t x156 = 63;
	int64_t t21 = -2710296229226924LL;

	t21 = (x153%((x154/x155)*x156));

	if (t21 != -2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x161 = 903232851513994LL;
	uint8_t x162 = UINT8_MAX;
	static int8_t x163 = INT8_MIN;
	volatile int16_t x164 = -1;
	int64_t t22 = -111111650037551448LL;

	t22 = (x161%((x162/x163)*x164));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x189 = UINT8_MAX;
	volatile int32_t x190 = INT32_MIN;
	int8_t x191 = 6;
	static uint32_t x192 = 1827951U;
	uint32_t t23 = 704U;

	t23 = (x189%((x190/x191)*x192));

	if (t23 != 255U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x202 = INT16_MAX;
	int64_t x203 = -1LL;
	int32_t x204 = -1;
	uint64_t t24 = 2LLU;

	t24 = (x201%((x202/x203)*x204));

	if (t24 != 5725LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x209 = INT8_MIN;
	uint8_t x211 = 107U;
	int16_t x212 = INT16_MIN;
	int32_t t25 = -131;

	t25 = (x209%((x210/x211)*x212));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MIN;
	volatile int8_t x215 = INT8_MIN;
	volatile uint64_t t26 = 713773448781129196LLU;

	t26 = (x213%((x214/x215)*x216));

	if (t26 != 33633555LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x225 = INT64_MAX;
	static uint16_t x227 = 228U;
	int64_t t27 = 136LL;

	t27 = (x225%((x226/x227)*x228));

	if (t27 != 89887LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x249 = -30;
	static int16_t x252 = -1;

	t28 = (x249%((x250/x251)*x252));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x266 = INT64_MIN;
	int64_t x268 = INT64_MAX;
	int64_t t29 = -4481209275586610842LL;

	t29 = (x265%((x266/x267)*x268));

	if (t29 != 510842LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x277 = UINT32_MAX;
	int64_t x278 = INT64_MAX;
	volatile int32_t x279 = INT32_MAX;
	uint8_t x280 = UINT8_MAX;
	volatile int64_t t30 = 308203182LL;

	t30 = (x277%((x278/x279)*x280));

	if (t30 != 4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x286 = INT32_MIN;
	volatile uint32_t x287 = 262752632U;
	uint32_t x288 = UINT32_MAX;
	uint32_t t31 = 720270658U;

	t31 = (x285%((x286/x287)*x288));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x293 = -1;
	int32_t x294 = -422994;
	static uint64_t x295 = 1395657593248983686LLU;
	uint64_t t32 = 7LLU;

	t32 = (x293%((x294/x295)*x296));

	if (t32 != 571LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x317 = INT16_MIN;
	volatile uint16_t x318 = UINT16_MAX;
	int8_t x319 = 9;
	int16_t x320 = INT16_MIN;
	volatile int32_t t33 = -162;

	t33 = (x317%((x318/x319)*x320));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int16_t x322 = -1;
	uint32_t x323 = 12U;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t34 = 94LLU;

	t34 = (x321%((x322/x323)*x324));

	if (t34 != 1073741823LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x326 = 3587U;
	int8_t x327 = 1;
	int64_t t35 = -49029211784LL;

	t35 = (x325%((x326/x327)*x328));

	if (t35 != -10059776LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x341 = 81LLU;
	volatile int64_t x342 = INT64_MIN;
	volatile int8_t x343 = INT8_MIN;
	volatile uint64_t t36 = 80890553LLU;

	t36 = (x341%((x342/x343)*x344));

	if (t36 != 81LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x358 = UINT32_MAX;
	volatile int32_t x359 = INT32_MAX;
	int32_t x360 = -1;
	int64_t t37 = 397LL;

	t37 = (x357%((x358/x359)*x360));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x361 = -1;
	uint64_t x362 = 33825886LLU;
	static uint16_t x363 = UINT16_MAX;
	uint16_t x364 = 3098U;
	uint64_t t38 = 443998190779636937LLU;

	t38 = (x361%((x362/x363)*x364));

	if (t38 != 131319LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MIN;
	static int64_t x372 = 163476026LL;
	volatile int64_t t39 = 139192048LL;

	t39 = (x369%((x370/x371)*x372));

	if (t39 != -839675440LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x385 = 1499068U;
	volatile uint64_t x386 = 863877452358LLU;
	uint16_t x387 = UINT16_MAX;

	t40 = (x385%((x386/x387)*x388));

	if (t40 != 1499068LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x394 = UINT64_MAX;
	static int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	uint64_t t41 = 2177901059729326LLU;

	t41 = (x393%((x394/x395)*x396));

	if (t41 != 281474976808960LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x409 = INT16_MAX;
	volatile int8_t x411 = INT8_MIN;

	t42 = (x409%((x410/x411)*x412));

	if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x413 = -44LL;
	static int32_t x414 = 234867;
	uint8_t x415 = 17U;
	uint16_t x416 = UINT16_MAX;
	volatile int64_t t43 = -3103158LL;

	t43 = (x413%((x414/x415)*x416));

	if (t43 != -44LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x419 = -1;
	volatile uint32_t x420 = UINT32_MAX;
	static uint32_t t44 = 1U;

	t44 = (x417%((x418/x419)*x420));

	if (t44 != 27U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x421 = 12769U;
	static volatile uint64_t x422 = 1192093461331512LLU;
	int32_t x423 = 11303128;
	uint32_t x424 = UINT32_MAX;
	uint64_t t45 = 223372LLU;

	t45 = (x421%((x422/x423)*x424));

	if (t45 != 12769LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x429 = INT32_MIN;
	int16_t x432 = INT16_MAX;
	static volatile int64_t t46 = -3105LL;

	t46 = (x429%((x430/x431)*x432));

	if (t46 != -2LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x437 = -1;
	uint64_t x439 = 1LLU;
	static int8_t x440 = INT8_MAX;
	uint64_t t47 = 436471416079LLU;

	t47 = (x437%((x438/x439)*x440));

	if (t47 != 164325555LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x462 = INT64_MAX;
	static int8_t x463 = INT8_MIN;
	int8_t x464 = -1;
	static int64_t t48 = -38093365013981LL;

	t48 = (x461%((x462/x463)*x464));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x466 = INT16_MIN;
	static int16_t x467 = INT16_MAX;
	int16_t x468 = 25;
	int32_t t49 = -341551795;

	t49 = (x465%((x466/x467)*x468));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x477 = 270852426686074LLU;
	static int32_t x480 = INT32_MAX;
	volatile uint64_t t50 = 472LLU;

	t50 = (x477%((x478/x479)*x480));

	if (t50 != 1051708199LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x497 = 1;
	uint64_t x498 = UINT64_MAX;
	static int8_t x499 = INT8_MIN;
	uint16_t x500 = 2805U;
	static volatile uint64_t t51 = 7LLU;

	t51 = (x497%((x498/x499)*x500));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x501 = UINT64_MAX;
	static uint8_t x502 = UINT8_MAX;
	int8_t x504 = -1;
	static volatile uint64_t t52 = 3582702743809599244LLU;

	t52 = (x501%((x502/x503)*x504));

	if (t52 != 4LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x509 = INT32_MIN;
	volatile int16_t x510 = -1;
	uint32_t x511 = 94257860U;
	volatile uint32_t t53 = 509677603U;

	t53 = (x509%((x510/x511)*x512));

	if (t53 != 1523U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x513 = UINT32_MAX;
	static int8_t x516 = INT8_MIN;

	t54 = (x513%((x514/x515)*x516));

	if (t54 != 4294967295LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x517 = 385U;
	int8_t x520 = -37;

	t55 = (x517%((x518/x519)*x520));

	if (t55 != 385LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x521 = 6025;
	int64_t x522 = INT64_MAX;
	int8_t x523 = INT8_MIN;
	volatile int16_t x524 = 15;
	int64_t t56 = 17LL;

	t56 = (x521%((x522/x523)*x524));

	if (t56 != 6025LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x541 = INT8_MAX;
	static volatile int16_t x542 = INT16_MAX;
	int16_t x543 = -1;
	static uint64_t x544 = 9789242377408614LLU;
	volatile uint64_t t57 = 1059796378LLU;

	t57 = (x541%((x542/x543)*x544));

	if (t57 != 127LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x553 = -1;
	uint32_t x556 = 271310U;
	uint32_t t58 = 2427506U;

	t58 = (x553%((x554/x555)*x556));

	if (t58 != 129995U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x605 = INT32_MAX;
	uint8_t x606 = UINT8_MAX;
	static int8_t x607 = INT8_MIN;
	volatile int32_t t59 = -516518;

	t59 = (x605%((x606/x607)*x608));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x613 = INT16_MIN;
	uint32_t x614 = UINT32_MAX;
	int8_t x615 = 16;
	int32_t x616 = INT32_MAX;
	volatile uint32_t t60 = 0U;

	t60 = (x613%((x614/x615)*x616));

	if (t60 != 536838142U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x618 = UINT32_MAX;
	uint16_t x619 = 1454U;
	volatile int32_t x620 = -574789415;
	int64_t t61 = -1738756994034756202LL;

	t61 = (x617%((x618/x619)*x620));

	if (t61 != -370113032LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x622 = 1U;
	int32_t x623 = -1;
	uint32_t t62 = 246829U;

	t62 = (x621%((x622/x623)*x624));

	if (t62 != 35U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x633 = UINT8_MAX;
	int8_t x635 = 3;
	volatile int32_t t63 = 320706;

	t63 = (x633%((x634/x635)*x636));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x657 = -1;
	uint8_t x659 = 1U;
	volatile int16_t x660 = INT16_MIN;
	int32_t t64 = 5320;

	t64 = (x657%((x658/x659)*x660));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x673 = 7153040U;
	static int64_t x675 = INT64_MIN;
	uint32_t x676 = 24579792U;
	int64_t t65 = 129895LL;

	t65 = (x673%((x674/x675)*x676));

	if (t65 != 7153040LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x685 = INT32_MIN;
	uint16_t x686 = 7U;
	volatile int16_t x687 = 4;
	uint64_t x688 = 7176486012LLU;
	uint64_t t66 = 2LLU;

	t66 = (x685%((x686/x687)*x688));

	if (t66 != 6957124940LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x693 = 3;
	int32_t x694 = INT32_MIN;
	int16_t x695 = 498;
	static volatile int32_t t67 = 3210;

	t67 = (x693%((x694/x695)*x696));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x701 = -1;
	volatile int64_t t68 = 602LL;

	t68 = (x701%((x702/x703)*x704));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x710 = -26912LL;
	int16_t x711 = -126;
	int16_t x712 = INT16_MIN;
	int64_t t69 = 28118633979414LL;

	t69 = (x709%((x710/x711)*x712));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x713 = -1;
	int16_t x714 = INT16_MIN;
	int16_t x715 = INT16_MIN;
	int64_t x716 = INT64_MAX;
	volatile int64_t t70 = 20LL;

	t70 = (x713%((x714/x715)*x716));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x727 = 14366080075292LLU;
	static int8_t x728 = INT8_MAX;
	volatile uint64_t t71 = 7530716220LLU;

	t71 = (x725%((x726/x727)*x728));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x757 = 13U;
	uint64_t x758 = UINT64_MAX;
	uint64_t x759 = 2763758LLU;
	volatile int8_t x760 = INT8_MAX;
	volatile uint64_t t72 = 2LLU;

	t72 = (x757%((x758/x759)*x760));

	if (t72 != 13LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x769 = -4;
	int16_t x772 = INT16_MIN;
	volatile uint32_t t73 = 25538009U;

	t73 = (x769%((x770/x771)*x772));

	if (t73 != 1579352060U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x773 = 16335;
	static int16_t x774 = -12196;
	int8_t x775 = INT8_MIN;
	int16_t x776 = INT16_MIN;

	t74 = (x773%((x774/x775)*x776));

	if (t74 != 16335) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x793 = -49157LL;
	static int16_t x794 = 2;
	volatile int64_t x796 = 753718589756164LL;

	t75 = (x793%((x794/x795)*x796));

	if (t75 != -49157LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x797 = UINT64_MAX;
	int8_t x798 = INT8_MIN;
	uint64_t x799 = 3164024167408736171LLU;
	int32_t x800 = INT32_MAX;

	t76 = (x797%((x798/x799)*x800));

	if (t76 != 2147483650LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x813 = UINT32_MAX;
	int32_t x814 = 655744;
	int16_t x815 = -5;
	volatile uint64_t x816 = UINT64_MAX;
	uint64_t t77 = 148890201LLU;

	t77 = (x813%((x814/x815)*x816));

	if (t77 != 1443LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x821 = 22576U;
	int8_t x824 = -1;
	static int32_t t78 = 43;

	t78 = (x821%((x822/x823)*x824));

	if (t78 != 1882) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x838 = -1;
	volatile uint32_t x839 = 7U;
	int8_t x840 = INT8_MIN;
	uint32_t t79 = 716786U;

	t79 = (x837%((x838/x839)*x840));

	if (t79 != 30868U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x841 = UINT16_MAX;
	int8_t x842 = INT8_MAX;
	int16_t x843 = -1;
	static volatile int64_t x844 = -1LL;

	t80 = (x841%((x842/x843)*x844));

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x849 = 1;
	int8_t x850 = INT8_MIN;
	uint32_t x851 = 13U;
	volatile uint64_t x852 = 3LLU;
	volatile uint64_t t81 = 34224791699341351LLU;

	t81 = (x849%((x850/x851)*x852));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x869 = INT64_MAX;
	int32_t x871 = -1;
	int64_t x872 = -1592514257LL;
	static uint64_t t82 = 2053902602LLU;

	t82 = (x869%((x870/x871)*x872));

	if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x873 = INT16_MAX;
	volatile int32_t x874 = -56286810;
	static uint64_t x875 = 2083958LLU;
	static volatile int8_t x876 = -41;

	t83 = (x873%((x874/x875)*x876));

	if (t83 != 32767LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x881 = -7904;
	volatile int32_t x883 = -1;
	static volatile uint32_t t84 = 137221U;

	t84 = (x881%((x882/x883)*x884));

	if (t84 != 69936U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x885 = 7;
	int32_t x886 = -1;
	volatile int8_t x888 = -1;
	int32_t t85 = 229321;

	t85 = (x885%((x886/x887)*x888));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x889 = -10164;
	int64_t x890 = -58075341862880LL;
	int8_t x892 = INT8_MIN;
	int64_t t86 = 120LL;

	t86 = (x889%((x890/x891)*x892));

	if (t86 != -10164LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x893 = INT32_MIN;
	volatile int16_t x896 = INT16_MAX;
	static int32_t t87 = 281;

	t87 = (x893%((x894/x895)*x896));

	if (t87 != -101643236) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x905 = 96416283;
	static int32_t x906 = -18;
	int8_t x907 = -1;
	uint64_t x908 = 28LLU;
	volatile uint64_t t88 = 365599529017849LLU;

	t88 = (x905%((x906/x907)*x908));

	if (t88 != 75LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x961 = -1;
	int32_t x962 = INT32_MIN;
	int32_t x963 = INT32_MIN;
	int8_t x964 = -1;
	volatile int32_t t89 = -944;

	t89 = (x961%((x962/x963)*x964));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x973 = -1LL;
	int32_t x974 = -7738;
	int8_t x975 = -26;
	int32_t x976 = -1;
	volatile int64_t t90 = 36LL;

	t90 = (x973%((x974/x975)*x976));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x981 = INT16_MIN;
	volatile int8_t x982 = 1;
	int8_t x983 = -1;
	volatile int32_t x984 = 9881333;
	static volatile int32_t t91 = 1;

	t91 = (x981%((x982/x983)*x984));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x990 = -467987;
	uint64_t x991 = 522678151LLU;
	volatile uint64_t t92 = 9754LLU;

	t92 = (x989%((x990/x991)*x992));

	if (t92 != 11LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x994 = INT64_MAX;
	volatile int16_t x996 = INT16_MIN;
	static int64_t t93 = 7LL;

	t93 = (x993%((x994/x995)*x996));

	if (t93 != 43LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x1017 = 26241U;
	uint32_t x1018 = UINT32_MAX;
	int32_t x1019 = INT32_MIN;
	volatile uint32_t t94 = 15U;

	t94 = (x1017%((x1018/x1019)*x1020));

	if (t94 != 7U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x1021 = 3U;
	uint8_t x1022 = UINT8_MAX;
	static volatile int8_t x1023 = INT8_MAX;
	int64_t x1024 = -3201263459726091810LL;
	volatile int64_t t95 = -127119306980791536LL;

	t95 = (x1021%((x1022/x1023)*x1024));

	if (t95 != 3LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1025 = INT32_MAX;
	int32_t x1026 = -1;
	int8_t x1027 = -1;
	int32_t x1028 = INT32_MIN;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x1025%((x1026/x1027)*x1028));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1029 = INT64_MIN;
	uint64_t x1032 = 8192930LLU;

	t97 = (x1029%((x1030/x1031)*x1032));

	if (t97 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x1033 = 0;
	uint64_t x1034 = UINT64_MAX;
	int8_t x1035 = INT8_MIN;
	static int8_t x1036 = INT8_MAX;

	t98 = (x1033%((x1034/x1035)*x1036));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x1042 = UINT32_MAX;
	static uint8_t x1043 = 11U;

	t99 = (x1041%((x1042/x1043)*x1044));

	if (t99 != 390451571U) { NG(); } else { ; }
	
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

