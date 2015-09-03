#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 129U;
int32_t t0 = 43074803;
int8_t x14 = INT8_MIN;
uint8_t x16 = 2U;
static volatile int16_t x20 = INT16_MAX;
int8_t x34 = -1;
static uint8_t x37 = 90U;
uint16_t x38 = 499U;
static volatile uint16_t x39 = UINT16_MAX;
int32_t t4 = 0;
volatile int32_t t9 = -4;
static uint16_t x114 = 20U;
uint8_t x118 = 41U;
uint16_t x147 = UINT16_MAX;
int64_t x149 = INT64_MAX;
int64_t x151 = INT64_MIN;
volatile int32_t t15 = 3;
uint8_t x164 = 2U;
uint64_t x170 = 12LLU;
uint64_t x201 = UINT64_MAX;
static int8_t x204 = 31;
int64_t x254 = INT64_MIN;
uint32_t x325 = 6441093U;
int32_t t22 = -116949;
int16_t x402 = -1;
uint32_t x418 = 2176U;
static int64_t x435 = -1560845181024LL;
static int32_t x437 = INT32_MAX;
volatile int32_t t30 = 151;
static uint8_t x466 = 0U;
static int32_t x468 = INT32_MIN;
volatile int32_t t31 = -1;
static uint32_t x473 = 68U;
volatile int32_t t33 = -1;
uint64_t x524 = UINT64_MAX;
static int64_t x577 = INT64_MAX;
int16_t x578 = INT16_MAX;
static volatile int32_t x593 = INT32_MAX;
int32_t x594 = -1;
uint16_t x595 = UINT16_MAX;
int32_t x606 = -1;
uint16_t x611 = UINT16_MAX;
int64_t x649 = INT64_MAX;
int64_t x650 = -27LL;
int64_t x671 = INT64_MAX;
volatile int32_t t42 = -9878292;
volatile int32_t t43 = -550;
int16_t x683 = INT16_MIN;
int8_t x695 = INT8_MIN;
int8_t x753 = 33;
uint16_t x754 = 9U;
int32_t t49 = 29;
int8_t x766 = INT8_MAX;
volatile int16_t x768 = INT16_MIN;
uint32_t x808 = 13U;
int16_t x829 = 29;
int16_t x830 = 0;
uint16_t x832 = 939U;
uint16_t x836 = 46U;
volatile int32_t t53 = 6;
uint16_t x845 = 3U;
int32_t t54 = 1;
uint64_t x850 = 942157219911LLU;
uint16_t x857 = 593U;
static uint16_t x925 = UINT16_MAX;
int32_t x935 = INT32_MIN;
int64_t x947 = INT64_MIN;
int64_t x977 = 149395565791183082LL;
uint16_t x978 = UINT16_MAX;
int64_t x994 = 83275768LL;
volatile int64_t x995 = 30851896375075LL;
volatile uint32_t x999 = UINT32_MAX;
uint32_t x1004 = 6U;
volatile int32_t t67 = 27;
int32_t x1005 = 1329;
static int64_t x1008 = INT64_MAX;
int32_t x1013 = INT32_MAX;
int8_t x1014 = -7;
int32_t x1015 = 13;
int64_t x1027 = 7101002786760LL;
volatile uint16_t x1055 = 2558U;
uint16_t x1056 = 533U;
int8_t x1058 = 6;
static volatile int32_t t73 = 926852;
int8_t x1061 = INT8_MAX;
uint8_t x1107 = 3U;
int64_t x1118 = INT64_MIN;
static int32_t t76 = 5;
int16_t x1122 = 10;
uint16_t x1124 = 1U;
static uint16_t x1137 = UINT16_MAX;
int8_t x1138 = -1;
uint16_t x1140 = 3U;
uint16_t x1141 = 1U;
uint64_t x1146 = UINT64_MAX;
volatile int32_t t81 = 0;
int32_t x1160 = 480;
int32_t t82 = -745691654;
int64_t x1176 = INT64_MIN;
volatile int32_t t83 = -32;
uint16_t x1197 = UINT16_MAX;
int32_t x1199 = INT32_MIN;
int64_t x1200 = INT64_MAX;
uint32_t x1205 = 3109359U;
volatile int64_t x1223 = INT64_MIN;
static int8_t x1231 = -1;
static int8_t x1253 = 0;
int16_t x1257 = 4;
static int16_t x1259 = INT16_MIN;
int32_t t90 = -4001;
int64_t x1300 = INT64_MIN;
volatile uint16_t x1314 = UINT16_MAX;
uint16_t x1336 = 2857U;
volatile int32_t t99 = -143;


