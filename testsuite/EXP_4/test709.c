#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x41 = UINT16_MAX;
int16_t x83 = INT16_MIN;
uint16_t x97 = 7850U;
int32_t t6 = -1020;
int32_t t7 = 914970858;
static uint32_t x161 = UINT32_MAX;
int16_t x164 = -9953;
int32_t t9 = 5855;
int8_t x184 = -1;
uint32_t x209 = 1111947U;
volatile uint32_t t11 = 977266U;
uint64_t t12 = 115604736LLU;
static uint32_t x249 = 0U;
int8_t x252 = 1;
static volatile uint32_t t13 = 14999U;
volatile int16_t x259 = INT16_MIN;
uint32_t x409 = 327U;
int32_t x437 = 376;
int32_t t18 = 62794;
static uint16_t x443 = 333U;
int64_t t20 = INT64_MAX;
uint64_t x501 = 1754384138352137036LLU;
static int32_t x502 = 1097;
int64_t x504 = -1LL;
uint64_t t22 = 1950771583196LLU;
uint32_t x573 = 2881U;
int16_t x578 = INT16_MIN;
volatile uint16_t x580 = UINT16_MAX;
volatile int8_t x707 = -2;
volatile int8_t x747 = INT8_MIN;
uint64_t t27 = UINT64_MAX;
volatile int32_t x769 = INT32_MAX;
volatile int64_t x778 = INT64_MIN;
int64_t x780 = INT64_MIN;
uint32_t x797 = UINT32_MAX;
int32_t x826 = 21196027;
uint16_t x844 = 7U;
volatile uint64_t t34 = 487681917636274LLU;
uint8_t x935 = 29U;
volatile int16_t x936 = INT16_MIN;
volatile int32_t t38 = -64416;
int8_t x966 = -28;
uint32_t x972 = 24919U;
int32_t x1047 = -1;
uint64_t x1048 = UINT64_MAX;
volatile int16_t x1085 = 1;
uint64_t x1090 = UINT64_MAX;
int64_t x1102 = INT64_MIN;
uint8_t x1134 = 1U;
int8_t x1138 = INT8_MAX;
static int64_t x1170 = INT64_MAX;
int16_t x1171 = 0;
static int64_t x1172 = -1LL;
int32_t x1246 = -8211476;
int16_t x1290 = 0;
int32_t t53 = -50514;
uint8_t x1321 = 3U;
static volatile uint16_t x1322 = UINT16_MAX;
static int16_t x1336 = 10;
uint64_t x1358 = UINT64_MAX;
volatile uint64_t x1359 = 110605LLU;
uint32_t t57 = UINT32_MAX;
uint64_t x1369 = 6961085756422287LLU;
uint16_t x1405 = 956U;
int32_t x1407 = INT32_MAX;
volatile uint8_t x1481 = UINT8_MAX;
uint8_t x1539 = 0U;
uint8_t x1561 = UINT8_MAX;
int8_t x1564 = -1;
volatile uint32_t x1585 = 46499346U;
static uint64_t x1613 = 558095786604LLU;
uint32_t x1641 = 310628714U;
int8_t x1740 = -1;
static int8_t x1801 = INT8_MAX;
static uint8_t x1921 = 48U;
int32_t x1994 = 1;
int64_t t78 = -1LL;
static volatile int32_t x2148 = -1;
uint16_t x2153 = UINT16_MAX;
uint32_t x2158 = UINT32_MAX;
int8_t x2228 = INT8_MIN;
uint32_t x2263 = UINT32_MAX;
int8_t x2264 = -1;
uint32_t x2281 = UINT32_MAX;
static uint32_t x2283 = 0U;
volatile uint32_t x2338 = 1918511U;
volatile int32_t x2429 = 225651;
int8_t x2470 = INT8_MAX;
int8_t x2492 = 12;
int32_t x2503 = -1;
static volatile uint8_t x2504 = 119U;
uint32_t x2537 = 2164U;
int64_t x2555 = -112904311976LL;
int32_t t99 = -954;


