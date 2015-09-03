#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x139 = 1U;
int32_t t2 = INT32_MIN;
int8_t x270 = 3;
int16_t x315 = -1;
static uint8_t x445 = UINT8_MAX;
int64_t t6 = 7605747467LL;
static uint8_t x691 = 1U;
int32_t t8 = 4;
static int32_t x927 = INT32_MIN;
int8_t x1104 = -1;
int32_t x1112 = INT32_MAX;
static volatile int32_t t13 = 1111654;
int64_t x1174 = INT64_MIN;
int32_t x1176 = -1;
int16_t x1406 = 0;
static int32_t x1407 = -1;
uint64_t x1654 = UINT64_MAX;
volatile uint64_t t19 = 14485LLU;
int64_t x1672 = INT64_MAX;
volatile int16_t x1751 = INT16_MIN;
static uint32_t x1890 = 9434076U;
volatile int16_t x1956 = -1;
int64_t x2225 = -1LL;
volatile uint32_t x2228 = UINT32_MAX;
uint32_t x2393 = 4U;
static volatile int64_t x2394 = -1LL;
int64_t x2486 = -134537704421LL;
volatile int8_t x2487 = INT8_MIN;
int16_t x2523 = -1;
uint64_t t29 = 5279745689458LLU;
uint32_t x2534 = 455U;
int16_t x2536 = -1;
static int8_t x2741 = -1;
volatile int64_t t33 = 218214803476559500LL;
uint64_t x2930 = 14638903266353977LLU;
static uint32_t x2931 = UINT32_MAX;
uint32_t x3162 = 2276186U;
int8_t x3553 = 1;
volatile int64_t t43 = -11925890709818LL;
static int8_t x3894 = INT8_MAX;
int64_t x3926 = -1LL;
uint32_t x4181 = 199638932U;
uint16_t x4229 = UINT16_MAX;
int32_t t48 = 0;
int32_t x4362 = INT32_MAX;
static int16_t x4383 = -1;
int64_t x4393 = -1LL;
int8_t x4395 = -1;
volatile uint32_t x4561 = 25U;
static volatile int32_t x4563 = -1;
int16_t x4638 = INT16_MAX;
volatile int32_t x4640 = INT32_MAX;
uint8_t x4773 = 17U;
int64_t x4775 = -1LL;
int32_t x4827 = -1;
int16_t x4878 = 1340;
int64_t t57 = 1010595LL;
int16_t x5069 = 0;
int16_t x5071 = -1;
volatile int64_t t62 = 45536715LL;
uint64_t x5332 = UINT64_MAX;
static uint16_t x5550 = 4132U;
static int16_t x5551 = -1;
volatile int32_t t66 = 12156788;
static uint8_t x5586 = 1U;
int32_t x5587 = INT32_MIN;
int32_t x5752 = -1;
int64_t x5987 = -1LL;
volatile int8_t x6030 = 1;
int16_t x6429 = -1;
uint64_t x6473 = 2892329841356938773LLU;
static uint64_t x6474 = 341672172LLU;
int32_t x6600 = -1;
int8_t x6880 = -1;
int16_t x6951 = -1;
static int16_t x7042 = INT16_MIN;
uint32_t x7266 = UINT32_MAX;
uint32_t t88 = 203459U;
int64_t x7547 = -1LL;
volatile int32_t t90 = -336280;
int16_t x7574 = INT16_MIN;
uint32_t t91 = 1997147U;
uint8_t x7685 = 99U;
volatile int8_t x7688 = -1;
volatile uint64_t t94 = 2900931LLU;
uint16_t x8047 = UINT16_MAX;
uint16_t x8048 = UINT16_MAX;
int16_t x8063 = INT16_MIN;
int16_t x8064 = INT16_MIN;
uint8_t x8284 = UINT8_MAX;