void f0(void) {
	uint8_t x1 = 2U;
	int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MAX;

	t0 = ((x1<<(x2/x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = 12U;
	int16_t x15 = -13753;
	static int32_t t1 = -5;

	t1 = ((x13<<(x14/x15))<=x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x17 = 51U;
	int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MIN;
	int32_t t2 = -737;

	t2 = ((x17<<(x18/x19))<=x20);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x33 = INT8_MAX;
	volatile uint32_t x35 = UINT32_MAX;
	static int64_t x36 = INT64_MIN;
	int32_t t3 = -718062;

	t3 = ((x33<<(x34/x35))<=x36);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x40 = INT32_MIN;

	t4 = ((x37<<(x38/x39))<=x40);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int64_t x70 = -1LL;
	int32_t x71 = INT32_MAX;
	static uint8_t x72 = UINT8_MAX;
	int32_t t5 = 669799099;

	t5 = ((x69<<(x70/x71))<=x72);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x73 = 811U;
	uint64_t x74 = 65829727896034LLU;
	int8_t x75 = -1;
	int32_t x76 = INT32_MIN;
	int32_t t6 = -172;

	t6 = ((x73<<(x74/x75))<=x76);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x89 = 3U;
	uint32_t x90 = 1106026U;
	int32_t x91 = INT32_MIN;
	int8_t x92 = -2;
	int32_t t7 = 1005752;

	t7 = ((x89<<(x90/x91))<=x92);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x101 = 127091U;
	int64_t x102 = -51409LL;
	volatile int64_t x103 = INT64_MIN;
	volatile uint32_t x104 = UINT32_MAX;
	int32_t t8 = 131857519;

	t8 = ((x101<<(x102/x103))<=x104);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x105 = 47U;
	static uint32_t x106 = 580925U;
	int16_t x107 = -3;
	int8_t x108 = -21;

	t9 = ((x105<<(x106/x107))<=x108);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x113 = 7;
	int64_t x115 = -31234449LL;
	uint16_t x116 = 199U;
	static volatile int32_t t10 = -99216;

	t10 = ((x113<<(x114/x115))<=x116);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x117 = 416275467508640157LL;
	int8_t x119 = INT8_MIN;
	volatile uint16_t x120 = UINT16_MAX;
	int32_t t11 = 415;

	t11 = ((x117<<(x118/x119))<=x120);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x121 = 2265U;
	uint16_t x122 = 1880U;
	volatile int16_t x123 = INT16_MIN;
	int32_t x124 = -1;
	volatile int32_t t12 = 2;

	t12 = ((x121<<(x122/x123))<=x124);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x129 = UINT64_MAX;
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MAX;
	int64_t x132 = INT64_MIN;
	volatile int32_t t13 = 0;

	t13 = ((x129<<(x130/x131))<=x132);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x145 = INT32_MAX;
	static uint32_t x146 = 739U;
	int32_t x148 = 1;
	volatile int32_t t14 = -252534840;

	t14 = ((x145<<(x146/x147))<=x148);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x150 = 1416U;
	int8_t x152 = -31;

	t15 = ((x149<<(x150/x151))<=x152);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x161 = 32520143779LL;
	uint32_t x162 = 1U;
	uint64_t x163 = UINT64_MAX;
	static int32_t t16 = -5056;

	t16 = ((x161<<(x162/x163))<=x164);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x169 = 11U;
	static int16_t x171 = INT16_MAX;
	volatile int64_t x172 = INT64_MAX;
	int32_t t17 = 631;

	t17 = ((x169<<(x170/x171))<=x172);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	static volatile int32_t t18 = -1596562;

	t18 = ((x201<<(x202/x203))<=x204);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x253 = UINT64_MAX;
	static int64_t x255 = INT64_MIN;
	static uint16_t x256 = 3U;
	volatile int32_t t19 = 487519354;

	t19 = ((x253<<(x254/x255))<=x256);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x277 = UINT16_MAX;
	int16_t x278 = -1;
	volatile int64_t x279 = INT64_MIN;
	int64_t x280 = -1LL;
	static int32_t t20 = -215;

	t20 = ((x277<<(x278/x279))<=x280);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MIN;
	volatile int32_t t21 = 469770241;

	t21 = ((x301<<(x302/x303))<=x304);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x326 = -4;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -83;

	t22 = ((x325<<(x326/x327))<=x328);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x337 = UINT8_MAX;
	uint8_t x338 = 0U;
	int64_t x339 = -1LL;
	volatile uint64_t x340 = UINT64_MAX;
	static volatile int32_t t23 = -8213963;

	t23 = ((x337<<(x338/x339))<=x340);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x345 = UINT32_MAX;
	volatile uint8_t x346 = 60U;
	int16_t x347 = -3246;
	uint32_t x348 = 1407U;
	static int32_t t24 = 2341;

	t24 = ((x345<<(x346/x347))<=x348);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x401 = INT16_MAX;
	int16_t x403 = INT16_MAX;
	uint32_t x404 = 29728798U;
	int32_t t25 = -861;

	t25 = ((x401<<(x402/x403))<=x404);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x417 = 1011LL;
	int16_t x419 = INT16_MIN;
	static volatile uint16_t x420 = 0U;
	static int32_t t26 = 163569;

	t26 = ((x417<<(x418/x419))<=x420);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x433 = INT32_MAX;
	static int8_t x434 = INT8_MIN;
	int8_t x436 = INT8_MIN;
	volatile int32_t t27 = 8;

	t27 = ((x433<<(x434/x435))<=x436);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x438 = 0LL;
	int64_t x439 = INT64_MIN;
	static uint16_t x440 = 43U;
	volatile int32_t t28 = -29636;

	t28 = ((x437<<(x438/x439))<=x440);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x445 = UINT32_MAX;
	volatile int64_t x446 = INT64_MIN;
	int64_t x447 = INT64_MIN;
	uint64_t x448 = 287360736956LLU;
	int32_t t29 = 1652;

	t29 = ((x445<<(x446/x447))<=x448);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x461 = INT16_MAX;
	uint32_t x462 = 168U;
	uint32_t x463 = 64805567U;
	int32_t x464 = INT32_MAX;

	t30 = ((x461<<(x462/x463))<=x464);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x465 = 19;
	int16_t x467 = -1;

	t31 = ((x465<<(x466/x467))<=x468);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x474 = INT8_MAX;
	uint8_t x475 = UINT8_MAX;
	int16_t x476 = -3290;
	volatile int32_t t32 = 3435568;

	t32 = ((x473<<(x474/x475))<=x476);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x481 = UINT16_MAX;
	int16_t x482 = INT16_MIN;
	static int64_t x483 = INT64_MIN;
	uint16_t x484 = UINT16_MAX;

	t33 = ((x481<<(x482/x483))<=x484);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x513 = 7379U;
	int32_t x514 = INT32_MAX;
	int64_t x515 = INT64_MAX;
	static int16_t x516 = -1;
	volatile int32_t t34 = -2;

	t34 = ((x513<<(x514/x515))<=x516);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x521 = INT64_MAX;
	int8_t x522 = INT8_MIN;
	int64_t x523 = -44023714LL;
	int32_t t35 = -116;

	t35 = ((x521<<(x522/x523))<=x524);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x579 = INT32_MIN;
	volatile uint64_t x580 = 2773LLU;
	static volatile int32_t t36 = 1478800;

	t36 = ((x577<<(x578/x579))<=x580);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x581 = 1;
	volatile int8_t x582 = INT8_MIN;
	int16_t x583 = -210;
	uint64_t x584 = UINT64_MAX;
	int32_t t37 = 492;

	t37 = ((x581<<(x582/x583))<=x584);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x596 = INT64_MAX;
	int32_t t38 = 0;

	t38 = ((x593<<(x594/x595))<=x596);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x605 = 813195553U;
	int32_t x607 = -1;
	int8_t x608 = 2;
	static volatile int32_t t39 = 18;

	t39 = ((x605<<(x606/x607))<=x608);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x609 = 3U;
	static uint16_t x610 = 43U;
	volatile int8_t x612 = -3;
	volatile int32_t t40 = 986545;

	t40 = ((x609<<(x610/x611))<=x612);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x651 = 26619U;
	volatile uint16_t x652 = 432U;
	int32_t t41 = 3903;

	t41 = ((x649<<(x650/x651))<=x652);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x669 = INT16_MAX;
	volatile int32_t x670 = -218605986;
	static int8_t x672 = 8;

	t42 = ((x669<<(x670/x671))<=x672);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x673 = 1;
	int32_t x674 = INT32_MIN;
	static volatile uint32_t x675 = UINT32_MAX;
	int8_t x676 = INT8_MIN;

	t43 = ((x673<<(x674/x675))<=x676);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x681 = 44LLU;
	int16_t x682 = INT16_MIN;
	volatile int64_t x684 = INT64_MAX;
	int32_t t44 = -184266838;

	t44 = ((x681<<(x682/x683))<=x684);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x693 = 926;
	uint64_t x694 = 856980061593172713LLU;
	static int32_t x696 = INT32_MIN;
	static int32_t t45 = -101133003;

	t45 = ((x693<<(x694/x695))<=x696);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x705 = UINT64_MAX;
	uint64_t x706 = UINT64_MAX;
	int32_t x707 = -1;
	uint16_t x708 = 22083U;
	int32_t t46 = -341253;

	t46 = ((x705<<(x706/x707))<=x708);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x713 = INT8_MAX;
	uint64_t x714 = UINT64_MAX;
	int32_t x715 = -4;
	volatile int8_t x716 = INT8_MIN;
	int32_t t47 = -1;

	t47 = ((x713<<(x714/x715))<=x716);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x755 = INT32_MAX;
	int8_t x756 = INT8_MIN;
	static volatile int32_t t48 = -51900;

	t48 = ((x753<<(x754/x755))<=x756);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x761 = 2948927LLU;
	uint64_t x762 = 19LLU;
	uint32_t x763 = 69U;
	int32_t x764 = 13569;

	t49 = ((x761<<(x762/x763))<=x764);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x765 = 79501LL;
	int32_t x767 = INT32_MIN;
	static int32_t t50 = 220;

	t50 = ((x765<<(x766/x767))<=x768);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x805 = 1544U;
	static uint16_t x806 = 709U;
	uint64_t x807 = 88293850492982075LLU;
	volatile int32_t t51 = 15178944;

	t51 = ((x805<<(x806/x807))<=x808);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x831 = -7;
	volatile int32_t t52 = -148237;

	t52 = ((x829<<(x830/x831))<=x832);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x833 = 572;
	static uint8_t x834 = UINT8_MAX;
	volatile int64_t x835 = INT64_MIN;

	t53 = ((x833<<(x834/x835))<=x836);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x846 = -1;
	int16_t x847 = 7;
	volatile uint32_t x848 = 558561619U;

	t54 = ((x845<<(x846/x847))<=x848);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x849 = 2903U;
	int16_t x851 = -1;
	int64_t x852 = INT64_MIN;
	volatile int32_t t55 = -3;

	t55 = ((x849<<(x850/x851))<=x852);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x858 = -1;
	volatile uint32_t x859 = UINT32_MAX;
	uint64_t x860 = UINT64_MAX;
	volatile int32_t t56 = -897595;

	t56 = ((x857<<(x858/x859))<=x860);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x865 = INT32_MAX;
	int32_t x866 = -1;
	static int8_t x867 = INT8_MAX;
	volatile uint32_t x868 = UINT32_MAX;
	volatile int32_t t57 = 2586649;

	t57 = ((x865<<(x866/x867))<=x868);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x897 = 4U;
	uint8_t x898 = 0U;
	int32_t x899 = -1;
	volatile int64_t x900 = INT64_MIN;
	int32_t t58 = 20412;

	t58 = ((x897<<(x898/x899))<=x900);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x926 = 92633351521552LLU;
	static int32_t x927 = INT32_MIN;
	uint64_t x928 = UINT64_MAX;
	int32_t t59 = -179533707;

	t59 = ((x925<<(x926/x927))<=x928);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x933 = 1LL;
	static int32_t x934 = INT32_MAX;
	int8_t x936 = INT8_MAX;
	volatile int32_t t60 = 1661;

	t60 = ((x933<<(x934/x935))<=x936);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x945 = 2821412975450LLU;
	uint32_t x946 = 242U;
	volatile int16_t x948 = INT16_MIN;
	static volatile int32_t t61 = 1645893;

	t61 = ((x945<<(x946/x947))<=x948);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x961 = 0U;
	int8_t x962 = INT8_MIN;
	static int8_t x963 = INT8_MIN;
	volatile uint8_t x964 = 1U;
	int32_t t62 = 4029455;

	t62 = ((x961<<(x962/x963))<=x964);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x969 = 13;
	uint8_t x970 = 26U;
	uint64_t x971 = 1262634084654259LLU;
	static int8_t x972 = 0;
	int32_t t63 = 4072678;

	t63 = ((x969<<(x970/x971))<=x972);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x979 = 1014854LLU;
	volatile int8_t x980 = INT8_MIN;
	int32_t t64 = 273;

	t64 = ((x977<<(x978/x979))<=x980);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x993 = 1U;
	volatile int16_t x996 = INT16_MIN;
	int32_t t65 = -127452448;

	t65 = ((x993<<(x994/x995))<=x996);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x997 = 12U;
	uint8_t x998 = UINT8_MAX;
	int32_t x1000 = INT32_MIN;
	int32_t t66 = -10;

	t66 = ((x997<<(x998/x999))<=x1000);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x1001 = UINT64_MAX;
	volatile uint16_t x1002 = 9U;
	int32_t x1003 = -4988257;

	t67 = ((x1001<<(x1002/x1003))<=x1004);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x1006 = 691U;
	static int64_t x1007 = 1890396LL;
	volatile int32_t t68 = -1;

	t68 = ((x1005<<(x1006/x1007))<=x1008);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x1016 = 1;
	int32_t t69 = -310475284;

	t69 = ((x1013<<(x1014/x1015))<=x1016);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1025 = UINT16_MAX;
	uint64_t x1026 = 117905LLU;
	static int8_t x1028 = -1;
	int32_t t70 = 1008497;

	t70 = ((x1025<<(x1026/x1027))<=x1028);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1029 = INT8_MAX;
	uint16_t x1030 = 0U;
	uint64_t x1031 = 1029540LLU;
	int32_t x1032 = INT32_MIN;
	volatile int32_t t71 = -34;

	t71 = ((x1029<<(x1030/x1031))<=x1032);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x1053 = 900U;
	int8_t x1054 = INT8_MIN;
	volatile int32_t t72 = -915;

	t72 = ((x1053<<(x1054/x1055))<=x1056);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1057 = 239167615LL;
	int32_t x1059 = 1793;
	static volatile int64_t x1060 = INT64_MIN;

	t73 = ((x1057<<(x1058/x1059))<=x1060);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x1062 = UINT32_MAX;
	static uint64_t x1063 = UINT64_MAX;
	static int64_t x1064 = INT64_MIN;
	volatile int32_t t74 = -7756;

	t74 = ((x1061<<(x1062/x1063))<=x1064);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x1105 = UINT64_MAX;
	volatile int32_t x1106 = -1;
	int32_t x1108 = -124702;
	int32_t t75 = -33306121;

	t75 = ((x1105<<(x1106/x1107))<=x1108);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x1117 = 1U;
	static volatile uint64_t x1119 = 390938348320858892LLU;
	static int8_t x1120 = 2;

	t76 = ((x1117<<(x1118/x1119))<=x1120);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x1121 = 903286;
	int64_t x1123 = INT64_MIN;
	static int32_t t77 = 3;

	t77 = ((x1121<<(x1122/x1123))<=x1124);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x1133 = 959129;
	volatile int16_t x1134 = 3448;
	static uint64_t x1135 = UINT64_MAX;
	volatile int8_t x1136 = -1;
	volatile int32_t t78 = -4066884;

	t78 = ((x1133<<(x1134/x1135))<=x1136);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x1139 = INT32_MIN;
	int32_t t79 = -20958073;

	t79 = ((x1137<<(x1138/x1139))<=x1140);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1142 = -1;
	uint16_t x1143 = UINT16_MAX;
	uint64_t x1144 = 894601493LLU;
	int32_t t80 = -16006;

	t80 = ((x1141<<(x1142/x1143))<=x1144);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1145 = INT16_MAX;
	int64_t x1147 = INT64_MIN;
	uint16_t x1148 = 7474U;

	t81 = ((x1145<<(x1146/x1147))<=x1148);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1157 = 65522118LL;
	int32_t x1158 = 1414;
	static volatile uint64_t x1159 = 14825209930LLU;

	t82 = ((x1157<<(x1158/x1159))<=x1160);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1173 = INT64_MAX;
	volatile int64_t x1174 = INT64_MAX;
	volatile uint64_t x1175 = UINT64_MAX;

	t83 = ((x1173<<(x1174/x1175))<=x1176);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x1185 = INT8_MAX;
	static int8_t x1186 = 33;
	int16_t x1187 = 65;
	volatile int16_t x1188 = INT16_MAX;
	static int32_t t84 = 7191072;

	t84 = ((x1185<<(x1186/x1187))<=x1188);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1198 = 17U;
	static int32_t t85 = 0;

	t85 = ((x1197<<(x1198/x1199))<=x1200);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1206 = UINT32_MAX;
	int8_t x1207 = -59;
	int16_t x1208 = -1;
	static volatile int32_t t86 = 57546;

	t86 = ((x1205<<(x1206/x1207))<=x1208);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1221 = UINT32_MAX;
	static uint64_t x1222 = UINT64_MAX;
	int64_t x1224 = INT64_MAX;
	volatile int32_t t87 = 2186;

	t87 = ((x1221<<(x1222/x1223))<=x1224);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x1229 = 270501845U;
	int32_t x1230 = -1;
	uint64_t x1232 = 14LLU;
	volatile int32_t t88 = 0;

	t88 = ((x1229<<(x1230/x1231))<=x1232);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1254 = -1LL;
	volatile uint32_t x1255 = 416367U;
	volatile int8_t x1256 = -1;
	static int32_t t89 = -37137;

	t89 = ((x1253<<(x1254/x1255))<=x1256);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1258 = -1518;
	volatile int32_t x1260 = INT32_MIN;

	t90 = ((x1257<<(x1258/x1259))<=x1260);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x1289 = 0U;
	int16_t x1290 = 11;
	int64_t x1291 = INT64_MAX;
	volatile int16_t x1292 = INT16_MIN;
	int32_t t91 = 1;

	t91 = ((x1289<<(x1290/x1291))<=x1292);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x1297 = 1U;
	int8_t x1298 = -1;
	uint16_t x1299 = 656U;
	static volatile int32_t t92 = -1120142;

	t92 = ((x1297<<(x1298/x1299))<=x1300);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x1305 = UINT64_MAX;
	static volatile int16_t x1306 = INT16_MIN;
	static int64_t x1307 = INT64_MIN;
	int32_t x1308 = -21469;
	volatile int32_t t93 = 72093346;

	t93 = ((x1305<<(x1306/x1307))<=x1308);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1309 = 0;
	static int16_t x1310 = INT16_MIN;
	uint16_t x1311 = UINT16_MAX;
	int64_t x1312 = -1LL;
	volatile int32_t t94 = 1;

	t94 = ((x1309<<(x1310/x1311))<=x1312);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1313 = 63414600378996LLU;
	uint64_t x1315 = 273709756098278825LLU;
	int16_t x1316 = INT16_MIN;
	volatile int32_t t95 = -1928;

	t95 = ((x1313<<(x1314/x1315))<=x1316);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1317 = UINT64_MAX;
	volatile int16_t x1318 = 10;
	volatile int8_t x1319 = 1;
	static int64_t x1320 = INT64_MIN;
	volatile int32_t t96 = 85;

	t96 = ((x1317<<(x1318/x1319))<=x1320);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x1329 = 2;
	uint64_t x1330 = UINT64_MAX;
	volatile int32_t x1331 = -1;
	uint64_t x1332 = UINT64_MAX;
	volatile int32_t t97 = -397068;

	t97 = ((x1329<<(x1330/x1331))<=x1332);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1333 = 896119654991697703LL;
	volatile uint32_t x1334 = 76035899U;
	int64_t x1335 = 6567169647810949LL;
	int32_t t98 = -15;

	t98 = ((x1333<<(x1334/x1335))<=x1336);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1337 = UINT16_MAX;
	uint32_t x1338 = 9U;
	volatile uint32_t x1339 = UINT32_MAX;
	uint16_t x1340 = UINT16_MAX;

	t99 = ((x1337<<(x1338/x1339))<=x1340);

	if (t99 != 1) { NG(); } else { ; }
	
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