void f0(void) {
	uint32_t x13 = 296353U;
	static int64_t x14 = -18849102353839LL;
	uint32_t x15 = UINT32_MAX;
	static int32_t x16 = -1;
	volatile uint32_t t0 = 1755397478U;

	t0 = (x13>>(x14*(x15%x16)));

	if (t0 != 296353U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x33 = 5U;
	volatile uint64_t x34 = 0LLU;
	static int32_t x35 = -669;
	static uint16_t x36 = 945U;
	static int32_t t1 = -29641;

	t1 = (x33>>(x34*(x35%x36)));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x42 = 30U;
	int8_t x43 = INT8_MIN;
	uint16_t x44 = 1U;
	static volatile int32_t t2 = -276;

	t2 = (x41>>(x42*(x43%x44)));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x81 = UINT64_MAX;
	static volatile uint16_t x82 = 1493U;
	int16_t x84 = INT16_MIN;
	uint64_t t3 = UINT64_MAX;

	t3 = (x81>>(x82*(x83%x84)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x85 = 25;
	int64_t x86 = -1LL;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = -1;
	static volatile int32_t t4 = 105958817;

	t4 = (x85>>(x86*(x87%x88)));

	if (t4 != 25) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x98 = -30219735246851LL;
	int64_t x99 = -1073143239022795576LL;
	uint16_t x100 = 1U;
	volatile int32_t t5 = -950919330;

	t5 = (x97>>(x98*(x99%x100)));

	if (t5 != 7850) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x101 = UINT8_MAX;
	uint32_t x102 = UINT32_MAX;
	uint32_t x103 = 0U;
	int64_t x104 = -345780452887841945LL;

	t6 = (x101>>(x102*(x103%x104)));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x141 = 12886;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = -1;
	static int8_t x144 = INT8_MIN;

	t7 = (x141>>(x142*(x143%x144)));

	if (t7 != 6443) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x162 = 0;
	int64_t x163 = -654LL;
	uint32_t t8 = UINT32_MAX;

	t8 = (x161>>(x162*(x163%x164)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x173 = 11U;
	int64_t x174 = -211851LL;
	int8_t x175 = INT8_MIN;
	int8_t x176 = -1;

	t9 = (x173>>(x174*(x175%x176)));

	if (t9 != 11) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x181 = UINT32_MAX;
	volatile int8_t x182 = INT8_MAX;
	volatile int64_t x183 = INT64_MIN;
	uint32_t t10 = UINT32_MAX;

	t10 = (x181>>(x182*(x183%x184)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x210 = INT16_MIN;
	volatile int8_t x211 = 0;
	int8_t x212 = 3;

	t11 = (x209>>(x210*(x211%x212)));

	if (t11 != 1111947U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x217 = 6978056LLU;
	uint32_t x218 = UINT32_MAX;
	int16_t x219 = -1;
	uint16_t x220 = 15U;

	t12 = (x217>>(x218*(x219%x220)));

	if (t12 != 3489028LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x250 = 64314363097152077LLU;
	static volatile int32_t x251 = -1;

	t13 = (x249>>(x250*(x251%x252)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x253 = INT32_MAX;
	int8_t x254 = INT8_MIN;
	int32_t x255 = -1;
	static uint64_t x256 = UINT64_MAX;
	static int32_t t14 = INT32_MAX;

	t14 = (x253>>(x254*(x255%x256)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x257 = INT8_MAX;
	uint16_t x258 = 381U;
	static int16_t x260 = -1;
	int32_t t15 = -5127;

	t15 = (x257>>(x258*(x259%x260)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x377 = 8U;
	int64_t x378 = INT64_MIN;
	uint8_t x379 = 17U;
	static int8_t x380 = -1;
	static int32_t t16 = 176;

	t16 = (x377>>(x378*(x379%x380)));

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x410 = 3U;
	volatile uint64_t x411 = UINT64_MAX;
	uint16_t x412 = UINT16_MAX;
	volatile uint32_t t17 = 2016236907U;

	t17 = (x409>>(x410*(x411%x412)));

	if (t17 != 327U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x438 = INT32_MIN;
	volatile uint32_t x439 = 3424U;
	int16_t x440 = INT16_MIN;

	t18 = (x437>>(x438*(x439%x440)));

	if (t18 != 376) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x441 = 8315127208899LLU;
	int16_t x442 = INT16_MIN;
	static volatile int8_t x444 = 37;
	volatile uint64_t t19 = 683LLU;

	t19 = (x441>>(x442*(x443%x444)));

	if (t19 != 8315127208899LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x469 = INT64_MAX;
	uint8_t x470 = UINT8_MAX;
	uint32_t x471 = 7606248U;
	uint8_t x472 = 1U;

	t20 = (x469>>(x470*(x471%x472)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x485 = 62368037;
	uint64_t x486 = 29718758119LLU;
	int16_t x487 = -1;
	volatile int64_t x488 = -1LL;
	int32_t t21 = 1;

	t21 = (x485>>(x486*(x487%x488)));

	if (t21 != 62368037) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x503 = UINT8_MAX;

	t22 = (x501>>(x502*(x503%x504)));

	if (t22 != 1754384138352137036LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x574 = 15U;
	uint8_t x575 = 3U;
	int32_t x576 = -1;
	static volatile uint32_t t23 = 4465192U;

	t23 = (x573>>(x574*(x575%x576)));

	if (t23 != 2881U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x577 = UINT32_MAX;
	static uint32_t x579 = UINT32_MAX;
	uint32_t t24 = UINT32_MAX;

	t24 = (x577>>(x578*(x579%x580)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x685 = 7816;
	uint16_t x686 = 0U;
	int8_t x687 = INT8_MAX;
	uint64_t x688 = 3551411LLU;
	volatile int32_t t25 = -1377;

	t25 = (x685>>(x686*(x687%x688)));

	if (t25 != 7816) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x705 = UINT8_MAX;
	int32_t x706 = -1;
	volatile int64_t x708 = INT64_MIN;
	volatile int32_t t26 = -2320;

	t26 = (x705>>(x706*(x707%x708)));

	if (t26 != 63) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x745 = UINT64_MAX;
	int16_t x746 = 0;
	int64_t x748 = -1LL;

	t27 = (x745>>(x746*(x747%x748)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x753 = 622711U;
	static uint64_t x754 = 1535951522337LLU;
	uint16_t x755 = 0U;
	int16_t x756 = -35;
	volatile uint32_t t28 = 9U;

	t28 = (x753>>(x754*(x755%x756)));

	if (t28 != 622711U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x770 = 0LLU;
	int32_t x771 = INT32_MAX;
	volatile int16_t x772 = INT16_MIN;
	int32_t t29 = INT32_MAX;

	t29 = (x769>>(x770*(x771%x772)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x777 = INT8_MAX;
	uint64_t x779 = 1675477808246LLU;
	static volatile int32_t t30 = 1177067;

	t30 = (x777>>(x778*(x779%x780)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x798 = UINT32_MAX;
	static uint32_t x799 = 0U;
	static int16_t x800 = INT16_MAX;
	uint32_t t31 = UINT32_MAX;

	t31 = (x797>>(x798*(x799%x800)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x825 = 0;
	int64_t x827 = INT64_MIN;
	volatile uint16_t x828 = 1U;
	volatile int32_t t32 = 79952;

	t32 = (x825>>(x826*(x827%x828)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x841 = UINT8_MAX;
	static int8_t x842 = -7;
	int16_t x843 = -1;
	volatile int32_t t33 = -596;

	t33 = (x841>>(x842*(x843%x844)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x905 = 2054157827875LLU;
	int32_t x906 = INT32_MIN;
	int32_t x907 = INT32_MIN;
	int32_t x908 = INT32_MIN;

	t34 = (x905>>(x906*(x907%x908)));

	if (t34 != 2054157827875LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x909 = 13704765071LL;
	uint8_t x910 = 0U;
	int8_t x911 = INT8_MIN;
	int16_t x912 = -45;
	volatile int64_t t35 = 1394190069266LL;

	t35 = (x909>>(x910*(x911%x912)));

	if (t35 != 13704765071LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x925 = 2U;
	int8_t x926 = INT8_MAX;
	volatile int64_t x927 = INT64_MIN;
	volatile int64_t x928 = INT64_MIN;
	static volatile int32_t t36 = -5;

	t36 = (x925>>(x926*(x927%x928)));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x933 = 29292048U;
	int8_t x934 = 0;
	volatile uint32_t t37 = 847739146U;

	t37 = (x933>>(x934*(x935%x936)));

	if (t37 != 29292048U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x945 = 11;
	int64_t x946 = 422791722417118LL;
	int8_t x947 = -1;
	volatile uint32_t x948 = UINT32_MAX;

	t38 = (x945>>(x946*(x947%x948)));

	if (t38 != 11) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x965 = 14U;
	int32_t x967 = INT32_MIN;
	static uint32_t x968 = UINT32_MAX;
	static volatile int32_t t39 = -253;

	t39 = (x965>>(x966*(x967%x968)));

	if (t39 != 14) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x969 = 0U;
	volatile uint16_t x970 = 5U;
	int8_t x971 = 0;
	static uint32_t t40 = 38229U;

	t40 = (x969>>(x970*(x971%x972)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x977 = 24U;
	volatile uint32_t x978 = 145U;
	static volatile uint32_t x979 = 0U;
	int8_t x980 = -1;
	volatile int32_t t41 = 1;

	t41 = (x977>>(x978*(x979%x980)));

	if (t41 != 24) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1045 = UINT8_MAX;
	uint64_t x1046 = UINT64_MAX;
	int32_t t42 = -15134;

	t42 = (x1045>>(x1046*(x1047%x1048)));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x1086 = UINT8_MAX;
	int64_t x1087 = INT64_MIN;
	static int8_t x1088 = 8;
	volatile int32_t t43 = 7598;

	t43 = (x1085>>(x1086*(x1087%x1088)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1089 = 4U;
	int64_t x1091 = INT64_MIN;
	volatile uint8_t x1092 = 5U;
	int32_t t44 = 277866838;

	t44 = (x1089>>(x1090*(x1091%x1092)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1101 = UINT8_MAX;
	static int8_t x1103 = INT8_MIN;
	int8_t x1104 = -1;
	static volatile int32_t t45 = -13;

	t45 = (x1101>>(x1102*(x1103%x1104)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x1133 = 1U;
	uint32_t x1135 = 2U;
	static volatile int32_t x1136 = -6342;
	int32_t t46 = 143597200;

	t46 = (x1133>>(x1134*(x1135%x1136)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1137 = 2LL;
	int8_t x1139 = 0;
	int64_t x1140 = -28971LL;
	volatile int64_t t47 = 36LL;

	t47 = (x1137>>(x1138*(x1139%x1140)));

	if (t47 != 2LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1149 = 9;
	int16_t x1150 = -1;
	int64_t x1151 = -1LL;
	int8_t x1152 = -55;
	volatile int32_t t48 = -14714;

	t48 = (x1149>>(x1150*(x1151%x1152)));

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1169 = 4U;
	static volatile int32_t t49 = 159891;

	t49 = (x1169>>(x1170*(x1171%x1172)));

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x1177 = 0U;
	uint32_t x1178 = 24U;
	volatile int64_t x1179 = -1LL;
	static int64_t x1180 = -1LL;
	volatile int32_t t50 = 191488;

	t50 = (x1177>>(x1178*(x1179%x1180)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1245 = UINT32_MAX;
	int64_t x1247 = INT64_MIN;
	static uint16_t x1248 = 1U;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x1245>>(x1246*(x1247%x1248)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x1289 = UINT32_MAX;
	volatile int8_t x1291 = INT8_MIN;
	volatile uint64_t x1292 = 4633069088136055LLU;
	static uint32_t t52 = UINT32_MAX;

	t52 = (x1289>>(x1290*(x1291%x1292)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x1297 = 735;
	static volatile uint16_t x1298 = UINT16_MAX;
	uint8_t x1299 = UINT8_MAX;
	int16_t x1300 = -1;

	t53 = (x1297>>(x1298*(x1299%x1300)));

	if (t53 != 735) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x1309 = UINT32_MAX;
	int8_t x1310 = -2;
	int32_t x1311 = -1;
	static int16_t x1312 = INT16_MAX;
	volatile uint32_t t54 = 95807541U;

	t54 = (x1309>>(x1310*(x1311%x1312)));

	if (t54 != 1073741823U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1323 = -1;
	volatile uint64_t x1324 = UINT64_MAX;
	volatile int32_t t55 = -30343528;

	t55 = (x1321>>(x1322*(x1323%x1324)));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1333 = 88834857LLU;
	int8_t x1334 = -1;
	static uint64_t x1335 = 227591688768070LLU;
	uint64_t t56 = 4LLU;

	t56 = (x1333>>(x1334*(x1335%x1336)));

	if (t56 != 88834857LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1357 = UINT32_MAX;
	int8_t x1360 = 1;

	t57 = (x1357>>(x1358*(x1359%x1360)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1370 = INT8_MIN;
	int64_t x1371 = INT64_MIN;
	int8_t x1372 = 1;
	volatile uint64_t t58 = 8955LLU;

	t58 = (x1369>>(x1370*(x1371%x1372)));

	if (t58 != 6961085756422287LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1385 = 5U;
	volatile uint8_t x1386 = UINT8_MAX;
	uint16_t x1387 = 39U;
	volatile int16_t x1388 = -1;
	uint32_t t59 = 1365859344U;

	t59 = (x1385>>(x1386*(x1387%x1388)));

	if (t59 != 5U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1406 = UINT64_MAX;
	static int32_t x1408 = -1;
	volatile int32_t t60 = -1948922;

	t60 = (x1405>>(x1406*(x1407%x1408)));

	if (t60 != 956) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x1482 = 901U;
	int16_t x1483 = 1;
	int8_t x1484 = 1;
	int32_t t61 = -53;

	t61 = (x1481>>(x1482*(x1483%x1484)));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1537 = 3609U;
	int32_t x1538 = INT32_MAX;
	volatile uint8_t x1540 = 24U;
	volatile int32_t t62 = 1;

	t62 = (x1537>>(x1538*(x1539%x1540)));

	if (t62 != 3609) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x1562 = 3;
	static volatile uint16_t x1563 = UINT16_MAX;
	volatile int32_t t63 = 150188759;

	t63 = (x1561>>(x1562*(x1563%x1564)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1586 = 2;
	static int8_t x1587 = 4;
	uint64_t x1588 = 1LLU;
	static volatile uint32_t t64 = 17756956U;

	t64 = (x1585>>(x1586*(x1587%x1588)));

	if (t64 != 46499346U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x1589 = 444659LLU;
	static int32_t x1590 = INT32_MIN;
	int8_t x1591 = INT8_MIN;
	int8_t x1592 = 1;
	volatile uint64_t t65 = 20117353LLU;

	t65 = (x1589>>(x1590*(x1591%x1592)));

	if (t65 != 444659LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x1605 = UINT8_MAX;
	int16_t x1606 = 18;
	int16_t x1607 = 4;
	static volatile int8_t x1608 = -4;
	int32_t t66 = -35791823;

	t66 = (x1605>>(x1606*(x1607%x1608)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1609 = 15;
	uint8_t x1610 = UINT8_MAX;
	volatile uint16_t x1611 = 3U;
	int8_t x1612 = -1;
	volatile int32_t t67 = 69;

	t67 = (x1609>>(x1610*(x1611%x1612)));

	if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1614 = 1008;
	uint16_t x1615 = 0U;
	static uint16_t x1616 = 27U;
	uint64_t t68 = 96362164448746950LLU;

	t68 = (x1613>>(x1614*(x1615%x1616)));

	if (t68 != 558095786604LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1642 = -1;
	uint8_t x1643 = 35U;
	int32_t x1644 = 1;
	static volatile uint32_t t69 = 1850782U;

	t69 = (x1641>>(x1642*(x1643%x1644)));

	if (t69 != 310628714U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x1661 = UINT8_MAX;
	int8_t x1662 = INT8_MIN;
	int64_t x1663 = INT64_MIN;
	uint64_t x1664 = 1LLU;
	int32_t t70 = -6827196;

	t70 = (x1661>>(x1662*(x1663%x1664)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1689 = UINT8_MAX;
	int8_t x1690 = 11;
	int64_t x1691 = -1368560583454732LL;
	int16_t x1692 = 1;
	int32_t t71 = -33379322;

	t71 = (x1689>>(x1690*(x1691%x1692)));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1733 = 0;
	int32_t x1734 = -1;
	int32_t x1735 = INT32_MIN;
	int8_t x1736 = -5;
	int32_t t72 = 0;

	t72 = (x1733>>(x1734*(x1735%x1736)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x1737 = 2018U;
	uint16_t x1738 = UINT16_MAX;
	uint8_t x1739 = 4U;
	static uint32_t t73 = 6478358U;

	t73 = (x1737>>(x1738*(x1739%x1740)));

	if (t73 != 2018U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1797 = 62;
	int64_t x1798 = -1LL;
	int16_t x1799 = INT16_MIN;
	int8_t x1800 = 6;
	volatile int32_t t74 = -40506;

	t74 = (x1797>>(x1798*(x1799%x1800)));

	if (t74 != 15) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1802 = -1;
	int32_t x1803 = INT32_MIN;
	static uint16_t x1804 = 172U;
	volatile int32_t t75 = 278;

	t75 = (x1801>>(x1802*(x1803%x1804)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1922 = 0U;
	static volatile int8_t x1923 = 1;
	static int8_t x1924 = 35;
	int32_t t76 = 1847;

	t76 = (x1921>>(x1922*(x1923%x1924)));

	if (t76 != 48) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1993 = 1U;
	volatile uint16_t x1995 = 2461U;
	uint8_t x1996 = 107U;
	static volatile uint32_t t77 = 15871U;

	t77 = (x1993>>(x1994*(x1995%x1996)));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x1997 = 3LL;
	int64_t x1998 = INT64_MIN;
	int16_t x1999 = -1;
	int64_t x2000 = -1LL;

	t78 = (x1997>>(x1998*(x1999%x2000)));

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2101 = 134935594U;
	int8_t x2102 = 2;
	uint64_t x2103 = UINT64_MAX;
	int64_t x2104 = -1LL;
	static volatile uint32_t t79 = 548668940U;

	t79 = (x2101>>(x2102*(x2103%x2104)));

	if (t79 != 134935594U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2145 = 2995U;
	int16_t x2146 = 3989;
	static int8_t x2147 = INT8_MIN;
	int32_t t80 = 89639;

	t80 = (x2145>>(x2146*(x2147%x2148)));

	if (t80 != 2995) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2154 = -222795449;
	int32_t x2155 = INT32_MAX;
	volatile int32_t x2156 = INT32_MAX;
	static volatile int32_t t81 = -1;

	t81 = (x2153>>(x2154*(x2155%x2156)));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2157 = 19779U;
	int32_t x2159 = INT32_MIN;
	int64_t x2160 = -1LL;
	volatile int32_t t82 = 1413077;

	t82 = (x2157>>(x2158*(x2159%x2160)));

	if (t82 != 19779) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x2225 = 748189455;
	uint8_t x2226 = 2U;
	int64_t x2227 = INT64_MIN;
	int32_t t83 = 4393;

	t83 = (x2225>>(x2226*(x2227%x2228)));

	if (t83 != 748189455) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2233 = INT32_MAX;
	int16_t x2234 = 0;
	uint8_t x2235 = 0U;
	static uint16_t x2236 = 340U;
	static volatile int32_t t84 = INT32_MAX;

	t84 = (x2233>>(x2234*(x2235%x2236)));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x2261 = 3202757U;
	uint8_t x2262 = 4U;
	uint32_t t85 = 83143451U;

	t85 = (x2261>>(x2262*(x2263%x2264)));

	if (t85 != 3202757U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2269 = 7;
	static int64_t x2270 = 0LL;
	int64_t x2271 = 60661527773LL;
	int64_t x2272 = INT64_MIN;
	volatile int32_t t86 = -383937032;

	t86 = (x2269>>(x2270*(x2271%x2272)));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2277 = 2;
	int32_t x2278 = 0;
	static int8_t x2279 = -1;
	uint32_t x2280 = 40689343U;
	int32_t t87 = -9;

	t87 = (x2277>>(x2278*(x2279%x2280)));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x2282 = 321768478LLU;
	int16_t x2284 = INT16_MIN;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x2281>>(x2282*(x2283%x2284)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2337 = 1495U;
	uint64_t x2339 = UINT64_MAX;
	uint8_t x2340 = 15U;
	static int32_t t89 = 173;

	t89 = (x2337>>(x2338*(x2339%x2340)));

	if (t89 != 1495) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2341 = 314597791U;
	static int64_t x2342 = INT64_MIN;
	int8_t x2343 = INT8_MIN;
	uint64_t x2344 = 191452LLU;
	uint32_t t90 = 121U;

	t90 = (x2341>>(x2342*(x2343%x2344)));

	if (t90 != 314597791U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x2409 = INT16_MAX;
	static int64_t x2410 = INT64_MAX;
	volatile int64_t x2411 = INT64_MIN;
	int8_t x2412 = INT8_MIN;
	int32_t t91 = -793886903;

	t91 = (x2409>>(x2410*(x2411%x2412)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2430 = -1472;
	int8_t x2431 = 0;
	int32_t x2432 = 28287125;
	int32_t t92 = -32145020;

	t92 = (x2429>>(x2430*(x2431%x2432)));

	if (t92 != 225651) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2469 = UINT16_MAX;
	volatile uint16_t x2471 = 0U;
	static uint64_t x2472 = 62LLU;
	int32_t t93 = 5803577;

	t93 = (x2469>>(x2470*(x2471%x2472)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x2489 = 1415;
	int64_t x2490 = -1LL;
	int8_t x2491 = INT8_MIN;
	volatile int32_t t94 = -791838826;

	t94 = (x2489>>(x2490*(x2491%x2492)));

	if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x2501 = UINT32_MAX;
	int64_t x2502 = -1LL;
	uint32_t t95 = 1148785613U;

	t95 = (x2501>>(x2502*(x2503%x2504)));

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2509 = 83LLU;
	uint8_t x2510 = 7U;
	int64_t x2511 = -1LL;
	int64_t x2512 = -1LL;
	static volatile uint64_t t96 = 3293258628992LLU;

	t96 = (x2509>>(x2510*(x2511%x2512)));

	if (t96 != 83LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2529 = INT32_MAX;
	int16_t x2530 = -94;
	static int32_t x2531 = INT32_MAX;
	int64_t x2532 = -1LL;
	int32_t t97 = INT32_MAX;

	t97 = (x2529>>(x2530*(x2531%x2532)));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2538 = -1;
	uint32_t x2539 = UINT32_MAX;
	volatile int8_t x2540 = 1;
	static uint32_t t98 = 1594996169U;

	t98 = (x2537>>(x2538*(x2539%x2540)));

	if (t98 != 2164U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x2553 = UINT16_MAX;
	static uint64_t x2554 = UINT64_MAX;
	volatile int8_t x2556 = -1;

	t99 = (x2553>>(x2554*(x2555%x2556)));

	if (t99 != 65535) { NG(); } else { ; }
	
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