void f0(void) {
	volatile uint32_t x1 = 54026969U;
	static int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	int32_t x4 = INT32_MIN;
	uint32_t t0 = 11U;

	t0 = (x1^(x2%(x3==x4)));

	if (t0 != 54026969U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x137 = UINT64_MAX;
	uint16_t x138 = 61U;
	uint32_t x140 = 1U;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x137^(x138%(x139==x140)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MIN;
	int8_t x239 = -1;
	uint32_t x240 = UINT32_MAX;

	t2 = (x237^(x238%(x239==x240)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x269 = 2U;
	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t3 = -102;

	t3 = (x269^(x270%(x271==x272)));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x301 = 848247LLU;
	volatile int64_t x302 = INT64_MIN;
	int16_t x303 = -1;
	int64_t x304 = -1LL;
	static uint64_t t4 = 50824LLU;

	t4 = (x301^(x302%(x303==x304)));

	if (t4 != 848247LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x313 = 11681840LLU;
	uint32_t x314 = 319U;
	int32_t x316 = -1;
	uint64_t t5 = 11079569662792LLU;

	t5 = (x313^(x314%(x315==x316)));

	if (t5 != 11681840LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x446 = -1LL;
	volatile int32_t x447 = -1;
	uint64_t x448 = UINT64_MAX;

	t6 = (x445^(x446%(x447==x448)));

	if (t6 != 255LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x689 = 1262;
	uint16_t x690 = UINT16_MAX;
	int8_t x692 = 1;
	static volatile int32_t t7 = 0;

	t7 = (x689^(x690%(x691==x692)));

	if (t7 != 1262) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x873 = INT8_MAX;
	volatile int32_t x874 = -1;
	int16_t x875 = INT16_MIN;
	volatile int16_t x876 = INT16_MIN;

	t8 = (x873^(x874%(x875==x876)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x925 = INT32_MAX;
	int16_t x926 = -1;
	int32_t x928 = INT32_MIN;
	volatile int32_t t9 = INT32_MAX;

	t9 = (x925^(x926%(x927==x928)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x977 = INT8_MAX;
	int16_t x978 = -10;
	static int16_t x979 = -1;
	static int16_t x980 = -1;
	static volatile int32_t t10 = 55585058;

	t10 = (x977^(x978%(x979==x980)));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x1057 = UINT32_MAX;
	static volatile uint8_t x1058 = UINT8_MAX;
	int32_t x1059 = INT32_MIN;
	int32_t x1060 = INT32_MIN;
	static volatile uint32_t t11 = UINT32_MAX;

	t11 = (x1057^(x1058%(x1059==x1060)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1101 = INT32_MIN;
	static int8_t x1102 = INT8_MIN;
	int8_t x1103 = -1;
	static int32_t t12 = INT32_MIN;

	t12 = (x1101^(x1102%(x1103==x1104)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x1109 = -50;
	int32_t x1110 = 8046577;
	static int32_t x1111 = INT32_MAX;

	t13 = (x1109^(x1110%(x1111==x1112)));

	if (t13 != -50) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1129 = 121U;
	static int16_t x1130 = INT16_MAX;
	int64_t x1131 = INT64_MIN;
	static volatile int64_t x1132 = INT64_MIN;
	int32_t t14 = -56;

	t14 = (x1129^(x1130%(x1131==x1132)));

	if (t14 != 121) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1173 = -1;
	static uint64_t x1175 = UINT64_MAX;
	volatile int64_t t15 = -1360866200618LL;

	t15 = (x1173^(x1174%(x1175==x1176)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x1377 = 127785LL;
	volatile int16_t x1378 = -1;
	int8_t x1379 = -1;
	int8_t x1380 = -1;
	static volatile int64_t t16 = 57564718LL;

	t16 = (x1377^(x1378%(x1379==x1380)));

	if (t16 != 127785LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1405 = -5;
	int8_t x1408 = -1;
	int32_t t17 = 548118;

	t17 = (x1405^(x1406%(x1407==x1408)));

	if (t17 != -5) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1593 = 2079050925550307LLU;
	int64_t x1594 = INT64_MIN;
	static int16_t x1595 = INT16_MIN;
	static int16_t x1596 = INT16_MIN;
	volatile uint64_t t18 = 49302LLU;

	t18 = (x1593^(x1594%(x1595==x1596)));

	if (t18 != 2079050925550307LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1653 = INT16_MAX;
	int8_t x1655 = INT8_MIN;
	volatile int8_t x1656 = INT8_MIN;

	t19 = (x1653^(x1654%(x1655==x1656)));

	if (t19 != 32767LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1669 = INT32_MIN;
	uint16_t x1670 = UINT16_MAX;
	int64_t x1671 = INT64_MAX;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x1669^(x1670%(x1671==x1672)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1749 = 4U;
	uint8_t x1750 = 1U;
	int16_t x1752 = INT16_MIN;
	volatile int32_t t21 = 2127;

	t21 = (x1749^(x1750%(x1751==x1752)));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1885 = INT64_MIN;
	int64_t x1886 = 86LL;
	int8_t x1887 = INT8_MIN;
	static volatile int8_t x1888 = INT8_MIN;
	int64_t t22 = INT64_MIN;

	t22 = (x1885^(x1886%(x1887==x1888)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1889 = -1;
	int16_t x1891 = -1;
	uint64_t x1892 = UINT64_MAX;
	static uint32_t t23 = UINT32_MAX;

	t23 = (x1889^(x1890%(x1891==x1892)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1953 = 70U;
	static int8_t x1954 = INT8_MIN;
	volatile int64_t x1955 = -1LL;
	volatile int32_t t24 = -6829054;

	t24 = (x1953^(x1954%(x1955==x1956)));

	if (t24 != 70) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2213 = 215U;
	int64_t x2214 = 4496373771231298LL;
	int8_t x2215 = -1;
	int64_t x2216 = -1LL;
	volatile int64_t t25 = -8849610370LL;

	t25 = (x2213^(x2214%(x2215==x2216)));

	if (t25 != 215LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x2226 = -1;
	uint32_t x2227 = UINT32_MAX;
	int64_t t26 = 98327129998212LL;

	t26 = (x2225^(x2226%(x2227==x2228)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2395 = -1;
	int32_t x2396 = -1;
	volatile int64_t t27 = 12LL;

	t27 = (x2393^(x2394%(x2395==x2396)));

	if (t27 != 4LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x2485 = INT16_MIN;
	volatile int8_t x2488 = INT8_MIN;
	int64_t t28 = 97LL;

	t28 = (x2485^(x2486%(x2487==x2488)));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2521 = 645258703202LLU;
	volatile uint16_t x2522 = 1092U;
	int16_t x2524 = -1;

	t29 = (x2521^(x2522%(x2523==x2524)));

	if (t29 != 645258703202LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2533 = -62;
	int32_t x2535 = -1;
	volatile uint32_t t30 = 23U;

	t30 = (x2533^(x2534%(x2535==x2536)));

	if (t30 != 4294967234U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x2701 = INT64_MIN;
	static volatile uint32_t x2702 = 124325U;
	int32_t x2703 = INT32_MIN;
	volatile int32_t x2704 = INT32_MIN;
	static volatile int64_t t31 = INT64_MIN;

	t31 = (x2701^(x2702%(x2703==x2704)));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2742 = 30U;
	int32_t x2743 = -1;
	int32_t x2744 = -1;
	volatile int32_t t32 = 37334808;

	t32 = (x2741^(x2742%(x2743==x2744)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2761 = 0;
	volatile int64_t x2762 = -1LL;
	uint64_t x2763 = UINT64_MAX;
	int8_t x2764 = -1;

	t33 = (x2761^(x2762%(x2763==x2764)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2929 = 0;
	static int16_t x2932 = -1;
	static uint64_t t34 = 59885638LLU;

	t34 = (x2929^(x2930%(x2931==x2932)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x3161 = 1076323213LLU;
	uint16_t x3163 = 0U;
	static uint8_t x3164 = 0U;
	static uint64_t t35 = 4160009330241390LLU;

	t35 = (x3161^(x3162%(x3163==x3164)));

	if (t35 != 1076323213LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x3181 = UINT16_MAX;
	int16_t x3182 = INT16_MIN;
	int64_t x3183 = -1LL;
	static volatile int64_t x3184 = -1LL;
	static int32_t t36 = 403941;

	t36 = (x3181^(x3182%(x3183==x3184)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x3185 = UINT32_MAX;
	int32_t x3186 = INT32_MIN;
	int64_t x3187 = INT64_MIN;
	int64_t x3188 = INT64_MIN;
	uint32_t t37 = UINT32_MAX;

	t37 = (x3185^(x3186%(x3187==x3188)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x3217 = -1;
	int64_t x3218 = INT64_MIN;
	int32_t x3219 = -1;
	int16_t x3220 = -1;
	volatile int64_t t38 = 320069227341518742LL;

	t38 = (x3217^(x3218%(x3219==x3220)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x3333 = UINT32_MAX;
	volatile int16_t x3334 = -316;
	volatile int16_t x3335 = -1;
	int32_t x3336 = -1;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x3333^(x3334%(x3335==x3336)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x3453 = 0LLU;
	int16_t x3454 = -1;
	int64_t x3455 = -1LL;
	volatile int64_t x3456 = -1LL;
	uint64_t t40 = 28461629114171LLU;

	t40 = (x3453^(x3454%(x3455==x3456)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3554 = -32;
	static uint32_t x3555 = UINT32_MAX;
	int8_t x3556 = -1;
	int32_t t41 = -38;

	t41 = (x3553^(x3554%(x3555==x3556)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x3653 = UINT16_MAX;
	int8_t x3654 = -1;
	static uint8_t x3655 = 1U;
	int16_t x3656 = 1;
	volatile int32_t t42 = -129;

	t42 = (x3653^(x3654%(x3655==x3656)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3689 = 27;
	int64_t x3690 = INT64_MAX;
	int32_t x3691 = -1;
	volatile int64_t x3692 = -1LL;

	t43 = (x3689^(x3690%(x3691==x3692)));

	if (t43 != 27LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x3797 = -1;
	uint32_t x3798 = 1454233020U;
	volatile uint16_t x3799 = UINT16_MAX;
	uint16_t x3800 = UINT16_MAX;
	uint32_t t44 = UINT32_MAX;

	t44 = (x3797^(x3798%(x3799==x3800)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3893 = 200;
	volatile int32_t x3895 = -1;
	uint64_t x3896 = UINT64_MAX;
	volatile int32_t t45 = 16111;

	t45 = (x3893^(x3894%(x3895==x3896)));

	if (t45 != 200) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3925 = 1;
	volatile int64_t x3927 = -1LL;
	int16_t x3928 = -1;
	volatile int64_t t46 = 9537310228731LL;

	t46 = (x3925^(x3926%(x3927==x3928)));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x4182 = UINT64_MAX;
	uint64_t x4183 = UINT64_MAX;
	int16_t x4184 = -1;
	static uint64_t t47 = 864334682208604713LLU;

	t47 = (x4181^(x4182%(x4183==x4184)));

	if (t47 != 199638932LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x4230 = 1;
	static int16_t x4231 = -1;
	int8_t x4232 = -1;

	t48 = (x4229^(x4230%(x4231==x4232)));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x4361 = 103820689179085269LL;
	int8_t x4363 = -1;
	int64_t x4364 = -1LL;
	volatile int64_t t49 = -769LL;

	t49 = (x4361^(x4362%(x4363==x4364)));

	if (t49 != 103820689179085269LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x4381 = 29915131322395755LL;
	int16_t x4382 = INT16_MIN;
	uint64_t x4384 = UINT64_MAX;
	int64_t t50 = 341156LL;

	t50 = (x4381^(x4382%(x4383==x4384)));

	if (t50 != 29915131322395755LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x4394 = INT16_MAX;
	uint32_t x4396 = UINT32_MAX;
	int64_t t51 = -1035233917372LL;

	t51 = (x4393^(x4394%(x4395==x4396)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x4562 = INT32_MAX;
	int32_t x4564 = -1;
	uint32_t t52 = 695363U;

	t52 = (x4561^(x4562%(x4563==x4564)));

	if (t52 != 25U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x4637 = 2908358;
	volatile int32_t x4639 = INT32_MAX;
	static int32_t t53 = 8227963;

	t53 = (x4637^(x4638%(x4639==x4640)));

	if (t53 != 2908358) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x4774 = INT64_MIN;
	static uint64_t x4776 = UINT64_MAX;
	volatile int64_t t54 = 54153646582214LL;

	t54 = (x4773^(x4774%(x4775==x4776)));

	if (t54 != 17LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x4825 = UINT8_MAX;
	int32_t x4826 = INT32_MIN;
	uint32_t x4828 = UINT32_MAX;
	static int32_t t55 = 3070;

	t55 = (x4825^(x4826%(x4827==x4828)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x4877 = 1;
	int16_t x4879 = -1;
	int64_t x4880 = -1LL;
	volatile int32_t t56 = 1927395;

	t56 = (x4877^(x4878%(x4879==x4880)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x4953 = -180242677173066716LL;
	uint32_t x4954 = UINT32_MAX;
	int32_t x4955 = -1;
	volatile int16_t x4956 = -1;

	t57 = (x4953^(x4954%(x4955==x4956)));

	if (t57 != -180242677173066716LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x5021 = -1;
	int32_t x5022 = 0;
	int8_t x5023 = -1;
	uint64_t x5024 = UINT64_MAX;
	volatile int32_t t58 = 223812;

	t58 = (x5021^(x5022%(x5023==x5024)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x5070 = -1;
	uint32_t x5072 = UINT32_MAX;
	volatile int32_t t59 = 24562260;

	t59 = (x5069^(x5070%(x5071==x5072)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x5085 = -1LL;
	int64_t x5086 = INT64_MIN;
	uint64_t x5087 = UINT64_MAX;
	uint64_t x5088 = UINT64_MAX;
	int64_t t60 = 6LL;

	t60 = (x5085^(x5086%(x5087==x5088)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x5169 = INT8_MAX;
	volatile int32_t x5170 = -1;
	int16_t x5171 = INT16_MIN;
	volatile int16_t x5172 = INT16_MIN;
	volatile int32_t t61 = 130597840;

	t61 = (x5169^(x5170%(x5171==x5172)));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x5313 = 1691U;
	int64_t x5314 = INT64_MIN;
	volatile int32_t x5315 = INT32_MIN;
	int32_t x5316 = INT32_MIN;

	t62 = (x5313^(x5314%(x5315==x5316)));

	if (t62 != 1691LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x5329 = 9U;
	int8_t x5330 = INT8_MIN;
	uint64_t x5331 = UINT64_MAX;
	static int32_t t63 = 206;

	t63 = (x5329^(x5330%(x5331==x5332)));

	if (t63 != 9) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x5373 = -1;
	static uint32_t x5374 = 1672U;
	int16_t x5375 = INT16_MIN;
	int16_t x5376 = INT16_MIN;
	uint32_t t64 = UINT32_MAX;

	t64 = (x5373^(x5374%(x5375==x5376)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x5377 = 24261502U;
	int16_t x5378 = INT16_MIN;
	volatile int32_t x5379 = INT32_MAX;
	int32_t x5380 = INT32_MAX;
	uint32_t t65 = 13362630U;

	t65 = (x5377^(x5378%(x5379==x5380)));

	if (t65 != 24261502U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x5549 = INT8_MIN;
	static int16_t x5552 = -1;

	t66 = (x5549^(x5550%(x5551==x5552)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x5585 = -1;
	int32_t x5588 = INT32_MIN;
	volatile int32_t t67 = -874497;

	t67 = (x5585^(x5586%(x5587==x5588)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x5653 = -1;
	uint8_t x5654 = 113U;
	int64_t x5655 = -1LL;
	int8_t x5656 = -1;
	int32_t t68 = 11632221;

	t68 = (x5653^(x5654%(x5655==x5656)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5749 = -1;
	int8_t x5750 = INT8_MAX;
	int8_t x5751 = -1;
	volatile int32_t t69 = 2;

	t69 = (x5749^(x5750%(x5751==x5752)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x5833 = INT8_MIN;
	int8_t x5834 = -1;
	static volatile int8_t x5835 = -1;
	static volatile int16_t x5836 = -1;
	static volatile int32_t t70 = 114277849;

	t70 = (x5833^(x5834%(x5835==x5836)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x5985 = 118425498303LLU;
	volatile int32_t x5986 = INT32_MIN;
	int8_t x5988 = -1;
	static volatile uint64_t t71 = 2409052019921488100LLU;

	t71 = (x5985^(x5986%(x5987==x5988)));

	if (t71 != 118425498303LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x6029 = UINT16_MAX;
	int32_t x6031 = INT32_MIN;
	int32_t x6032 = INT32_MIN;
	static int32_t t72 = 16;

	t72 = (x6029^(x6030%(x6031==x6032)));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x6297 = UINT64_MAX;
	uint32_t x6298 = UINT32_MAX;
	volatile int16_t x6299 = INT16_MIN;
	static int16_t x6300 = INT16_MIN;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x6297^(x6298%(x6299==x6300)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x6353 = INT8_MIN;
	int16_t x6354 = -1;
	static volatile int8_t x6355 = -1;
	uint32_t x6356 = UINT32_MAX;
	volatile int32_t t74 = 8739417;

	t74 = (x6353^(x6354%(x6355==x6356)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x6430 = UINT32_MAX;
	int64_t x6431 = INT64_MIN;
	int64_t x6432 = INT64_MIN;
	static volatile uint32_t t75 = UINT32_MAX;

	t75 = (x6429^(x6430%(x6431==x6432)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x6475 = -1;
	int64_t x6476 = -1LL;
	volatile uint64_t t76 = 0LLU;

	t76 = (x6473^(x6474%(x6475==x6476)));

	if (t76 != 2892329841356938773LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x6577 = UINT8_MAX;
	int16_t x6578 = INT16_MAX;
	volatile int32_t x6579 = -1;
	int64_t x6580 = -1LL;
	int32_t t77 = -3;

	t77 = (x6577^(x6578%(x6579==x6580)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x6597 = UINT32_MAX;
	uint8_t x6598 = UINT8_MAX;
	static uint64_t x6599 = UINT64_MAX;
	uint32_t t78 = UINT32_MAX;

	t78 = (x6597^(x6598%(x6599==x6600)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6649 = INT8_MIN;
	uint8_t x6650 = 1U;
	int8_t x6651 = INT8_MIN;
	static int8_t x6652 = INT8_MIN;
	static volatile int32_t t79 = 804;

	t79 = (x6649^(x6650%(x6651==x6652)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x6785 = -1;
	static int16_t x6786 = INT16_MAX;
	int64_t x6787 = INT64_MIN;
	static volatile int64_t x6788 = INT64_MIN;
	static volatile int32_t t80 = -21874;

	t80 = (x6785^(x6786%(x6787==x6788)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x6793 = 816996777;
	static uint32_t x6794 = 1845665U;
	int8_t x6795 = -1;
	volatile uint64_t x6796 = UINT64_MAX;
	volatile uint32_t t81 = 1698U;

	t81 = (x6793^(x6794%(x6795==x6796)));

	if (t81 != 816996777U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x6849 = 589U;
	static volatile uint64_t x6850 = 1888171571161449LLU;
	volatile int16_t x6851 = -1;
	int32_t x6852 = -1;
	uint64_t t82 = 6LLU;

	t82 = (x6849^(x6850%(x6851==x6852)));

	if (t82 != 589LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6877 = 2;
	int64_t x6878 = -1LL;
	static int64_t x6879 = -1LL;
	static volatile int64_t t83 = 38991343807172857LL;

	t83 = (x6877^(x6878%(x6879==x6880)));

	if (t83 != 2LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x6925 = INT16_MIN;
	uint8_t x6926 = 30U;
	volatile int8_t x6927 = -1;
	static volatile uint32_t x6928 = UINT32_MAX;
	int32_t t84 = 1493726;

	t84 = (x6925^(x6926%(x6927==x6928)));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x6949 = INT64_MIN;
	static int8_t x6950 = INT8_MAX;
	int64_t x6952 = -1LL;
	static volatile int64_t t85 = INT64_MIN;

	t85 = (x6949^(x6950%(x6951==x6952)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x7041 = INT32_MIN;
	int8_t x7043 = -1;
	uint64_t x7044 = UINT64_MAX;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x7041^(x7042%(x7043==x7044)));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x7085 = INT32_MAX;
	uint32_t x7086 = 478137U;
	int16_t x7087 = -1;
	int32_t x7088 = -1;
	uint32_t t87 = 30U;

	t87 = (x7085^(x7086%(x7087==x7088)));

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x7265 = INT16_MIN;
	int32_t x7267 = INT32_MIN;
	int32_t x7268 = INT32_MIN;

	t88 = (x7265^(x7266%(x7267==x7268)));

	if (t88 != 4294934528U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x7273 = -1LL;
	int64_t x7274 = INT64_MAX;
	volatile int8_t x7275 = -1;
	uint64_t x7276 = UINT64_MAX;
	int64_t t89 = 6915198030LL;

	t89 = (x7273^(x7274%(x7275==x7276)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x7545 = 186;
	uint8_t x7546 = UINT8_MAX;
	volatile int64_t x7548 = -1LL;

	t90 = (x7545^(x7546%(x7547==x7548)));

	if (t90 != 186) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x7573 = 50055598U;
	int64_t x7575 = -1LL;
	int64_t x7576 = -1LL;

	t91 = (x7573^(x7574%(x7575==x7576)));

	if (t91 != 50055598U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x7686 = UINT16_MAX;
	static uint64_t x7687 = UINT64_MAX;
	static int32_t t92 = -86754041;

	t92 = (x7685^(x7686%(x7687==x7688)));

	if (t92 != 99) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x7825 = INT16_MIN;
	volatile int16_t x7826 = INT16_MIN;
	int8_t x7827 = INT8_MIN;
	static int8_t x7828 = INT8_MIN;
	int32_t t93 = -14200;

	t93 = (x7825^(x7826%(x7827==x7828)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x7833 = UINT8_MAX;
	volatile uint64_t x7834 = 130946033LLU;
	int64_t x7835 = -1LL;
	static uint64_t x7836 = UINT64_MAX;

	t94 = (x7833^(x7834%(x7835==x7836)));

	if (t94 != 255LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x8045 = -26;
	static volatile int64_t x8046 = -1LL;
	int64_t t95 = 134595304458LL;

	t95 = (x8045^(x8046%(x8047==x8048)));

	if (t95 != -26LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x8061 = 12U;
	uint16_t x8062 = 3U;
	int32_t t96 = 11298;

	t96 = (x8061^(x8062%(x8063==x8064)));

	if (t96 != 12) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x8185 = INT8_MIN;
	int64_t x8186 = INT64_MAX;
	static volatile int16_t x8187 = -1;
	int16_t x8188 = -1;
	int64_t t97 = -1825046LL;

	t97 = (x8185^(x8186%(x8187==x8188)));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x8253 = INT32_MIN;
	static int64_t x8254 = INT64_MAX;
	volatile int32_t x8255 = -1;
	int32_t x8256 = -1;
	int64_t t98 = -46765842952798LL;

	t98 = (x8253^(x8254%(x8255==x8256)));

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x8281 = -1;
	int32_t x8282 = INT32_MIN;
	uint8_t x8283 = UINT8_MAX;
	int32_t t99 = 406;

	t99 = (x8281^(x8282%(x8283==x8284)));

	if (t99 != -1) { NG(); } else { ; }
	
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

